#include<iostream>
using namespace std;

class Room
{
	private:	
	int  bed_l , bed_w, den_l , den_w , total_area1;
	public:
		int  bed_length(int len)
		{
			bed_l=len;
			return bed_l;
		}
		int bed_width(int wid)
		{
			bed_w=wid;
			return bed_w;
		}
		int den_lenth(int len)
		{
			den_l=len;
			return den_l;
		}
		int den_width(int wid)
		{
			den_w=wid;
			return den_w;
		}
		int total_area()
		{
			return (bed_l*bed_w)+(den_l*den_w);
		}
	
};

int main()
{
	Room k1;
	cout<<k1.bed_length(34)<<endl;
	cout<<k1.bed_width(22)<<endl;
	cout<<k1.den_lenth(12)<<endl;
	cout<<k1.den_width(34)<<endl;
	cout<<k1.total_area()<<endl;
}

