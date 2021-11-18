#include<bits/stdc++.h>
using namespace std;

void check_AB_BA(string s)
{
    int ab = 0, ba = 0, diff;
    for(int i = 0; i < s.size()-1; i++)
    {
        string st = s.substr(i, 2);
        if(st == "ab") ab++;
        else if(st == "ba") ba++;
        else continue;
    }
    if(ab == ba) cout<< s <<endl;
    else
    {

        if(s[0] == 'a')
            s[0]='b';
        else s[0]='a';

        cout<< s << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        check_AB_BA(s);
    }

    return 0;
}
