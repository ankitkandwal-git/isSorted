#include<bits/stdc++.h>
using namespace std;

int secondLargestNumber(int arr[], int n){
    int max = arr[0];
    int secondMax = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        if(arr[i]>secondMax && arr[i]<max){
            secondMax = arr[i];
        }
    }
    return secondMax;
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
    int result = secondLargestNumber(arr, n);
    cout<<result<<endl;
    return 0;
}