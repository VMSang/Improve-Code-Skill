#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int MaxVal = INT_MIN, MinVal = INT_MAX;
        int MaxPos = 0, MinPos = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] > MaxVal){
                MaxVal = v[i];
                MaxPos = i;
            } 
            if(v[i] < MinVal){
                MinVal = v[i];
                MinPos = i;
            }
        }

        if(MinPos > MaxPos){
            swap(MinPos, MaxPos);
        }

        // .... min......max.....
        int da = MaxPos + 1; //   -> max.... 
        int db = n - MinPos; //   ....min <--
        int dc = MinPos + n - MaxPos + 1; // -> min...max <-

        cout<<min({da,db,dc})<<endl;
    }
    return 0;
}