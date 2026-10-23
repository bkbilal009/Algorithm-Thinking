//Enter your value : 7
//* * * * * * * * * * * * *
//  * * * * * * * * * * *
//    * * * * * * * * *
//      * * * * * * *
//        * * * * *
//          * * *
//            *


#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	
	cout<<"Enter your value : ";
	cin>>n;
	
	for (row=n;row>=1;row--){
		// print space
		for (col=1;col<=n-row;col++){
			cout<<"  ";
		}
			
		// print * star
		
		for (col=1;col<=2*row-1;col++){
			cout<<"* ";
		}
		cout<<endl;
		
	}
}
