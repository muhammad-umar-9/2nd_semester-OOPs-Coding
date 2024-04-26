#include <iostream>
#include <string.h>
#include <iomanip>
#include <limits>
using namespace std;

struct book
{
    int Quantity;
    string author;
    string title;
    int flag = 0;
    int accession_number;
};

//Function prototype
void Display (book Book[], int size);
void Display_by_author (book Book[], int size, string author);
void Display_by_title (book Book[], int size, string title);
void issue_a_book (book Book[], int size, string title);
void add_a_book (book *&Book, int &size);
void Return_by_title(book Book[], int size, string title);


int main()
{
    int size = 5, choice;
    string title, author;
    char decision;
    book *Book = new book[size];

    Book[0] = {5, "George Orwell", "1984", 0, 1001};
    Book[1] = {8, "J.K. Rowling", "Harry Potter and the Philosopher's Stone", 0, 1002};
    Book[2] = {3, "Harper Lee", "To Kill a Mockingbird", 0, 1003};
    Book[3] = {12, "Agatha Christie", "Murder on the Orient Express", 0, 1004};
    Book[4] = {10, "F. Scott Fitzgerald", "The Great Gatsby", 0, 1005};
    
    cout<<endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Book[i].Quantity;
    }

    cout<<"==========================================="<<endl;
    cout<<"Welcome to Library management system: "<<endl;
    cout<<"=========================================="<<endl;

    cout<<"+----------------------------------------------------+"<<endl;
    cout<<"We have currently "<<sum<<" number of books available"<<endl;
    cout<<"+----------------------------------------------------+"<<endl;
    cout<<endl;

    cout<<endl;
    cout<<endl;



    while (true)
    {
        Display(Book, size);
        cout<<endl;
        cout<<"1. Issue a book\n"
        <<"2. Add a book\n"
        <<"3. Certain author's books\n"
        <<"4. Number of copies available of a certain book\n"
        <<"5. Return a Book\n";
        cout<<endl;

        cout<<"What would you like to do: ";
        cin>>choice;
        cout<<endl;


        switch (choice)
        {
            case 1:
            {
                system("cls");
                cout<<endl;
                cout<<"Which book would you like to borrow: ";
                cin.ignore();
                getline(cin, title);
                issue_a_book(Book, size, title);  //Calling function for issuing a book by title
                cout<<endl;
                Display(Book, size);
                break;
            }
            case 2:
            {
                system("cls");
                cout<<endl;
                add_a_book(Book, size); //Calling function adding a new book
                cout<<endl;
                Display(Book, size);                
                break;
            }
            case 3:
            {
                system("cls");
                cout<<endl;
                cout<<"Which author's book would like to find: ";
                cin.ignore(); 
                getline(cin, author);
                cout<<endl; 
                Display_by_author(Book, size, author);  //Calling function for finding books by author
                break;
            }
            case 4:
            {
                system("cls");
                cout<<endl;
                cout<<"Which book's number of copies would like to know: ";
                cin.ignore();
                getline(cin, title);
                cout<<endl;
                Display_by_title(Book, size, title);  //Calling function finding number of books by title
                break;
            }
            case 5:
            {
                system("cls");
                cout<<endl;
                cout<<"Which book would you like to return: ";
                cin.ignore();
                getline(cin, title);
                cout<<endl;
                Return_by_title(Book, size, title);   //Calling function for returning a book by title
                break;
            }
        }
        cout<<endl;
        cout<<"Would you like to leave? (Y/N) ";
        cin>>decision;

        if (decision == 'Y')
        {
            cout<<"Please, come again";
            delete[] Book;
            break;
        }
    }
}

//Function declarations

void Display(book Book[], int size)
{
    cout << setw(5) << "Index" << setw(50) << "Title" << setw(25) << "Author" << setw(10) << "Quantity" << endl;
    cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;

    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << i + 1 << setw(50) << Book[i].title << setw(25) << Book[i].author << setw(10) << Book[i].Quantity << endl;
    }
}

void Display_by_author (book Book[], int size, string author)
{
    for (int i = 0; i < size; i++)
    {
        if (Book[i].author == author)
        {
            cout<<"Following are the books written by the author you requested:"<<endl;
            cout<<Book[i].title<<endl;
        }
    }
}

void Display_by_title (book Book[], int size, string title)
{
    for (int i = 0; i < size; i++)
    {
        if (Book[i].title == title)
        {
            cout<<"Following is the number of copies available for the book you requested"<<endl;
            cout << setw(5) << "Title" << setw(40) << "Quantity" << endl;
            cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;
            cout << setw(5) << Book[i].title << setw(40) << Book[i].Quantity << endl;
        }
    }
}

void issue_a_book (book Book[], int size, string title)
{
    for (int i = 0; i < size; i++)
    {
        if (Book[i].title == title)
        {
            if (Book[i].Quantity > 0)
            {
                cout<<"Here you have your "<<Book[i].title;
                Book[i].Quantity--;
                Book[i].flag = 1;
                break;
            }
            else
            {
                cout<<"We dont have enough copies";
            }
        }
    }
}
void add_a_book(book *&Book, int &size)
{
    size++;
    book *temp = new book[size];

    if (!temp) {
        // Handle memory allocation failure
        cout << "Memory allocation failed." << endl;
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = Book[i];
    }

    // Clear input buffer to get rid of garbage values
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter book name: ";
    getline(cin, temp[size - 1].title);
    cout << endl;

    cout << "Enter author: ";
    getline(cin, temp[size - 1].author);
    cout << endl;

    cout << "Enter quantity you would like to give: ";
    cin >> temp[size - 1].Quantity;
    temp[size - 1].accession_number = 1005 + (rand() % 10);

    Book = temp;
    
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');   // Clear input buffer to get rid of garbage values
}

void Return_by_title(book Book[], int size, string title)
{
    for (int i = 0; i < size; i++)
    {
        if (Book[i].title == title && Book[i].flag == 1)
        {
            cout<<"Thank you for returning "<<Book[i].title;
            Book[i].Quantity++;
            Book[i].flag = 0;
            break;
        }
    }
}
