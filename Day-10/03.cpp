#include<iostream>
using namespace std;

int main(){
	
	// Logical Operator 
	
	// AND
	
	int a,b,c;
	cin>>a>>b>>c;
	
	if (a>b && a>c){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

	// OR
	
	char name='i';
	
	if (name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
	{
		cout<<"Vowel";
	}
	else{
		cout<<"Consonant";
	}

	// Not 
	
	
	cout<<!23; // 0
	cout<<!0;  // 1
	cout<<!28; // 0
	
}
