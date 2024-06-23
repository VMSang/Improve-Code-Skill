#include <bits/stdc++.h>
using namespace std;


int solve(string s, string t){
    int sptr = s.size() - 1; //use for index
    int cnt = 0; //count

    //check left to right
    while(sptr >= 0 && s[sptr] != t[1]){
        sptr--;
        cnt++;
    }
    if(sptr < 0) return 100;

    sptr--; //finded s[0]
    while(sptr >= 0 && s[sptr] != t[0]){
        sptr--;
        cnt++;
    }
    if(sptr < 0) return 100;
    else return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;

    while(testCase--){
        string s;
        cin>>s;

        string t[] = {"00" ,"25" ,"50", "75"};
        int Min = INT_MAX;
        for(string x : t){
            Min = min(Min, solve(s, x));
        }
        cout<<Min<<endl;
    }
    return 0;
}