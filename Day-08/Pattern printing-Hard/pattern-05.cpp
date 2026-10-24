//Enter your input: 7
//*                         *
//* *                     * *
//* * *                 * * *
//* * * *             * * * *
//* * * * *         * * * * *
//* * * * * *     * * * * * *
//* * * * * * * * * * * * * *
//* * * * * *     * * * * * *
//* * * * *         * * * * *
//* * * *             * * * *
//* * *                 * * *
//* *                     * *
//*                         *


#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	cout<<"Enter your input: ";
	cin>>n;
	
	for (row=1;row<=n;row++){
		// Print star (*)
		for (col=1;col<=row;col++){
			cout<<"* ";
		}
		// Print space ( )
		for (col=1;col<=2*n-2*row;col++){
			cout<<"  ";
		}
		
		// Print star (*)
		for (col=1;col<=row;col++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for (row=n-1;row>=1;row--){
		// Print star (*)
		for (col=1;col<=row;col++){
			cout<<"* ";
		}
		// Print space ( )
		for (col=1;col<=2*n-2*row;col++){
			cout<<"  ";
		}
		// Print star (*)
		for (col=1;col<=row;col++){
			cout<<"* ";
		}
		cout<<endl;            
	}
}
