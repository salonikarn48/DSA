#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<bool>blocked(n+1,"False"){
        for(int i=0;i<k;i++){
            int s;
            cin>>s;
            blocked[s]=true;
        }
    }
    cout<<"ways are"<<waystoclimb(n,blocked)
    return 0;
}
int waystoclimb(int n,vector<int>blocked){
    if(n<0){
        return 0;

    }else if(n==0){
        return 1;
    }
    if(blocked[n]==true){
        return 0;
    }
    return waystoclimb(n-1,blocked)+waystoclimb(n-2,blocked);
}