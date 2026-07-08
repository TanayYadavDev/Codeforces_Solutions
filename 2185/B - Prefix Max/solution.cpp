#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>n;
        vector<int>ans;
        int max_ans = INT_MIN;
        for(int j =0;j<n;j++){
            cin>>a;
            ans.push_back(a);
        }
        cout<<endl;
        for(int i =0;i<ans.size();i++){
        max_ans = max(ans[i],max_ans);
    }
    int answer = max_ans*ans.size();
    cout<<answer;
    }
    
}