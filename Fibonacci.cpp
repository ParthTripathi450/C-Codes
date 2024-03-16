#include<iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter number";
        cin>>n;
        int arr[n];
        if (n-1==0 || n-1==1){
                cout<<1;
        }
        else if (n-1>2){
                arr[0]=1;
                arr[1]=1;
                for (int i=2;i<n;i++){
                        arr[i]=arr[i-2]+arr[i-1];

                }
                cout<<arr[n-1];   
        }
        return 0;
}