// vector have two types 
// 1. size  -----> no of elements
// 2. capacity  ----> capacity in vector it become double and it's depends on (no of elements)

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> alph; 
	
	alph.push_back(6);
  alph.push_back(5);
  alph.push_back(4);
  alph.push_back(3);
  alph.push_back(2);

    cout<<"The size is : " <<alph.size()<<endl;
    cout<<"The capacity is : " <<alph.capacity()<<endl;
	return 0;
}

// output : 
// The size is : 5
// The capacity is : 8
