//Reverse a string or LL using stack

#include <iostream>
#include <stack>
using namespace std;

void reverse(char c[],int n)
{
	stack<char> s;
	for(int i=0;i<n;i++)
	{
		s.push(c[i]);
	}
	//loop for pop
	for(int i=0;i<n;i++)
	{
		c[i] = s.top();
		s.pop();
	}
	
	
}

int main()
{
	char c[51];
	printf("Enter a string:");
	gets(c);
	reverse(c,strlen(c));
	printf("Output = %s",c);
	
	
}



