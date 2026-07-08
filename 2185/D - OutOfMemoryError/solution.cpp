#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,m,h;
    cin>>n>>m>>h;
    vector <int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int> temp=v;
    vector<int>x;
    for(int i=1;i<=m;i++){
        int bi,ci;
        cin>>bi>>ci;
        v[bi-1]=v[bi-1]+ci;
        x.push_back(bi-1);
        if(v[bi-1]>h) {
            for(int l:x){
                v[l]=temp[l];
            }
            x.clear();
        }
 
 
 
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
 
 
   }
    
}