# Balance-Stack
//Currently amazingly non-functional
#include <iostream>
#include <stack>
#include <string>
using namespace std;
void push (string & x)
{
stack <char> stk;
for(unsigned int i = 0; i < input.length() -1; i++)
{
if ((stk[i])=='(')
{
	stk.push(x);
}
else if (stk[i]==')')
{
pop();
}
}
}
if (stk[i] == NULL)
{
	cout <<"balanced expr!!";
}
char pop()
{
	if (stk.empty();)
	{
		cout <<"underflow!!";
	}
	else
	{
		stk.pop();
	}
}
int main()
{	
stack<char> stk;
string input;
cin >> input;
push(input);
system("pause");
}
