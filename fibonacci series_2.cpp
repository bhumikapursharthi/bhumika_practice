#include<iostream>
using namespace std;
int main(){
int a=0,b=1,next,n,i;
cout<<"Enter the number:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<a<<" ";
next=a+b;
a=b;
b=next;
}
return 0;

}
