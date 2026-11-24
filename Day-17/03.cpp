// Vector function : 
// size , push_back , pop_back , front , back , at

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <char> alph={'A','b','c','d','e'}; 
	
	cout<<"The size of alph is : "<<alph.size()<<endl;

	return 0;
}

// ouput : The size of alph is : 5


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> alph={2,3,4,5}; 
	
	alph.push_back(6);
    
    

    cout<<alph[0]<<endl;
    cout<<alph[1]<<endl;
    cout<<alph[2]<<endl;
    cout<<alph[3]<<endl;
    cout<<alph[4]<<endl;
	return 0;
}

// output 
// 2
// 3
// 4
// 5
// 6


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> alph={2,3,4,5}; 
	
	alph.pop_back();
    
    

    cout<<alph[0]<<endl;
    cout<<alph[1]<<endl;
    cout<<alph[2]<<endl;
    cout<<alph[3]<<endl;
    cout<<alph[4]<<endl;
	return 0;
}


// ouput  

// 2
// 3
// 4
// 5
// 0


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> alph={2,3,4,5}; 
	
	cout<<alph.front(); // 2
    
    

    // cout<<alph[0]<<endl;
    // cout<<alph[1]<<endl;
    // cout<<alph[2]<<endl;
    // cout<<alph[3]<<endl;
    // cout<<alph[4]<<endl;
	return 0;
}



#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> alph={2,3,4,5}; 
	
	cout<<alph.back(); // 5
    
    

    // cout<<alph[0]<<endl;
    // cout<<alph[1]<<endl;
    // cout<<alph[2]<<endl;
    // cout<<alph[3]<<endl;
    // cout<<alph[4]<<endl;
	return 0;
}
