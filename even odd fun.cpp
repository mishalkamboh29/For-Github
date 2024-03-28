#include <iostream>
using namespace std;
void checkEvenOdd(int number)
{
	if(number % 2 == 0)
	{

	cout<<number<<"is even"<<endl;
		}
	else {
		cout<<number<<"is odd"<<endl;
	}
 
}
int main()
{
	int num;
	cout<<"enter a number:"<<endl;
	cin>>num;
	checkEvenOdd(num);
 return 0;
}

