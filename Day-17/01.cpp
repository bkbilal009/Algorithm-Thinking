// we can implement vector in three ways
// 1.vector <int> vec;
// 2.vector <int> vec = {1,2,3}
// 3.vector <int> vec(4,0) ----> here the 4 is size of the vector & 0 is idx or value




#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec;
	cout<<vec[0];
	return 0;
}



#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec={1,2,3}; // size is 3
	
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
	cout<<vec[2]<<endl;
	
	return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec(5,0); 
	
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

	// output: 
	// 0
	// 0
	// 0
	// 0
	// 0
	return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec(5,1); 
	
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

	// output: 
	// 1
	// 1
	// 1
	// 1
	// 1

	return 0;
}



#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> vec(5,2); 
	
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

	// output: 
	// 2
	// 2
	// 2
	// 2
	// 2

	return 0;
}
