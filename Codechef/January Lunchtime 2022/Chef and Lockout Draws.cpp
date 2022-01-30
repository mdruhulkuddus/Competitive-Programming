#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        ll A, B, C, sum = 0;
        cin >> A >> B >> C;
        if(A == B+C) cout << "Yes" << endl;
        else if(B == A+C) cout << "Yes" << endl;
        else if(C == A+B) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

