#include<bits/stdc++.h>
using namespace std;

int PrintS(int index, int n, int k, int sum, int *arr){

   if(index == n){

       if(sum == k){

           return 1;
       }else{

           return 0;
       }
   }

   sum += arr[index];

   int l = PrintS(index+1, n, k, sum, arr);

   sum -= arr[index];

   int r = PrintS(index+1, n, k, sum, arr);

   return l+r;

}

int main(){

   
   int arr[] = {1,3,1,2,1,2,6};

   int n = 7;

   int k = 2;
   
   int sum = 0;

   cout << PrintS(0,n,k,sum,arr);
}