#include<bits/stdc++.h>
using namespace std;

 int main()
 {
  int n;
  cin>>n;

  list<int>L;
  list<int>::iterator cursor=L.end();


  while(n--)
  {
      int x, value;
      cin>>x;
      if(x==0)
      {
          cin>>value;
         cursor= L.insert(cursor, value);
      }
      else if(x==1)
      {
          cin>>value;
            if (value > 0) {
				for (int i = 0; i < value; i++) cursor++;
			} else {
				for (int i = 0; i < -value; i++) cursor--;
			}
      }
      else
      {
          cursor=L.erase(cursor);
      }
  }
  list<int>::iterator it;
  for(it=L.begin(); it != L.end(); it++)
  {
      cout<< *it <<"\n";
  }
 return 0;
 }
