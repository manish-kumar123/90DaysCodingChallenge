#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
   
int main(){
   int arr[7]={1,2,3,45,67,87,98};
   int brr[3]={5,6,7};
   reverse(arr,7);
   reverse(brr,3);
 
    printArray(arr,7);
    printArray(brr,3);
    
    return 0;
}
