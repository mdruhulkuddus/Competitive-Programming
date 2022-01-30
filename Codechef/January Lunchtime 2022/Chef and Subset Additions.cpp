#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000
#define MOD 1000000007

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        int A[N], B[N];
        for(int i = 0; i < N; i++) cin >> A[i];
        for(int i = 0; i < N; i++) cin >> B[i];
        int flag = 1;
        for(int i = 0; i < N; i++)
        {
            if((B[i] - A[i]) != X && (B[i] - A[i]) != Y)
            {
                flag = 0;
                break;
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}

