#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch[100];
    set<char>s;
    cin>>ch;
    int n = strlen(ch);
    for(int i = 0; i < n; i++)
    {
        if(isupper(ch[i]))
        ch[i] = tolower(ch[i]);
        s.insert(ch[i]);
    }
    int sizeSTR=s.size();

    if(sizeSTR%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}

