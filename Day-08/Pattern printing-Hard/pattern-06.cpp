//Enter your input: 11
//
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *
// * * * * * * * * * *
//  * * * * * * * * *
//   * * * * * * * *
//    * * * * * * *
//     * * * * * *
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *


#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	cout<<"Enter your input: ";
	cin>>n;
	
	for (row=n;row>=1;row--){
		// Print space ( )
		for (col=1;col<=row;col++){
			cout<<" ";
		}
		// Print star (*)
		for (col=1;col<=n-row;col++){
			cout<<"* ";
		}
		// Print space ( )
		for (col=1;col<=row;col++){
			cout<<" ";
		}
		cout<<endl;
	}
	
	for (row=2; row<=n; row++){
		// Print space ( )
		for (col=1;col<=row;col++){
			cout<<" ";
		}
		// Print star (*)
		for (col=1;col<=n-row;col++){
			cout<<"* ";
		}
		// Print space ( )
		for (col=1;col<=row;col++){
			cout<<" ";
		}
		cout<<endl;
	}
	
	
}
