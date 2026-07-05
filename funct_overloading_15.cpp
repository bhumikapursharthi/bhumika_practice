#include<iostream>
using namespace std;
void add(int a, int b){
int c=a+b;
cout<<c<<"\n";
}


double add(double a, double b){
double c=a+b;
return c;
}


void add(int a, int b, int d){
int c=a+b+d;
cout<<c<<"\n";}

int main(){
    add(2,3);
    add(5,6,7);
    add(3,4,5);
    return 0;
}
