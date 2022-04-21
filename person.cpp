#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
	int a1;
	static int a;
	public :
		void getdata();
		void putdata();
};
void Test :: getdata()
{
    
			cout<<"Enter a1 value:"<<endl;
			cin>>a1;
			a++;
		
}
void Test :: putdata()
		{
			cout<<"a1"<<a1<<endl;
			cout<<"count:"<<a<<endl;
		}
int Test :: a;
int main(){
	Test T1,T2;
	T1.getdata();
	T2.getdata();
	T1.putdata();
	T2.putdata();
	getch();
	return 0;
}