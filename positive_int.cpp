#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    const long long int N=100000;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0;
    }
    for (int i=0;i<n;i++){
        if(a[i]>=0){
        check[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
