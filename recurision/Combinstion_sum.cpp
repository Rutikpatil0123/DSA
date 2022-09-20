// Combination sum leetcode
/*

Subsequence array with repeating element to a target sum

example

int arr[] = {2,3,6,7};
int target = 7;

[[2,2,3] [7]];   

*/

#include<bits/stdc++.h>
using namespace std;

void healper(int index, int n, vector<int> arr, int target, vector<vector<int>> &ans, vector<int> &temp){

    if(index == n){

        if(target == 0){

            ans.push_back(temp);


        }
        return;
    }

    if(target >= arr[index]){

        temp.push_back(arr[index]);
        healper(index, n, arr, target - arr[index], ans, temp);
        temp.pop_back();
    }

    healper(index+1, n, arr, target, ans, temp);
}

vector<vector<int>> combination(int index, int n, vector<int> arr, int target){
  
  vector<vector<int>> ans;
  vector<int> temp;

  healper(0, n, arr, target, ans, temp);

  return ans;

}

int main(){

 vector<int> arr = {2,3,6,7};

  int n = 4;
  
   vector<vector<int>> ans = combination(0,n,arr,7);

   for(auto i : ans){

      for(auto j : i){

          cout << j << " ";
      }

      cout << endl;
  }



  
}