#include <bits/stdc++.h>

using namespace std;

#define int long long

int lcm(int a, int b)
{
  return a * b / __gcd(a, b);
}

void solve(){
  int n,x;
  cin >> n >> x;
  vector<int>a(n);
  int sum = 0;
  for(int &i:a)cin >> i, sum += i;
  if(sum%x){
    cout << n << endl;
    return;
  }

  int l = 0, r = n-1;
  for(l; a[l]%x==0 && l < n;l++);
  for(r; a[r]%x==0 && r >= 0; r--);

  if(l==n &&r==-1){
    cout << -1 << endl;
    return;
  }
  // n - (n - r)
  cout << max(n - l - 1,n -  (n - r)) << endl;
}


// 8 2
// 0 1 0 1 0 1 0 1

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}
