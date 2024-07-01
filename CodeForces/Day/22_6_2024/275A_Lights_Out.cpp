#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dim = 3;
    vector<vector<int>> grid(dim, vector(dim, 0));

    for(int row = 0; row < dim; row++){
    	for(int col = 0; col < dim; col++){
    		int tmp; cin>>tmp;
    		grid[row][col] += tmp;

    		if(row >=1){
    			grid[row - 1][col] += tmp;
    		}
    		if(col >=1){
    			grid[row][col - 1] += tmp;
    		}
    		if(row < dim - 1){
    			grid[row + 1][col] += tmp;
    		}
    		if(col < dim - 1){
    			grid[row][col + 1] += tmp;
    		}
    	}

    }
    for(int row = 0; row < dim; row++){
    	for(int col = 0; col < dim; col++){
    		cout<<(grid[row][col] + 1) % 2;
    	}
    	cout<<endl;
    }
    return 0;
}