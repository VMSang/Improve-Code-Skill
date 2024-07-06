#include<bits/stdc++.h>

using namespace std;

const long double EPS = 1e-9;

long long f(long long x)
{                                                        
	long long z = sqrtl(x);
	long long ans = 1e18;
	for(int i = -5; i <= 5; i++)
	{
	 	long long z2 = z - i;
	 	if(z2 > x || z2 < 1)
	 		continue;
	 	ans = min(ans, z2 - 2 + (x + z2 - 1) / z2);
	}
	return ans;
}

int main()
{
 	int t;
 	cin >> t;
 	for(int i = 0; i < t; i++)
 	{
 	 	long long x;
 	 	cin >> x;
 	 	cout << f(x) << endl;
 	}
}