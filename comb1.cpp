#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define modint (int)1e9 + 7
vector<int> coinscomb(1e6 + 5, 0);
int main(void)
{
    ll n, x;
    cin >> n >> x;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    coinscomb[0] = 1;
    for (int i = 0; i <= x; i++)
    {
        for (auto j : coin)
        {
            if (j <= i)
            {
                coinscomb[i] = coinscomb[i] + coinscomb[i - j];
                coinscomb[i]%=modint;
            }
        }
    }
    cout << coinscomb[x] << "\n";
}
