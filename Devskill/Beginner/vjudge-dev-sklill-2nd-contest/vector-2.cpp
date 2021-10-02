#include<bits/stdc++.h>
using namespace std;

int main()
{
    // below 2 line are same
    //long long int a; cout<<sizeof(a)<<endl;
    //long long b; cout<<sizeof(b)<<endl;
    int n,q;
    //below 2 line same, but good second
    vector<int>v[1000]; // declare vector array//here 1000 ta vector have //1no
    //vector<vector<int>>v; //{{1,2},{1,-1},{1} //2no
     cin>>n>>q;
   //  v.resize(n);
    while(q--)
    {
        //v.clear(); //2
        //v.resize(n, vector<int>()); //2
        int cmd,idx, val ;
        cin>>cmd>>idx;
        if(cmd==0)
        {
            cin>>val;
            v[idx].push_back(val);
        }
        else if(cmd==1)
        {
            // cout << v[idx].size()<<' ';
            	for (int i = 0; i < v[idx].size(); i++)
                    {
                        if (i != 0)cout << " ";
                        cout << v[idx][i];
                    }
//            for(int elemt : v[idx])
//            {
//                if(elemt[0]) cout<<elemt<<" ";
//                else cout<<" "<<elemt;
//
//            }
            cout<<"\n";


        }
        else if(cmd==2)
        {

            v[idx].clear();
            //if(!v[idx].empty()) v[idx].clear();

        }

    }

    return 0;
}
