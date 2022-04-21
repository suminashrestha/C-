#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Bank
{
    char name[50];
    long int accnum;
    float balance;
    public:
        Bank(){
            strcpy(name,"");
            accnum=0;
            balance=0;
        }
        void openanaccount(){
            cout<<"Enter the name of customer:"<<endl;
            cin>>name;
            cout<<"Enter the account number :"<<endl;
            cin>>accnum;
            cout<<"Enter the balance:"<<endl;
            cin>>balance;
        }
        void depositmoney(){
            long int deposit;
            cout<<"Enter the amount to be deposited:"<<endl;
            cin>>deposit;
            balance=balance+ deposit;
            cout<<"amount after deposit:"<<balance<<endl;
        }
        void withdrawmoney(){
            long int withdraw;
            cout<<"Enter the amount to be withdrawn:"<<endl;
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"Insufficient balance!! Please try again."<<endl;
            }
            else{
                balance=balance-withdraw;
            }
            cout<<"amount after withdraw:"<<balance<<endl;
        }
        void displayaccinfo(){
            cout<<"The name of customer:"<<name<<endl;
            cout<<"The account number:"<<accnum<<endl;
            cout<<"The balance:"<<balance<<endl;
        }
};
int main(){
    Bank B[10];
    int n;
    cout<<"enter the total  number of customers:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
    B[i].openanaccount();
    B[i].depositmoney();
    B[i].withdrawmoney();
    B[i].displayaccinfo();
    }
    getch();
    return 0;
}