#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        if(s[0] != s.back())
            s[0] = s.back();
        cout<< s <<endl;
    }

    return 0;
}
