#include <iostream>
using namespace std;
void FindTheNo(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    cout<<res;
}
int main(){
    int n,r;
    cin>>n>>r; 
    FindTheNo(n,r);
}