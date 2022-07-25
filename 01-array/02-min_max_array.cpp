#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// using c ++ stl
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;++i){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     cout<<"Min: "<<*min_element(arr.begin(),arr.end())<<endl;
//     cout<<"Max: "<<*max_element(arr.begin(),arr.end())<<endl;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i=0;i<n;++i){
        if(minimum>=arr[i]){
            minimum = arr[i]; 
        }
        if(maximum<=arr[i]){
            maximum = arr[i]; 
        }
    }
    cout<<"Min: "<<minimum<<endl;
    cout<<"Max: "<<maximum<<endl;
    return 0;
}