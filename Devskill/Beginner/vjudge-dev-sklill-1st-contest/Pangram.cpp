#include<bits/stdc++.h>
using namespace std;

int main()
{

     int wordlLen,cnt=0;
     string word;

     cin>>wordlLen;
     cin>>word;

     for(int i=0; i<wordlLen; i++)
     {
         word[i]=towlower(word[i]);

     }
     sort(word.begin(), word.end());

//      for(int i=0; i<wordlLen; i++)
//     {
//         cout<<word[i]<<" ";;
//
//     }
//cout<<endl;
    for(int i=0; i<wordlLen; i++)
     {
        if(word[i] != word[i+1])
         {
            cnt++;
         }

     }
   if(cnt==26)
   {
       cout<<"YES"<<"\n";
   }
   else{
    cout<<"NO"<<"\n";
   }


return 0;
}

