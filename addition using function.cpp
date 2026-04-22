#include<iostream>
using namespace std;
int Add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main(){
int a,b,result;
cout<<"Enter two numbers";
cin>>a>>b;

result= Add(a,b);
cout<<result;
return 0;
}
