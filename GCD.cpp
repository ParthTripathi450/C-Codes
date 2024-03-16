int calcGCD(int n, int m){
    int i=min(n,m);
    while(i>1){
        if (n%i==0 &&m%i==0){
            return i;
        }
        i--;
    }
    return 1;
}