#include<bits/stdc++.h>
#include<iostream>
#define MOD 1000000007
#define int long long
using namespace std;

bool help(int num){
    int rev=0;
    int num1=num;
    while(num){
        rev=rev*10+num%10;
        num/=10;
    }
    
    return (num1==rev);
}

int func(int i,int j, vector<vector<int>> &arr, vector<vector<int>> &dp){
    if(i==dp.size()){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    dp[i][j]=max(arr[j][i]+func(i+1,j^1,arr,dp),func(i+1,j,arr,dp));
    return dp[i][j];
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // vector<long long> fact(1e6);
    // fact[0]=1;
    // for(int i=1;i<=1e6;i++){
    //     fact[i]=((fact[i-1]%MOD)*(i%MOD))%MOD;
    // }

    int t=1;
    // cin>>t;
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n;
        cin>>n;

        vector<vector<int>> arr(2,vector<int>(n,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        vector<vector<int>> dp(n,vector<int>(2,-1));
        cout<<max(func(0,0,arr,dp),func(0,1,arr,dp))<<endl;

    }
    return 0;
}

// [3,4,8,1,2,3] s=21

// [3,3,9,1,2,4] 2*abs(ai-bi)<=s

// [4,4,]
