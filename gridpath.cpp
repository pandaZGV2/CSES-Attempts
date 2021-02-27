#include <bits/stdc++.h>
using namespace std;
#define modint (int)1e9 + 7
int main(void)
{
    int n;
    cin >> n;
    int grid[n + 1][n + 1];
    char griddesign[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> griddesign[i][j];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            grid[i][j] = 0;
        }
    }
    grid[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (griddesign[i][j] == '*')
            {
                grid[i][j] = 0;
            }
            else
            {
                if (i > 0)
                {
                    grid[i][j] += grid[i - 1][j];
                    grid[i][j]%=modint;
                }
                if (j > 0)
                {
                    grid[i][j] += grid[i][j - 1];
                    grid[i][j]%=modint;
                }
            }
        }
    }
    cout << grid[n - 1][n - 1] << endl;
}
