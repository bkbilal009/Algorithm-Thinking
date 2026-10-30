// Qs: 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

// ANS : 01
// Enter the input : 12
// Even no: 2
// Even no: 4
// Even no: 6
// Even no: 8
// Even no: 10
// Even no: 12

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	
	int i=1;
	while(i<=n){
		if(i%2==0){
			cout<<"Even no: "<<i<<endl;
		}
		i++;
	}
}

// Do-while loop

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	
	int i=1;
	do{
		if(i%2==0){
			cout<<"Even No: "<<i<<endl;
		}
		i++;
	}
	while(i<=n);
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Qs: 02 2: Find the factorial of a number n using a while loop and do a while loop.


// Ans:02
//Enter the input : 12
//Factorial is : 479001600

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	
	int i=1;
	int fact=1;
	while(i<=n){
		fact = fact * i;
		i++;
	}
	cout<<"Factorial is: "<<fact<<endl;
}




// do-while loop
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	
	int i=1;
	int fact=1;
	do{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	cout<<"Factorial is : "<<fact<<endl;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// Qs:03
// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

// Ans:03

//Enter the input : 20
//Value is: 1
//Value is: 2
//Value is: 4
//Value is: 7
//Value is: 8
//Value is: 11
//Value is: 13
//Value is: 14
//Value is: 16
//Value is: 17
//Value is: 19


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	int i=1;
	while(i<=n){
		if (i%3==0 || i%5==0){
			i++;
			continue;
		}
		cout<<"Value is: "<<i<<endl;
		i++;
	}
	return 0;
}

// do-while loop

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	int i=1;
	do{
		if(i%3==0 || i%5==0){
			i++;
			continue;
		}
		cout<<"Value is : "<<i<<endl;
		i++;
	}
	while(i<=n);
}
  

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// Qs:04
// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

// Ans : 04

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the input : ";
	cin>>n;
	switch (n){
		case 1:
			cout<<"Jan";
			break;
		case 2:
			cout<<"Feb";
			break;
		case 3:
			cout<<"Mar";
			break;
		case 4:
			cout<<"Apr";
			break;
		case 5:
			cout<<"May";
			break;
		case 6:
			cout<<"June";
			break;
		case 7:
			cout<<"July";
			break;
		case 8:
			cout<<"Aug";
			break;
		case 9:
			cout<<"Sep";
			break;
		case 10:
			cout<<"Oct";
			break;
		case 11:
			cout<<"Nov";
			break;
		case 12:
			cout<<"Dec";
			break;
	}
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Qs:05
// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

// Ans : 05



//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//a b c d e f g h i j k l m n o p q r s t u v w x y z


#include<iostream>
using namespace std;

int main(){
	char cap = 'A';
	char small = 'a';
	
	while(cap <= 'Z'){
		cout<<cap<<" ";
		cap++;
	}
	cout<<endl;
	
	while(small<='z'){
		cout<<small<<" ";
		small++;
	}
	cout<<endl;
	
}


