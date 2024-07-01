#include <bits/stdc++.h>
using namespace std;

int main() {    
 	int n, cnt = 0, teamLead = 1; cin>>n;
 	if(n == 2 || n == 3) cout<<1<<endl;
 	else {
 		while(n-teamLead >= teamLead){
 			if((n-teamLead)%teamLead == 0){
 				cnt++;
     		}
 			teamLead++;
     	}
        cout<<cnt;
    }
    return 0;
}