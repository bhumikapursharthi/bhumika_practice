#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string text;
    ofstream outfile("sample.txt");
    getline(cin,text);
    outfile<<text;
    outfile.close();


    ifstream infile("sample.text");
    string content;
    getline (infile, content);
    cout<<"content of file"<<content;
    infile.close();
    return 0;
}
