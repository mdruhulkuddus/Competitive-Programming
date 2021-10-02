#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("std.txt",ios::out|ios::app);
    //file<<"i am easin from diu";
    getline(cin, name);
    file<<name<<endl;  ///write file
    file.close();
    return 0;
}
