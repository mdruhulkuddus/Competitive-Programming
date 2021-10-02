#include<bits/stdc++.h>
using namespace std;
stack<double> stk;
void calc(double a, double b, char op)
{
    if(op=='+')
       stk.push(a+b);
    else if(op=='-')
       stk.push(a-b);
    else if(op=='*')
       stk.push(a*b);
    else if(op=='/')
       stk.push(a/b);

}
int main() {

    ofstream wfile;
    wfile.open("s_postfix.txt",ios::out|ios::app);

    string linestr;
    for(int i=1; i<=4; i++)
    {

    getline(cin, linestr);

    wfile<<linestr<<endl;

    }

    string line;
    ifstream file("s_postfix.txt");
    while(getline(file,line))
    {
        stringstream ss;
    ss << line;
    string word;
    while(ss>>word){
        if(isdigit(word[0])){
            double x=stod(word);
            //cout<<x<<endl;
            stk.push(x);
        }
        else{
            double y=stk.top();
            stk.pop();
            double x=stk.top();
            stk.pop();
            calc(x,y,word[0]);
        }
    }
printf("%0.4f\n",stk.top());

    stk.pop();
//cout<<line<<endl;
    }
        file.close();


	return 0;
}

