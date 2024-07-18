#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> ans;
    for(int a=0;a<t;a++){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        int mtn=-1,j=1,curr=0,peaks=1,left=0,i=0;
        while(j<k-1){
            if(nums[j]>nums[j-1] && nums[j]>nums[j+1]) curr++;
            j++;
        }
        if(curr!=0) peaks=curr+1;
        for(;j<nums.size()-1;j++){
            if(nums[i+1]>nums[i] && nums[i+1]>nums[i+2]) curr--;
            i++;
            if(nums[j]>nums[j+1] && nums[j]>nums[j-1]) curr++;
            if(curr!=0 && curr+1>peaks){
                peaks=curr+1;
                left=i;
            }
        }
        ans.push_back({peaks,left});
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second+1<<endl;
}