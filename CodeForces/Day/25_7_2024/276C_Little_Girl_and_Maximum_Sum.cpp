#include <bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0) ;

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int l, r;
    vector<long long int>vec(n + 2);
    for (int i = 0; i < q; i++)
    {   cin >> l >> r;
        vec[l]++;
        vec[r + 1]--;


    }
    long long int del[n + 2];
    del[0] = 0;
    for (int i = 1; i < n + 2; i++)
    {
        del[i] = del[i - 1] + vec[i];
        //cout<<del[i]<<" ";
    }
    sort(del, del + n + 2);

    long long int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans = ans + arr[i] * del[i + 2];

    }
    cout << ans;


    return 0;
}
