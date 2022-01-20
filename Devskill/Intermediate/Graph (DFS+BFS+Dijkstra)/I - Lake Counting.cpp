#include<iostream>
using namespace std;

int N, M;
int dr[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[] = {0, 0, -1, 1, -1, 1, -1, 1};
char ch[105][105];

bool isValid(int r, int c)
{
    return (r >= 0 && r < N && c >= 0 && c < M && ch[r][c] == 'W');
}

void dfs_2D_grid(int r, int c)
{
    if(!isValid(r, c)) return;
    ch[r][c] = '.';
    for(int i = 0; i < 8; i++)
    {
        int next_r = r + dr[i];
        int next_c = c + dc[i];
        dfs_2D_grid(next_r, next_c);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> ch[i][j];
        }
    }
    int ponds = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(ch[i][j] == 'W')
            {
                dfs_2D_grid(i, j);
                ponds++;
            }
        }
    }
    cout << ponds << endl;
    return 0;
}
