#include<iostream>
#include<conio.h>
using namespace std;
class Rational2;
class Rational1
{
    int num,den;
    public :
 void  inputdata()
 {
     cout<<"Enter the numerator:"<<endl;
     cin>>num;
     cout<<"Enter the denominator:"<<endl;
     cin>>den;
 }
 void displaydata()
 {
     cout<<"The rational number is:"<<num<<"/"<<den<<endl;
 }
 friend class Rational2;
 
 };
 class Rational2 
 {
     int num,den;
      public :
       void inputdata(){
           cout<<"Enter the numerator and denominator:"<<endl;
           cin>>num>>den;
       }
       void displaydata()
 {
     cout<<"The rational number is:"<<num<<"/"<<den<<endl;
 }
   void addrational(Rational1 R1){
       Rational2 R;
       R.num= (R1.num*den)+(num*R1.den);
       R.den=den*R1.den;cout<<"After addition:"<<endl;
       R.displaydata();
   }
 };

 int main(){
     Rational1 R1;
     Rational2 R2;
     R1.inputdata();
     R2.inputdata();
     R1.displaydata();
     R2.displaydata();
     R2.addrational(R1);

    getch();
    return 0;
 }