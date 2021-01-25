#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
int i,j,k,flag=0;
for(i=0;i<n-2;i++){
    for(j=i+1;j<n-1;j++)
    {
        for(k=j+1;k<n;k++){
            if(arr[i]+arr[j]==arr[k]){
            cout<<i<<","<<j<<","<<k<<endl;
                return ;}
        }

    }
}
      cout<<"no sequence found";
return;
}
int main()
{
    int a[100],t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        func(a,n);
    }
return 0;
}
