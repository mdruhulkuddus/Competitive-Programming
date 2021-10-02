#include<bits/stdc++.h>
using namespace std;

int binTOdec(string s)
{
    //cout<<s<<"\n";
    int power = 7, sum=0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]=='1')
            sum+=1*pow(2,power--);
        else power--;
    }
    //cout<<sum<<" ";
    return sum;

}

int main()
{
    int t,Case=0;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3,s4;
        int a,b,c,d;
        scanf("%d.%d.%d.%d\n",&a,&b,&c,&d);

        getline(cin,s1,'.');
        getline(cin,s2,'.');
        getline(cin,s3,'.');
        getline(cin,s4,'\n');

        if(a==binTOdec(s1) && b==binTOdec(s2) && c==binTOdec(s3) && d==binTOdec(s4))
            cout<<"Case "<< ++Case <<": Yes"<<"\n";
        else cout<<"Case "<< ++Case <<": No"<<"\n";
    }
    return 0;
}


/** array to string
//int sum
arr[j++]=sum;

        for (int i = 0; i <j; i++)
        {
            auto s = to_string(arr[i]);
            str3.append(s);
        }
    cout<<str3;
**/
/** hard

    int t,Case=0;
    cin>>t;
    while(t--)
    {
        string str1,str2,str3;
        int power=7,j=0,sum=0,arr[100];
        cin>>str1>>str2;
        str1.erase(remove(str1.begin(), str1.end(), '.'), str1.end());

        for(int i = 0; i<str2.length(); i++)
        {
            if(str2[i]=='.' || i==str2.length()-1)
            {
                auto s = to_string(sum);
                str3.append(s);
                sum=0;
                power=7;
            }
            else
            {
                if(str2[i]=='1')
                    sum+=1*pow(2,power--);
                else power--;
            }
        }

        if(str3==str1) cout<<"Case "<< ++Case <<": Yes"<<"\n";
        else cout<<"Case "<< ++Case <<": No"<<"\n";
    }


**/
