#include<iostream>
using namespace std;


int Sum(int m, int n)
{
	int ans = m+n;
	cout<<"Add is :"<<ans;
}

int Mul(int o, int q)
{
	int ans = o*q;
	cout<<"Multiplication is :"<<ans;
}

void fun()
{
	cout<<"Hello Muhammad Bilal :)";
}

int main(){
	int a,b;
	cout<<"Enter two values :";
	cin>>a>>b;
	
	Sum(a,b);
	cout<<endl;
	Mul(a,b);
  cout<<endl;
  fun();
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ (OR) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




#include<iostream>
using namespace std;


int Sum(int m, int n)
{
	int ans = m+n;
	return ans;
}

int Mul(int o, int q)
{
	int ans = o*q;
	return ans;
}

void fun()
{
	cout<<"Hello Muhammad Bilal :)";
}

int main(){
	int a,b;
	cout<<"Enter two values :";
	cin>>a>>b;
	
	cout<<"Add is :"<<Sum(a,b);
	cout<<endl;
	cout<<"Multiplication is :"<<Mul(a,b);
  cout<<fun();
}






// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++






