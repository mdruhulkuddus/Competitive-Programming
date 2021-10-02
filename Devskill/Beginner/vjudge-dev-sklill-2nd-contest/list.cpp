#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    list<int>li;
    // initializing list iterator to beginning
    list<int>::iterator cursor=li.end();
    cin>>n;
    while(n--)
    {
        int x, element;
        cin>>x;
        if(x==0)
        {

            cin>>element;
          cursor= li.insert(cursor, element); ///assign here where is cursor, detect that position // after insert that positon

        }
        else if(x==1)
        {
            cin>>element;
            // iterator  to point to element+1 position/ if 0,1st position; if 1, (1)+1; 2nd position
            advance(cursor, element);

        }
        else
        {
       // deleting the first(cursor/end) element
       cursor= li.erase(cursor);///c = assign here where is cursor erase..after that insert that position or erase next

        }

    }

    list<int>::iterator it=li.begin();

    for(it=li.begin(); it != li.end(); it++)
    {
        cout<< *it <<"\n";
    }
    return 0;
}
/*
//all operation start begin
0-insert
1- move (move  point )
2- erase/delete

0 1 -{1}
0 2 -{2, 1}
0 3 -{3, 2, 1}
1 1 - { 2, 3, 1}
2 - {3,1}


*/


