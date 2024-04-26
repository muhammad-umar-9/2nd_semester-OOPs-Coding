#include"2023535_definitions_2.cpp"
int main()
{ 
	cout<<"You can store record of 5 persons maximum \n"<<endl;
	cout<<"How many persons records do you want to save"<<endl;
	cin>>number_of_records;
	insertNewRecord(person_Record,number_of_records);
	system("cls");
	showAllRecords(person_Record);
	return 0;
}