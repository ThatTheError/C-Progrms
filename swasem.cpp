#include<iostream>
using namespace std;
class Myclass
{
	public:
		int include;
		string mystring;
		
};
int main()
{
	Myclass obj;
	obj.include=5;
	obj.mystring="hello";
	cout<<obj.include<<"\n";	
	cout<<obj.mystring;
	return 0;
}
