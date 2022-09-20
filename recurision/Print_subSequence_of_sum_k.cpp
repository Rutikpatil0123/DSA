#include<bits/stdc++.h>
using namespace std;

void PrintS(int index, int *arr, int sum, int n, vector<int> &ds, int k){
   
   if(index == n){

       if(sum == k){

           for(auto i : ds){

               cout << i << " ";
           }

           cout << endl;
       }

       return;
   }

   PrintS(index+1, arr, sum, n, ds, k);

   ds.push_back(arr[index]);
   sum += arr[index];

   PrintS(index+1, arr, sum, n, ds, k);
    
   sum -= arr[index]; 
   ds.pop_back();

}

int main(){

    int arr[] = {1,2,1,4,2};

    int n = 5;

    int sum = 0;

    vector<int> ds;

    int k;

    PrintS(0,arr,sum,n,ds,2);

    return 0;
}

