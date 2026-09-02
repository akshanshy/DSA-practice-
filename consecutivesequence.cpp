#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={100,5,1,2,200,3,4,5};
    
    unordered_set<int>st;
    int maxi=1;
    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
    st.insert(arr[i]);
    }

    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
        if(st.count(arr[i]-1))continue;
        int x=arr[i]+1;
        int currlen=1;

        while(st.count(x)){
            currlen++;
            x++;
        }
        maxi=max(maxi,currlen);
    }
    cout<< maxi;
    return 0;
}