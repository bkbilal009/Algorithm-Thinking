// Calculation:
// - 3³ = 27
// - 5³ = 125
// - 1³ = 1
// - Total = 153


//Enter the number :153
//1

//Enter the number :45
//0

#include<iostream>
#include<cmath>
using namespace std;
	
int CountDigit(int Number){
	int count=0;
	while(Number){
		count++;
		Number /= 10;
	}
	return count;
}

bool Armstrong(int num,int digit){
	int n=num,ans=0,rem;
	while(n){
		rem = n%10;
		n /= 10;
		ans = ans + pow(rem,digit);
	}
	if (ans == num){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int num;
	cout<<"Enter the number :";
	cin>>num;
	
	// Count digit
	int digit = CountDigit(num);
	// Armstrong number
	cout<<Armstrong(num,digit);
	
	return 0;
}
