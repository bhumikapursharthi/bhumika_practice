#include<iostream>
using namespace std;

class complex{
private:
    int real,img;
public:

    complex(int r=0, int i=0)
    {
        real = r;
        img =i;
    }

    complex operator +()
    {

        return complex (real, img);
    }

    complex operator -()
    {
        return complex (-real, -img);
    }

    void display()
    {
        cout<<real<<img<<endl;
    }

};

int main(){
complex C1 (5,3);
cout<<"After '+' operator used";
C1.display();


complex C2=+C1;
cout<<"After '+' operator used";
C2.display();

complex C3=-C1;
cout<<"After '-' operator";
C3.display();
return 0;
}

