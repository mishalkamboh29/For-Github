#include <iostream>
using namespace std;
bool isEligibleToVote(int age)
 {
    return age >= 18;
}

int main() 
{
    int age;

    cout<< "enter your age "<<endl;
    cin >> age;


    if (isEligibleToVote(age)) 
	{
       cout<<"you are eligible to vote"<<endl;
    } 
	else {
       cout<<"you are not eligible to vote"<<endl;
    }

    return 0;
}

