#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Min: "<<*min_element(arr.begin(),arr.end())<<endl;
    cout<<"Max: "<<*max_element(arr.begin(),arr.end())<<endl;
    return 0;
}