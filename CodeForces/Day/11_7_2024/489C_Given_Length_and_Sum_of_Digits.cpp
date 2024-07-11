#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include <cmath>
#include<map>
#include<unordered_set>
#include<bitset>
#include<stack>
#include<set>
#include<numeric>  // iota
#include<iomanip>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int tt = 1;
    //cin >> tt ;
    for (int tc = 1; tc <= tt; ++tc) {
        ll m,s;   cin>>m>>s;
        string mn(m,'0'),mx(m,'0');
        if(s>9*m||m>1&&s==0||m==1&&s>9)  cout<<"-1 -1\n";
        else if(m==1)  cout<<s<<' '<<s<<"\n";
        else
        {
            ll x=s;
            for(int i=0;i<m;i++)
            {
            	if(x>=9)  mx[i]='9' , x-=9;
            	else   mx[i]=x+'0' , x=0;  
            }
            x=s;
            for(int i=m-1;i>=0;i--)
            {
            	if(x>=9)  mn[i]='9' , x-=9;
            	else  mn[i]=x+'0' , x=0;
            }
            if(mn[0]=='0')
            {
            	for(int i=1;i<m;i++)
            	{
            		if(mn[i]!='0')
            		{
            			mn[i]--;
            			mn[0]='1';
            			break;
            		}
            	}
            }
            cout<<mn<<" "<<mx<<"\n";
        }
    }
       return 0;
}