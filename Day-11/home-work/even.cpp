//30
//Even no : 2
//Even no : 4
//Even no : 6
//Even no : 8
//Even no : 10
//Even no : 12
//Even no : 14
//Even no : 16
//Even no : 18
//Even no : 20
//Even no : 22
//Even no : 24
//Even no : 26
//Even no : 28
//Even no : 30


#include<iostream>
using namespace std;

int main(){
	
	int i,n;
	i=1;
	cin>>n;
	while(i<=n){
		if (i%2==0){
			cout<<"Even no : "<<i<<endl;
		}
		i++;
	}
}
