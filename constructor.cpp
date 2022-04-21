#include<iostream>
#include<conio.h>
using namespace std;
class swap1
{
    int a;
     public:
     swap1(){
         a=0;
        
     }
       swap1(int m){
        a=m;
       }
       void display(){
           cout<<"The first num is:"<<a<<endl;
       }
      friend class swap2;
};
class swap2{
     int c,store;
     public:
     swap2(){
         c=0;
     }
       swap2(int n){
        c=n;
       }
       void display(){
           cout<<"The  num is:"<<c<<endl;
       }
     void swapdata(swap1 S);
};
void swap2:: swapdata(swap1 S){
    store=S.a;
    S.a=c;
    c=store;
    cout<<"After swap:"<<endl;
    cout<<"The first number is:"<<S.a<<endl;
    cout<<"The second number is:"<<c<<endl;
   
}
int main(){
     swap1 S1(3);
     swap2 S2(10);
     S1.display();
     S2.display();
     S2.swapdata(S1);
    getch();
}
