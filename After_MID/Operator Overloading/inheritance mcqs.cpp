#include<iostream>
using namespace std;
/*
class A
{
	public:
	A()
	{
		cout<<"A ";
		}	
};
class B: public A
{
	public:
		B()
		{
			cout<<"B ";
		}
};
int main()
{
	B b1;
	return 0;
}
*/

/*
class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y;
		}
};
class B : public A
{
	public:
		B(int x , int y) : A(x)
		{
			cout<<"Y is "<<y;
		}
	
};
int main()
{
	B b1(4 , 5);
}

*/

/*
class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y;
		}
};

class C
{
	public:
	C(int x)
	{
	cout<<"C is "<< x ;	
	}	
};

class B : public C , A  //here order matters in which they are called 
{
	public:
		B(int x , int y , int z) : A(x) , C(y) //here the sequence not matter
		{
			cout<<"B is "<<z;
		}
	
};
int main()
{
	B b1(4 , 5 , 9);
}
*/

/*
class A
{
	public:
	A(int x)
	{
		cout<<"A "<< x;
		}	
};
class B: public A
{
	public:
		B(int x) : A(x)
		{
			cout<<"B "<< x;
		}
};
int main()
{
	B b1(5);
	return 0;
}
*/

/*
class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y;
		}
};

class B : public A
{
	public:
	B(int x) :A(x)
	{
	cout<<"C is "<< x ;	
	}	
};

class C : public B  
{
	public:
		C(int x , int y , int z) : B(x) , C(y) 
		{
			cout<<"B is "<<z;
		}
	
};
int main()
{
	C c1(4 , 5 , 9);
}
*/
/*
class A
{
	public:
	A(int x)
	{
		cout<<"A "<< x;
		}	
};
class B: public A
{
	public:
		B(int x) : A(x)
		{
			cout<<"B "<< x;
		}
};
int main()
{
	B b1(5);
	return 0;
}
*/

/*
class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y;
		}
};

class B : public A
{
	public:
	B(int x , int y) :A(x)
	{
	cout<<"C is "<< y ;	
	}	
};

class C : public B  
{
	public:
		C(int x , int y , int z) : B(y , z) 
		{
			cout<<"B is "<<z;
		}
	
};
int main()
{
	C c1(4 , 5 , 9);
	return 0;
}
*/


/*
class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y<<endl;
		}
	void get()
	{
		cout<<"Hello World ";
	}	
};

class B : public A
{
	public:
	B(int x , int y) :A(x)
	{
	cout<<"C is "<< y <<endl ;	
	}	
};

class C : public B  
{
	public:
		C(int x , int y , int z) : B(y , z) 
		{
			get();
			cout<<endl;
			cout<<"B is "<<z;
		}
	
};
int main()
{
	C c1(4 , 5 , 9);
	return 0;
}
*/

class A
{
	public:
		A(int y)
		{
			cout<<"A is "<<y<<endl;
		}
	void get()
	{
		cout<<"Hello World ";
	}	
};

class B : protected A
{
	public:
	B(int x , int y) :A(x)
	{
	cout<<"C is "<< y <<endl ;	
	}	
};

class C : private B  
{
	public:
		C(int x , int y , int z) : B(y , z) 
		{
			get();
			cout<<endl;
			cout<<"B is "<<z;
		}
	
};
int main()
{
	C c1(4 , 5 , 9);
	return 0;
}



