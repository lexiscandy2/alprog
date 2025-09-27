#include <iostream>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int ans=0;
    for(int i=n;i<=m;i++){
        ans+=i;
    }
    cout<<ans;
}