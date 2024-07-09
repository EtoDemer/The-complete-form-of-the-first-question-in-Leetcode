#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
    if (x < 0 || (x % 10 == 0 && x != 0)) 
	{
        return false;
    }
    int re = 0;
    while (x > re) {
        re = re * 10 + x % 10;
        x /= 10;
    }
    return x == re || x == re / 10;
}

int main()
{
	int n;
	cout<<"please enter a number:";
	cin>>n; 
	cout<< n <<" This is a "<< (isPalindrome(n) ? "" : "no " )<< "palindrome number.s"<<endl;
 	return 0;
}

