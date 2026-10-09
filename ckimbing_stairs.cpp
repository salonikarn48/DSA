//ways to climb
int waystoclimb(int n){
    if(n==0||n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }else{
        return waystoclimb(n-1)+waystoclimb(n-2)+waystoclimb(n-3);
    }
} 

