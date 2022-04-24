#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class binary{
    string s;
    public: 
    void read();
    void check();
    void convert();
    void display();
};
void binary:: read(){
    cout<<"Enter any strng: ";
    cin>>s;
}
void binary:: check(){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1' || s.at(i)=='0'){
            count++;
        }
    }
    if(count==s.length()){
        cout<<"binary"<<endl;
        convert();
        display();
    }
    else{
        cout<<"not binary";
    }
    cout<<endl;
    
}
void binary :: convert(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else if(s.at(i)=='0'){
            s.at(i)='1';
        }
    }
}
void binary:: display(){
    cout<<s;
}
int main(){
    binary b;
    b.read();
    b.check();
}