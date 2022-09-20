#include<bits/stdc++.h>
using namespace std;

class heap{
  
  public:
    
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int data){

        size++;
        int index = size;
        arr[index] = data;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[index], arr[parent]);
                index = parent;
            }else{
                return;
            }
        }
    }

    void deletefromHeap(){

        if(size == 0){

            cout <<"Heap is empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        
        int i = 1;

        while(i < size){

            int leftChild = 2*i;
            int rightChild = 2*i+1;

            if(leftChild < size && arr[leftChild] > arr[i]){
                swap(arr[i], arr[leftChild]);
                i = leftChild;
            
            }else if(rightChild < size && arr[rightChild] > arr[i]){
                swap(arr[i], arr[rightChild]);
                i = rightChild;
            }else{
                return;
            }

        }
    }


    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
};


    void heapify(int arr[], int n, int i){

        int largest = i;
        int leftChild = 2*1;
        int rightChild = 2*i+1;

        if(leftChild <= n && arr[i] < arr[leftChild]){
            largest = leftChild;
        }

        if(rightChild <= n && arr[i] < arr[rightChild]){
            largest = rightChild;
        }

        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    void heapSort(int arr[], int n){

        int size = n;
        while(size > 1){
            swap(arr[1], arr[size]);
            size--;

            heapify(arr,size,1);
        }
    }

int main(){

  heap h;
  h.insert(15);
  h.insert(25);
  h.insert(12);
  h.insert(50);
  h.print();
  h.deletefromHeap();
  h.print();    

  int a[6] = {-1, 54, 53, 55, 52, 50};
  int n = 5;
  for(int i = n/2; i > 0; i--){
       heapify(a,n,i);  
  }

  for(int i = 1; i <= n; i++){
    cout << a[i] <<" ";
  }
  cout << endl;

  heapSort(a,n);

  for(int i = 1; i <= n; i++){
    cout << a[i] <<" ";
  }
  cout << endl;

  cout << endl;
}