//40
//Odd no : 1
//Odd no : 3
//Odd no : 5
//Odd no : 7
//Odd no : 9
//Odd no : 11
//Odd no : 13
//Odd no : 15
//Odd no : 17
//Odd no : 19
//Odd no : 21
//Odd no : 23
//Odd no : 25
//Odd no : 27
//Odd no : 29
//Odd no : 31
//Odd no : 33
//Odd no : 35
//Odd no : 37
//Odd no : 39


#include<iostream>
using namespace std;

int main(){
	
	int i,n;
	i=1;
	cin>>n;
	while(i<=n){
		if (i%2!=0){
			cout<<"Odd no : "<<i<<endl;
		}
		i++;
	}
}
