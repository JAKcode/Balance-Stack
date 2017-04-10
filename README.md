# Balance-Stack
//Currently amazingly non-functional
#include <iostream>
#include <stack>
#include <string>
using namespace std;
void push (char x)
{
stk.push(char x);
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
    for(unsigned int i = 0; i < input.length() -1; i++)
{
if ((stk[i])=='(')
{
	push(stk[i]);
}
else if (stk[i]==')')
{
pop();
}
}
if (stk[i] == NULL)
{
	cout <<"balanced expr!!";
}
else
{
	cout <<"String is not valid!!";
}
system("pause");
}
