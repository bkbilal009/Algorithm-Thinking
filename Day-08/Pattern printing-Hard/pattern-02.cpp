//Enter your value : 7
//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321
//1234567654321

#include<iostream>
using namespace std;

int main(){
	int row,col;
	int n;
	cout<<"Enter your value : ";
	cin>>n;
	
	for (row=1;row<=n;row++){
		// print space ( )
		for (col=1;col<=n-row;col++){
			cout<<" ";
		}
		// print 1 to row
		for (col=1;col<=row;col++){
			cout<<col;
		}
		// print row-1 to 1
		for (col=row-1;col>=1;col--){
			cout<<col;
		}
		cout<<endl;
		
	}
}
