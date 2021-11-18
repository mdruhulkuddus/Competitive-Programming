#include<bits/stdc++.h>
using namespace std;

long long inver_cnt = 0;
void Merge(int A[], int L, int M, int R)
{
    int L_size = M - L + 1;
    int R_size = R - M;
    int tempL[L_size], tempR[R_size];

    for(int i = 0; i < L_size; i++)
        tempL[i] = A[L + i];
    for(int i = 0; i < R_size; i++)
        tempR[i] = A[M + 1 + i];

    int idxL =0, idxR = 0, k = L;
    while(idxL < L_size && idxR < R_size)
    {
        if(tempL[idxL] <= tempR[idxR])
        {
            A[k] = tempL[idxL];
            idxL++;
            k++;
        }
        else
        {
            A[k] = tempR[idxR];
            idxR++;
            k++;
            inver_cnt += L_size - idxL;
        }
    }
    while(idxL < L_size)
    {
        A[k] = tempL[idxL];
        idxL++;
        k++;
    }
    while(idxR < R_size)
    {
        A[k] = tempR[idxR];
        idxR++;
        k++;
    }
}

void merge_sort(int arr[], int L, int R)
{
    if(L < R)
    {
        int mid = L + (R - L) / 2;
        merge_sort(arr, L, mid);
        merge_sort(arr, mid + 1, R);
        Merge(arr, L, mid, R);
    }
}

int main()
{
    freopen("out.txt", "w", stdout);
    int n;
    while(cin >> n)
    {
        if(n == 0) break;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        merge_sort(arr, 0, n - 1);
        cout << inver_cnt << endl;
        inver_cnt = 0;
    }

    return 0;
}
