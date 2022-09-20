#include<bits/stdc++.h>
using namespace std;

bool PrintS(int index, int sum, int n, int k, int *arr, vector<int> &ds){
 
  if(index == n){

      if( sum == k){

          for(auto i : ds){

              cout << i <<" ";
          }

          cout << endl;

          return true;
      }else{

          return false;
      }
  }

  ds.push_back(arr[index]);

  sum += arr[index];

  if(PrintS(index+1, sum, n,k,arr,ds) == true){

      return true;
  } 

  ds.pop_back();

  sum -= arr[index];

  if(PrintS(index+1, sum, n, k, arr, ds) == true){

      return true;
  }

  return false;

}

int main(){
    
    vector<int> ds;

    int arr[] = {2,1,1,3,4,2,1};

    int n = 7;

    int k;

    int sum = 0;

    PrintS(0,0,n,2,arr,ds);


}