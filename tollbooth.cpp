using namespace std;
#include<iostream>
#include<conio.h>
class Tollbooth
{
    int  number,amount;
    public:
      Tollbooth(){
          number=0;
          amount=0;
      }
      void payingcar(){
          number++;
          amount+=5;
      }
      void nopaycar(){
          number++;
               }
               void display(){
                   cout<<"no of cars="<<number<<endl;
                   cout<<"total amount collected:"<<amount<<endl;
               }
};
int main(){
    Tollbooth T;
    int choice;
    while(1){
        cout<<"MENU \n 1.paying car \n 2. no paying car \n 3. exit \n"<<endl;
        cin>>choice;
    
    }
    switch(choice){
        case 1 : T.payingcar();
                 T.display();
                 break;
        case 2 : T.nopaycar();
                T.display();
                break;
        case 3 : exit(0);
        default: cout<<"please choose between 1 to 3!"<<endl;

    }
    getch();
}