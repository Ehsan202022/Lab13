#include <iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main(){

set<int>s;
vector<int>vec(10);


int arr[5]={1,3,5,7,9};
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    s.insert(10);


    merge(arr,arr+5,s.begin(),s.end(),vec.begin());
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<endl;}
