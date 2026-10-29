

#include<iostream>
using namespace std;

int main(){
	// Scope of variable 
	
	int i=12;
	cour<<i;
	if (i==3){
		int i = 15; // allowed
		cout<<i;
		int i = 7; // not allowed
	}
	
	int i = 34; // not allowed 
	
	
}





#include<iostream>
using namespace std;

int main(){
	// Scope of variable 
	
	int n = 10;
	int i = 12;
	
	for (int i=10;i<=30;i++){
		cout<<i<<" "<<endl;
	}
	
	
}





#include<iostream>
using namespace std;

int main(){
	// Scope of variable 
	
	int n = 10;
	int i = 12;
	
	for (;i<=30;i++){
		cout<<i<<" "<<endl;
	}
	
	
}
