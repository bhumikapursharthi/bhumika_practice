#include<iostream>
using namespace std;

class demo
{
    public:
        int a;
    public:
        void getdata()
        {
            cout<<"Enter number:";
            cin>>a;

        }

        void display()
        {
            cout<<"\n value "<<a;

        }

        demo operator +(demo bb)
        {
            demo zz;
            zz.a=a+bb.a;
            return zz;
        }
};


int main(){
demo aa,bb,cc;
aa.getdata();
bb.getdata();
cc=aa+bb;
aa.display();
bb.display();
cc.display();
return 0;
}
