#include<iostream>
using namespace std;

class sum{
public:
    int a,b;
void data(){
cout<<"Enter two numbers:";
cin>>a>>b;
}

void disp(){
int sum;
sum=a+b;
cout<<"SUM="<<sum;
}
};

int main(){
sum sobj;
sobj.data();
sobj.disp();
cout<<"\na="<<sobj.a;
cout<<"\nb="<<sobj.b;
return 0;
}
