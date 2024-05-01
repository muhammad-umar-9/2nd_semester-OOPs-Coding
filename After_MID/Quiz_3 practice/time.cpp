#include<iostream>
using namespace std;

class Time
{
	private:
		int hour , minute , seconds;
	public:
	Time(int a , int b , int c)
	{
		hour   = a;
		minute = b;
		seconds = c;
			
	}

      Time operator++()
       {
        // Increment seconds
        seconds++;
        
        // Handle overflow of seconds to minutes
        if (seconds >= 60) {
            seconds = 0;
            minute++;
        }

        // Handle overflow of minutes to hours
        if (minute >= 60) {
            minute = 0;
            hour++;
        }

        // Handle overflow of hours to 0 (24-hour format)
        if (hour >= 24)
         {
            hour = 0;
        }
        
        return *this; // Return the updated object
    }

         Time operator--() {
        // Decrement seconds
        seconds--;
        
        // Handle underflow of seconds to minutes
        if (seconds < 0) {
            seconds = 59;
            minute--;
        }

        // Handle underflow of minutes to hours
        if (minute < 0) {
            minute = 59;
            hour--;
        }

        // Handle underflow of hours (24-hour format)
        if (hour < 0) {
            hour = 23;
        }
        
        return *this; // Return the updated object
    }

	
	
	void display()
	{
		cout<<"Hour "<< hour <<" "<<"Minute "<< minute <<" "<<"Seconds "<< seconds <<endl;
	}
		
};
int main()
{
	Time t1(2 , 60 , 59);
	t1.display();
	++t1;
	t1.display();
	--t1;
	t1.display();
}