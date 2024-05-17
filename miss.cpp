#include <iostream>
using namespace std;

void missing_num(int li[], int n){
    int i;
    int temp[n+1];
    for(int i=0;i<=n;i++){
        temp[i]=0;
    }
    for(i=0;i<n;i++){
        temp[li[i]-1]=1;
    }

    int ans;
    for(i=0;i<=n;i++){
        if(temp[i]==0)
        ans=i+1;
    }
    cout<<ans;

}
int main(){
    int li[] = {21, 23, 24, 18, 19, 22};
    int n=sizeof(li)/sizeof(li[0]);
    missing_num(li,n);
}