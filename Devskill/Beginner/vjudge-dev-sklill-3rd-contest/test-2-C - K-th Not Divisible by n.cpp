// C++ program to print all permutations with
// duplicates allowed using next_permutation
#include <bits/stdc++.h>
using namespace std;

// Function to print permutations of string str
// using next_permutation
void permute(string str)
{
    // Sort the string in lexicographically
    // ascending order
    //sort(str.begin(), str.end());

    // Keep printing next permutation while there
    // is next permutation


    int cnt=0;
    cout<<"after permution the result is below:"<<endl;
    do
    {
        //cout <<++cnt<<" . "<<str << endl;
    }
    while (next_permutation(str.begin(), str.end()));
}

// Driver code
int main()
{
    ///string str = "CBA";

    int t;
    cin>>t;
    while(t--)
    {

    string str;
    int n,k, a_number, b_number; int cnt=0;
    vector<string>s;
    cin>>n>>k;
    int	cntPermute=(n*(n-1))/2;
    char arr[cntPermute];
    a_number=n-2;
    b_number=n-a_number;
    //cout<<a_number<<" "<<b_number;
    for( int i=0; i<a_number; i++)
    {
        str.insert(i,"a");
    }
    for( int i=a_number; i<n; i++)
    {
        str.insert(i,"b");
    }
    //cin>>str;
   // cout<<str<<"\n";
    //permute(str);
    // cout<<str.size();
    //cout<<"after permution the result is below:"<<endl;
    do
    {
        ++cnt;
       //cout <<++cnt<<" . "<<str << endl;
       if(cnt==k)
       {
           cout<<str<<"\n";
           break;
       }
       //s.push_back(str);

    }
    while (next_permutation(str.begin(), str.end()));

    //cout<<s[k-1]<<"\n";
    }
    //main();
    return 0;
}
