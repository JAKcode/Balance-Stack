//# Balance-Stack
//Currently amazingly non-functional
//now funtional
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool push (string  x)
{
stack <char> stk;
for(unsigned int i = 0; i < x.length() ; i++)
{
if ((x[i])=='(')
{
	stk.push(x[i]);
}
else if (x[i]==')')
{
	if (stk.empty())
	{
	    return false;
		cout <<"underflow!!";
	}
	else
	{
		stk.pop();
	}
}
}
if (stk.empty())
{
    return true;
	//cout <<"balanced expr!!";
}
else{
    cout << stk.top();
    return false;
    //cout <<"Incorrect String";
}
}

int main()
{
string input;
cout << "enter string"<<endl;
cin >> input;
if(push(input)){
    cout << "balanced expression" << endl;
}else{
    cout << "invalid expression" << endl;
}
//system("pause");
}
