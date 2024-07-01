#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		string keyboard; cin>>keyboard;
 		vector<int> charKeyboardPos(26);

 		for(int i=0; i<26; i++){
 			charKeyboardPos[keyboard[i] - 'a'] = i;
 		}       

 		string word; cin>>word;
 		int currPos = charKeyboardPos[word[0] - 'a'];
 		int nextPos, dis = 0;

 		for(int i=1; i<word.size(); i++){
 			int nextPos = charKeyboardPos[word[i] - 'a'];
 			dis += abs(currPos - nextPos);
 			currPos = nextPos;
 		}

 		cout<<dis<<endl;
    }
    return 0;
}