#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		int n, h, m;
 		cin>>n>>h>>m;
 		int timeStart = h*60 + m;
 		int Min = INT_MAX;

 		for(int i=0; i<n; i++){
 			cin>>h>>m;
 			int t = h*60 + m - timeStart;
 			if(t < 0){
 				t += 24*60;
 			}
 			Min = min(Min, t);
 		}
 		cout<<Min/60<<" "<<Min%60<<endl;
    }
    return 0;
}


//sai vì nếu báo thức cùng ngày thì sort sẽ đưa giờ ngày hôm sau lên trước
// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int testCase; cin>>testCase;
//     while(testCase--){
//  		 int n, H, M; cin>>n>>H>>M;
//  		 vector<pair<int, int>> alarm(n);

//  		 for(int i=0; i<n; i++){
//  		 	int f, s;
//  		 	cin>>f>>s;
//  		 	alarm[i] = make_pair(f, s);
//  		 }      
 			
//  		 sort(alarm.begin(), alarm.end());

//  		 int startMi = H*60 + M;
//  		 int endMi = alarm[0].first*60 + alarm[0].second;
//  		 if(endMi < startMi) endMi += 24*60;
//  		 int time = endMi - startMi;
//  		 int timeH = time / 60;
//  		 time -= timeH*60;
//  		 cout<<timeH<<" "<<time<<endl;
//     }
//     return 0;
// }