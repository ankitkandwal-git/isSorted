#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[],int n){
    int min = arr[0];
    int secondMin  = -1;
    for(int i=1;i<n-1;i++){
        if(arr[i]<min){
            secondMin = min;
            min = arr[i];
        }
        if(arr[i]>min && arr[i]<secondMin){
            secondMin = arr[i];
        }
    }
    return secondMin;
}

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = secondSmallest(arr, n);
    cout<<result<<endl;
    return 0;
}