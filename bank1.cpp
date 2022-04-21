#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class bank{
   char name[50];
   long int amt;
   public: 
      long int accno;
      bank(){}
      void openacc(){
         cout<<"enter name: ";
         cin>>name;
         cout<<"enter account number: ";
         cin>>accno;
         cout<<"enter opening amt: ";
         cin>>amt;
      }
      void deposit(){
         long int addamt;
         cout<<"enter amount to deposit: ";
         cin>>addamt;
         amt=amt+addamt;
      }
      void withdraw(){
         long int witamt;
         cout<<"enter amt to withdraw: ";
         cin>>witamt;
         if(witamt<=amt){
            amt=amt-witamt;
            cout<<"withraw successful"<<endl;
         }
         else{
            cout<<"insufficient balance"<<endl;
         }
      }
      void displaydata(){
         cout<<"name: "<<name<<endl;
         cout<<"acc no: "<<accno<<endl;
         cout<<"balance: "<<amt<<endl;
      }
};
void console(){
   cout<<"_______________bank_________________"<<endl
       <<"|1.displayinfo                        |"<<endl
       <<"|2.deposit                            |"<<endl
       <<"|3.withdraw                           |"<<endl
       <<"|4.another acc data                   |"<<endl
       <<"|5.exit                               |"<<endl
       <<"|_____________________________________|"<<endl;
}
int main(){
   bank o1[2],o2;
   for(int i=0;i<2;i++){
      o1[i].openacc();
   }
   int n,a;
   A:
   cout<<"enter acc no to access: ";
   cin>>n;
   for(int i=0;i<2;i++){
     if(n==o1[i].accno){
         a=i;
     }
   }
   //for o2
   while(1){
   system("cls");
   cout<<"for acc no:"<<n<<endl;
   console();
   int choice;
   cout<<"enter your choice: ";
   cin>>choice;
   switch(choice){
      case 1: o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 2: o1[a].deposit();
              o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 3: o1[a].withdraw();
              o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 4: goto A;
      case 5: exit(0);
      default: cout<<"enter any choice from above"<<endl;
   }
   }
   getch();
}