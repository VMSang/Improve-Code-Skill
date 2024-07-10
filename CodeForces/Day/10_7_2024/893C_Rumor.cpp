#include <algorithm>
#include <functional>
#include <iostream>
#include <limits>
#include <numeric>
#include <string>
#include <vector>

#include <cmath>
#include <cstdint>
#include <cstring>

using i64 = int64_t;
using i32 = int32_t;
using u64 = uint64_t;
using u32 = uint32_t;


#ifndef ONLINE_JUDGE
#include <format>
template <typename... _Args>
void debug(std::format_string<_Args...> __fmt, _Args&&... __args) {
    std::cout << std::vformat(__fmt.get(), std::make_format_args(__args...));
}
#else
#define debug(fmt, ...)
#endif

constexpr i32 INF32 = std::numeric_limits<i32>::max();


void solve() {
    i64 n, q;
    std::cin >> n >> q;

    std::vector<int> p(n);
    for (i64 i = 0; i < n; i++) {
        std::cin >> p[i];
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    std::vector<int> b(n, INF32);

    std::function<int(int)> find = [&](int x) {
        if (arr[x] == x) {
            return x;
        } else {
            arr[x] = find(arr[x]);
            return arr[x];
        }
    };

    auto merge = [&](int x, int y) { arr[find(x)] = find(y); };

    auto same = [&](int x, int y) { return find(x) == find(y); };

    for (int i = 0; i < q; i++) {
        int x, y;
        std::cin >> x >> y;
        x--, y--;
        merge(x, y);
    }

    for (int i = 0; i < n; i++) {
        int x = find(i);
        b[x]  = std::min(b[x], p[i]);
    }

    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        if (find(i) == i) {
            ans += b[i];
        }
    }

    std::cout << ans << std::endl;
}

int main() {
#ifdef ONLINE_JUDGE
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
#endif
    size_t t = 1;
    // std::cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}

	 	  	 			 				   	   			  				