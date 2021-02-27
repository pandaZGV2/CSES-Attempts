#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[int(1e6+5)];
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<=x;i++)
    {
        dp[i]=(int)1e9;
    }
    dp[0]=0;
    for(int i=1;i<=x;i++)
    {
        int tmp=i;
        vector<int> digits;
        while(tmp>0)
        {
            digits.push_back(tmp%10);
            tmp=tmp/10;
        }
        for(auto j:digits)
        {
            dp[i]=min(dp[i], dp[i-j]+ 1);
        }
    }
    cout<<dp[x]<<endl;
}
