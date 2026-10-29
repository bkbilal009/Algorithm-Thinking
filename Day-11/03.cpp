//1
//2
//3

#include<iostream>
using namespace std;

int main(){
	
	// Break
	for (int i=1;i<=5;i++){
		if (i==4){
			break; // if true stop here 
		}
		cout<<i<<" "<<endl;
	}
	
}

// Continue


//1
//2
//3
//5
#include<iostream>
using namespace std;

int main(){
	
	// continue
	for (int i=1;i<=5;i++){
		if (i==4){
			continue; // if true skip this one 
		}
		cout<<i<<" "<<endl;
	}
	
}


