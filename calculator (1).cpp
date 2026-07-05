#include<iostream>
using namespace std;
int main(){
int a,b,c;
char op;
cout<<"Enter the numbers:\n";
cin>>a>>b;
cout<<"Enter the operator (+,-,/,*):\n";
cin>>op;
switch(op){
case '+':
    c= a+b;
    cout<<"The sum of the numbers is:"<<c;
    break;
case'-':
    c= a-b;
    cout<<"The subtraction of the numbers is:"<<c;
    break;
case'*':
    c= a*b;
    cout<<"The multiplication of the numbers is:"<<c;
    break;
case'/':
    c=a/b;
     cout<<"The division of the numbers is:"<<c;
    break;
default:
    cout<<"THE OPERATOR IS INVALID";
    }
    return 0;
}
