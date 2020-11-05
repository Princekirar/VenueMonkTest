#include<bits/stdc++.h>
using namespace std;
 
// no of ways to made n = 2000 from Indian Denominations of 10,20,50,100,200,500,1000,2000
 int NoOfWays( int S[], int m, int n )
    {
        long long int dp[m+1][n+1]={0};
        for(int j=0; j<=n; j++){
            dp[0][j] = 0;
        }
        for(int i=0; i<=m; i++){
            dp[i][0] = 1;
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                dp[i][j] = dp[i-1][j];
                if(S[i-1] <= j){
                    dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                }
            }
        }
      return dp[m][n];
    }

void solve(){
    int denominations[] = {10,20,50,100,200,500,1000,2000};
    int m  = sizeof(denominations)/sizeof(int);
    int n = 2000;
    cout<<NoOfWays(denominations,m,n);
}

int main(){
//  for input output files
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 
solve();
return 0;
}