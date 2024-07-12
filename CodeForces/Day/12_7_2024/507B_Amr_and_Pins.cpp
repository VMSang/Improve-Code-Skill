#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, x,y,u,v;
    cin>>r>>x>>y>>u>>v;
    double d = sqrt(pow(x - u, 2) + pow(y - v ,2));
    cout<<ceil(d/(2*r));
    return 0;
}