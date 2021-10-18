#include <iostream>
using namespace std;

int main() {
    int n,i,j; 
    cout<<"Enter a number greater than 10: ";
	cin>>n ;
	cout<<endl;
	
	//upper triangles
	for(i=n/3;i>=1;--i){
	    for(j=1;j<=2*n;j++){
	        if((j<i)||(j>(n-i)+1)&&(j<(n+i)-1)||j>(2*n-i))
	        cout<<" ";
	        else
	        cout<<"*";
	    }
	    cout<<endl;
	}
	
	//lower inverted triangle
	for(i=1;i<=n; i++){
	    for(j=1;j<=2*n;j++){
	        if(j<i||j>(2*n-i))
	        cout<<" ";
	        else
	        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}