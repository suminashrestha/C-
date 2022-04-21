#include<iostream>
using namespace std;
class weight2;
class weight1
{
    int kg,g;
         public:
           weight1(){
               kg=0;
               g=0;
           }
      weight1(int c,int d){
          kg=c;
          g=d;
      }
      void displaydata(){
          cout<<"The weight is"<<kg<<"kilograms and "<<g<<"grams"<<endl;
               }
        friend weight1 addweight(weight1 W1,weight2 W2);
};
class weight2
{
    int kg,g;
         public:
           weight2(){
               kg=0;
               g=0;
           }
      weight2(int c,int d){
          kg=c;
          g=d;
      }
      void displaydata(){
          cout<<"The weight is"<<kg<<"kilograms and "<<g<<"grams"<<endl;
               }
        friend weight1 addweight(weight1 W1,weight2 W2);
};
      weight1 addweight(weight1 W1,weight2 W2){ 
          weight1 W;
       W.g=W1.g+W2.g;
       W.kg=W.g/1000;
       W.g=W.g%1000;
       W.kg=W1.kg+W2.kg+W.kg;
      return W;
      }

int main(){
    weight1 W(2,1000),W2;
    weight2 W1(4,1200);
    W.displaydata();
    W1.displaydata();
    W2=addweight(W,W1); cout<<"after the addition:"<<endl;
    W2.displaydata();
    return 0;
}