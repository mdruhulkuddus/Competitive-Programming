
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int counter=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum=0;
for(int i=0;i<n;i++){

        if(arr[i]<10)
        {
            sum+=0;
        }
        else{
            int nut= arr[i]-10;
            sum+=nut;
        }

}

cout<<sum<<endl;
	return 0;
}
