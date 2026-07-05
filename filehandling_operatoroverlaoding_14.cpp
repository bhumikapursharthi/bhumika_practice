#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("Item.txt");
    char iname[20];
    cout<<"Enter item name";
    cin>>iname;
    outfile<<iname<<endl;
    outfile.close();

    ifstream infile("Item.txt");
    infile>>iname;
    cout<<"Item name:"<<iname;
    infile.close();
    return 0;

}
