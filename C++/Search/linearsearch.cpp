#include <iostream>
using namespace std;
int main(){
    int n,search,result;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array you have given is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Enter the element you want to find in the given array : ";
    cin>>search;
    for(int i=0;i<n;i++){
        if(a[i]==search){
            cout<<"The number "<<search<<"is at "<<i<<"position.";
        }    
    }
}
