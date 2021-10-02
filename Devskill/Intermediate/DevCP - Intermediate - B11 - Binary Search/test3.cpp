#include<bits/stdc++.h>
using namespace std;
#define eps 1e-6
int main(){

    double t,mid,low,high,d,big,small,cpy;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d;
        cpy = d;
        if(d>0 && d<4){
            cout<<"N\n";
            continue;
        }
        if(d==4){
            cout<<"Y 2.000000000 2.000000000\n";
            continue;
        }

        low=0.0,high=d;
        int cnt=100;
        while(cnt--){
            mid=low+(high-low)/2.0;

            big=mid;
            small=(d-big);
            cout<<cnt<<" = ";
            cout<<setprecision(10)<<fixed<<mid<<" "<< big<< " "<<small<<" "<<big*small << " "<<big+small<<endl; getchar();
            //if((big*small - cpy) > 0.0000001) break;
            if(big*small>big+small){
                low=mid;

            }
            else{
                high=mid;

            }

        }

        printf("Y %.9f %.9f\n",big,small);

    }

}

