#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string n;
        cin >> n;
        if((n.back() - '0')%2 == 0) cout << "0" << endl;
        else if((n.front() - '0')%2 == 0) cout << "1" << endl;
        else
        {
            int flag = 0;
            for(auto c : n)
                if((c - '0')%2 == 0)
                {
                    flag = 1;
                    break;
                }
            if(flag == 1) cout << "2" << endl;
            else cout << "-1" << endl;
        }

    }
    return 0;
}
