#include<iostream>
#include<conio.h>
using namespace std;
class Height
{
    int feet,inches;
    public:
     void inputdata();
     void displaydata();
     Height addheight(Height H1,Height H2);
};
 void Height :: inputdata()
 {
     cout<<"Enter the height in feet:"<<endl;
     cin>>feet;
     cout<<"Enter the height in inches:"<<endl;
     cin>>inches;
 }
 void Height :: displaydata(){
     cout<<"The height is:"<<feet<<"Feet and "<<inches<<"inches"<<endl;
 }
 Height Height :: addheight(Height H1,Height H2)
 {
    Height H3;
     H3.inches=H1.inches + H2.inches;
     H3.feet = H3.inches/12;
     H3.inches = H3.inches % 12;
     H3.feet = H3.feet + H1.feet + H2.feet;
     return H3;
 }
 int main(){
     Height H1,H2,H;
     H1.inputdata();
     H2.inputdata();
     H1.displaydata();
     H2.displaydata();
    H = H1.addheight(H1,H2);
    cout<<"After the addition:"<<endl;
    H.displaydata();
    getch();
    return 0;
 }