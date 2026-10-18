//* * * *
//* * *
//* *
//*

#include<iostream>
using namespace std;

int main(){
	int row,col;
	
	for (row=1;row<=4;row++){
		for (col=4;col>=row;col--){
			cout<<"* ";
		}
		cout<<endl;
	}
}
