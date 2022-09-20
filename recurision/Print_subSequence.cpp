#include<bits/stdc++.h>
using namespace std;

void printF(int idx, int *arr, vector<int> &ans, int n){

    if(idx == n){

        for(auto i : ans){

            cout << i << " "; 

        }
         
        if(ans.size() == 0){

            cout <<"{}";
        } 
        cout << endl;

      return;

    }
    printF(idx+1, arr, ans, n);
    ans.push_back(arr[idx]);
    printF(idx+1, arr, ans, n);

    ans.pop_back();
   // printF(idx+1, arr, ans, n);
}

int main(){
  
  int arr[] = {3,1,2};
  int n = 3;

  vector<int> ans;

  printF(0,arr, ans ,n);

  return 0;
    
}