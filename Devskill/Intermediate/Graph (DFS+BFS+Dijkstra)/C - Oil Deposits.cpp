#include<bits/stdc++.h>
using namespace std;

char grid[110][110];
int m, n;
int cnt = 0;
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

bool isValid(int x, int y)
{
    return (x >= 0 && x <m && y >= 0 && y < n && grid[x][y] == 'W');
}

void dfs_2D(int x, int y) // x - row, y - col
{
    if(!isValid(x, y)) return;
    grid[x][y] = '.';
    for(int i = 0; i < 8; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        dfs_2D(next_x, next_y);
    }
}

int main()
{
    while( (cin >> m >> n) && m != 0 || n != 0)
    {
        for(int r = 0; r <m; r++)
        {
            for(int c = 0; c < n; c++ )
            {
                cin >> grid[r][c];
            }
        }
        for(int r = 0; r <m; r++)
        {
            for(int c = 0; c < n; c++ )
            {
                if(grid[r][c] == 'W')
                {
                    dfs_2D(r, c);
                    cnt++;
                }
            }
        }
        cout << cnt << endl; cnt = 0;
    }
    return 0;
}
