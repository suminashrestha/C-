#include<iostream>
using namespace std;
#include<string.h>
class Person
{
    protected:
      char name[50];
      int code;
    public:
      Person(char *n,int c){
          strcpy(name,n);
          code=c;
      }
      void display(){
          cout<<"Name:"<<name<<endl;
          cout<<"code:"<<code<<endl;
      }
};
class Account : virtual public Person
{
    protected:
       float salary;
    public:
       Account(char *n,int c,float s):Person(n,c){
           salary=s;
       }
       void display(){
           cout<<"salary="<<salary<<endl;
       }
};
class Admin: virtual public Person{
    protected:
       float exp;
    public:
       Admin(char *n,int c,float e):Person(n,c){
           exp=e;
       }
       void display(){
           cout<<"Number of years of experience:"<<exp<<endl;
       }
};
class Record: public Account, public Admin{
    int recnum;
    public:
       Record(char *n,int c,float s,float e,int r):Person(n,c),Account(n,c,s),Admin(n,c,e){
             recnum=r;
       }
       void display(){
           cout<<"Record number:"<<recnum<<endl;
       }
};
int main(){
    Record R("Sumina",12345656,99999.5,5.7,11);
    R.Person::display();
    R.Account::display();
    R.Admin::display();
    R.display();
    return 0;
}
