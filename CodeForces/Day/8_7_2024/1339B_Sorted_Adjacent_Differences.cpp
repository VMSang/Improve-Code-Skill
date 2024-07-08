#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<string.h>
#include<vector>
#include <set>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <queue>
#include <map>
#define all(a)     a.begin(),a.end()
#include<climits>
#include <cstring>
#include<cmath>
#include <numeric>
#include<stack>
#include <unordered_map>
#include <deque>
#include <stack>
#include <utility>
#include <numeric>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
typedef long long int ll;
#define no cout<<"NO"<< endl
#define yes cout<<"YES"<< endl

using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//long long MaxSIZE= 10000;
//long long a[200000];
//int a[100];
//double x=1000000000000;
//float ans = 1e5;
//const double  p=3.141592653;
//const int inf = 2000000000;
int largest ( int arr [ ] , int n )
{
    int max = arr [ 0 ] ;
    for ( int i = 0 ; i < n ; i++ )
    if ( arr [ i ] > max )
    max = arr [ i ] ;
    return max ;
}
int small ( int arr [ ] , int n )
{
    int min = arr [ 0 ] ;
    for ( int i = 0 ; i < n ; i++ )
    if ( arr [ i ] < min )
    min= arr [ i ] ;
    return min ;
}

int main()
{io;
ll num;cin>>num;
while(num--){

  int n;cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){cin >> arr[i];}
  sort(arr, arr + n);
  int value = n / 2;
  for (int i = 1; i <= value; i++)
  {
    cout << arr[value + i - 1] << " " << arr[value - i] << " ";
  }
  if (n % 2 != 0){cout << arr[n - 1];}
  cout << endl;

}
    return 0;
}
	  		  		 	   	  	 	 			 		  		