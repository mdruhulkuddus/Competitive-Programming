#include<bits/stdc++.h>
using namespace std;

int main()
{


    int stringLength, cnt=0;
    cin>>stringLength;
    char word[stringLength];
    scanf("%s",word);
    int wordSize=sizeof(word);
    if(wordSize<26)
    {
         cout<<"NO"<<" \n ";
    }
    else
    {

        for (int i = 0, j = wordSize; i < j; i++)
           {
              for (int k = i+1; k < j; k++)
              {
                 if (word[i] == word[k])
                 {
                     cout<<word[i]<<"  "<<word[k]<<endl;
                    cnt++;

                 }

              }
           }

           if(cnt>0)
           {
                cout<<"NO"<<" \n ";
           }
           else{
            cout<<"YES"<<" \n ";
           }
    }

return 0;
}

