#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i = 0;
        int j = matrix[0].size()-1;
        
        while(i < matrix.size() && j >= 0){
            
            if(matrix[i][j] == target){
                return true;
            }else if(matrix[i][j] < target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }

int main(){

    vector<vector<int> > ans;

    vector<int> temp;
    int n,m;

    cin >> n >> m;
    int a ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cin >> a;
          temp.push_back(a);
        }
        ans.push_back(temp);
        temp.clear();
    }

    int target;
    
    cout << "Enter the target" << endl;
    cin >> target;

    cout << searchMatrix(ans,target);    
}