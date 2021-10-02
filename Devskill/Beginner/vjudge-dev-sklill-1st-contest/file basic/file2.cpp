
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name; int age;
    ofstream wfile;  ///ofstrem for write file

    wfile.open("std_delails.txt",ios::out|ios::app);
    for(int i=1; i<=4; i++)
    {

    //file<<"i am easin from diu";
    getline(cin, name);  ///getline for string line input
    //cin>>age;
    wfile<<name<<endl;  ///write file
    //file<<age<<endl;
   // cin.ignore();
    }

    string line;
    ifstream file("std_delails.txt");  ///ifstream for read file
    while(getline(file,line))  ///file theke line by line ene line variable e store korbe
    {
        cout<<line<<endl;
    }

    file.close();
    return 0;
}
