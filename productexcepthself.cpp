#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>result;
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        result.push_back(prefix[i]*suffix[i]);
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}