//Enter your word :s
//S
//Enter your word :l
//L


#include<iostream>
using namespace std;

char convert(char word){
	char ans=word-'a'+'A';
	return ans;
}

int main(){
	char name;
	cout<<"Enter your word :";
	cin>>name;
	
	cout<<convert(name)<<endl;
	return 0;
}
