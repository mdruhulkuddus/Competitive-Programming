#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

//int main()
//{
//    string str;
//    cin >> str;
//    int n = str.size();
//    vector<string> v(n); // fix size declare of v
//    for(int i = 0; i < n; i++)
//    {
//        v[i] = str.substr(i, n) + str.substr(0, i);
//    }
//    cout<<*min_element(v.begin(), v.end())<<endl; //minimize sort function
//    cout<<*max_element(v.begin(), v.end())<<endl;
//
//    return 0;
//}

/// same code up
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        str = str[n-1] + str;
        str.pop_back(); //delete last char of str
        v.push_back(str);
    }
    sort(v.begin(), v.end());
    cout<< v[0] <<endl;
    cout<< v[n-1] <<endl;

    return 0;
}
