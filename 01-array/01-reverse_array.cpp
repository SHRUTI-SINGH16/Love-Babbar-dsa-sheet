#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// using c ++ stl
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;++i){
//         cin>>arr[i];
//     }
//     reverse(arr,arr+n);
//     //reverse(arr.begin(),arr.end());   for vectors

//     for(int i=0;i<n;++i){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//with extra space
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;++i){
//         cin>>arr[i];
//     }
//     int brr[n];
//     for(int i=0;i<n;++i){
//         brr[i] = arr[n-i-1];
//     }
//     for(int i=0;i<n;++i){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//without extra space
//swap the first and last element then again swap the second and second-last element
// loop from 0 to n/2 index

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n/2;++i){
        temp = arr[i];
        arr[i] = arr[n-1-i]; 
        arr[n-1-i] = temp;
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

