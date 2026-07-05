#include<iostream>
using namespace std;
int main (){
float a,b;
cout<<"Enter a and b:";
cin>>a>>b;
try{
if(b==0){
    throw(b);
    }
else{
    cout<<"\ndivision is "<<a/b;
}
}
catch(int){
    cout<<"second value cant be zero";
}
return 0;

}
