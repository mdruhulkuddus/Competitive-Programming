#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool status = true;

    if(islower(str[0]))
    {
        for(int i = 1; i < str.size(); i++)
        {
            if(islower(str[i]))
            {
                status = false;
                break;
            }

        }
    }
    else if(isupper(str[0]))
    {
        for(int i = 1; i < str.size(); i++)
        {
            if(islower(str[i]))
            {
                status = false;
                break;
            }
        }
    }

    if(status == true)
    {
        for(int i = 0; i < str.size(); i++)
        {
           if(islower(str[i])) str[i] = toupper(str[i]);
            else str[i] = tolower(str[i]);
        }
    }

    cout<<str<<"\n";

    return 0;
}


