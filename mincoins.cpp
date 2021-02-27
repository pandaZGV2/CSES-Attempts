#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<long long int> sumcoins(1e6+5, INT_MAX);
int main(void)
{
    ll n,x;
    cin>>n>>x;
    vector<int> coins;
    int c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        coins.push_back(c);
    }
    sumcoins[0]=0;
    for(int i=1;i<=x;i++)
    {
        for(auto j:coins)
        {
            if(j<=i)
            {
                sumcoins[i]=min(sumcoins[i], sumcoins[i-j]+1);
            }
        }
    }
    if(sumcoins[x]!=INT_MAX)
    cout<<sumcoins[x]<<"\n";
    else
        cout<<-1<<"\n";
}
