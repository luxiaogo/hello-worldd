#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m],dp[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        cin >> arr[i][j];
    }
    for(int i=0;i<n;i++)
    dp[i][0]+=arr[i][0];
    for(int i=0;i<m;i++)
    dp[0][i]+=arr[0][i];
    for(int i=1;i<n;i++)
    for(int j=1;j<m;j++)
    dp[i][j]+=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
    cout << dp[n][m];
}