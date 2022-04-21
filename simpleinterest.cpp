#include<iostream>
#include<conio.h>
using namespace std;
class Swap2;
class Swap1
{
  int a;
   public:
    void getdata(){
      cout<<"Enter the value:"<<endl;
      cin>>a;
    }  
    void putdata(){
      cout<<"The value of a is:"<<a<<endl;
    }
   void swapdata(Swap2 S2);
};
class Swap2
{
  int b;
   public :
    void getdata(){
      cout<<"Enter the value of b:"<<endl;
      cin>>b;
    }
    void putdata(){
      cout<<"The value of b:"<<b<<endl;
    }
    friend void Swap1 :: swapdata(Swap2 S2);
};
     void Swap1 :: swapdata(Swap2 S2){
      int c;
      c=a;
      a=S2.b;
      S2.b=c;
      cout<<"After swap a="<<a<<endl;
      cout<<"After swap b="<<S2.b<<endl;
    }
int main(){
  Swap1 S1;
  Swap2 S2;
  S1.getdata();
  S1.putdata();
  S2.getdata();
  S2.putdata();
  S1.swapdata(S2);
  getch();
  return 0;
}