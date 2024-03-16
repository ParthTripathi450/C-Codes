
void nStarTriangle(int n) {
    for (int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            cout<<" ";
        }
        for (int k=0;k<(2*i)+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}