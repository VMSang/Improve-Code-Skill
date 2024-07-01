//một số có duy nhất 4 ước khi và chỉ khi nó là snt bình phương
//Theo định lý Bertrand, luôn tồn tại một số nguyên tố giữa n và 2n với mọi n > 1.

#include <bits/stdc++.h>
using namespace std;

const int MAX_D = 10000;
vector<long long> smallest_a(MAX_D + 2);
const int MAX_PRIME = 70000;

void precompute() {
	//sieve of eratosthenes
	vector<bool> isprime(MAX_PRIME + 1, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= MAX_PRIME; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= MAX_PRIME; j += i) {
                isprime[j] = false;
            }
        }
    }

	//precompute pq/p^3
	for (int d = 1; d <= MAX_D; d++) {
		long long p = d + 1;
		while (!isprime[p]) p++;

		long long q = p + d;
		while (!isprime[q]) q++;

		smallest_a[d] = min(1LL * p * p * p , 1LL * p * q);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	precompute();

	int ts; cin >> ts;
	while (ts--) {
		int d; cin >> d;
		cout << smallest_a[d] << endl;
	}
	return 0;
}