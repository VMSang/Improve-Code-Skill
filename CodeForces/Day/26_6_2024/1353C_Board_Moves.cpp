//n odd nên đi luôn có một ô trung tâm và cũng là nơi hội tụ ngắn nhanh nhất
//k = ((n-1)/2)
//mỗi lớp k sẽ có 8k ô, mỗi ô mất k lần để tới tâm => 8k.k
// Để tính tổng của các số bình phương từ 1 đến m:
// ∑_{k=1}^{m} k^2 = m(m + 1)(2m + 1) / 6

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		long long n; cin>>n;
 		if(n == 1) cout<<0<<endl;
 		else {
 			long long sum = 8 * (((n - 1) / 2) * (((n - 1) / 2) + 1) * n)/6;
 			cout<<sum<<endl;
 		}
 		// for(long long i=1; i<=(n-1)/2; i++){
 		// 	sum += 8*i*i;
 		// }
    }
    return 0;
}