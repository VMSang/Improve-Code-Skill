#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//nếu không có ngoạc chỗ điều kiện thì:
//		ll result = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;
//     	cout << result;
int main() {    
 	int n; cin>>n;
 	cout << ((n%2==0) ? n/2 : (-n-1)/2);   
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {    
//  	int n; cin>>n;
//  	int sum = 0;
//  	for(int i=1; i<=n; i++){
//  		sum+= (i%2 == 0) ? i : -i;
//  	}	   
//  	cout<<sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {    
//  	int n; cin>>n;
//  	int sum = 0;
//  	for(int i=1; i<=n; i++){
//  		sum+= pow(-1, i)*i;
//  	}	   
//  	cout<<sum;
//     return 0;
// }