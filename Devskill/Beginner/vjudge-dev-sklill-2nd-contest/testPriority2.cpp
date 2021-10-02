
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string expr;
    while(getline(cin, expr)) {
        vector<string>terms;
        stringstream ss(expr);
        string wd;
        queue<int>Q;
        queue<int>Q2;
        while(getline(ss, wd, ' ')) {
            terms.push_back(wd);
            cout<<wd<<endl;
        }
        // now, we have our space separated terms for each input line
        // we could have done it without the additional vector. but anyways
        for(auto exp : terms) {

             if(exp=="insert")
            {
                continue;
            }
            else if(exp=="extract")
            {
                 int n1 = Q.front();
                 Q.pop();
                 int n2 = Q.front();
                 Q.pop();

                 if(n1>n2)
                {
                    Q.push(n2);
                    Q2.push(n1);
                }
                else
                {
                     Q.push(n1);
                     Q2.push(n2);
                }

            }

            else if(exp=="end")
            {
                break;
            }
              Q.push(stoi(exp));

        }
        while(!Q2.empty())
        {
            cout<<Q2.front()<<endl;
            Q2.pop();
        }
        //cout << setprecision(4) << fixed << value.top() << "\n";
    }
    return 0;
}
