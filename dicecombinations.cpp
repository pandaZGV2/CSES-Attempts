#include <bits/stdc++.h>
using namespace std;
vector<long long int> dp(1e6+5, 0);
typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define modint ll(1e9 + 7)
#define mod 1e9 + 7
#define Inf INFINITY
int main(void)
{
    long long int  n;
    cin>>n;
    vector<int> dice={1,2,3,4,5,6};
    dp[0]=1;
    // dp[1]=dp[2]=dp[3]=dp[4]=dp[5]=dp[6]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j:dice)
        {
            if(j<=i)
            {
                dp[i]=(dp[i]%modint+dp[i-j]%modint)%modint;
            }
            else
                break;
        }
    }
    cout<<dp[n]%modint<<"\n";

}
// WelcometoVimGolf!