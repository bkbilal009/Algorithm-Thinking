// using for each loop 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec(5,2); // size is 3
	
	for (int i: vec){
        cout<<i<<endl;
    }

	return 0;
}

// output

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec(5,2); // size is 3
	
	for (int i: vec){
        cout<<i<<endl;
    }

	return 0;
}
// output
// 2
// 2
// 2
// 2
// 2



#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <char> alph={'A','b','c','d','e'}; // size is 5
	
	for (int value: alph){
        cout<<value<<endl;
    }

	return 0;
}

// ouput

// 65
// 98
// 99
// 100
// 101
