#include<iostream>
#include<conio.h>
using namespace std;
inline int add(int a,int b)
{
    return (a+b);
}
int main()
{
     int a,b,sum;
     cout<<"Enter two numbers:"<<endl;
     cin>>a>>b;
     sum=add(a,b);
     cout<<"Sum="<<sum<<endl;
     getch();
     return 0;
}