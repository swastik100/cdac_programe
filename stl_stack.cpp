/*
Using stack, find it the given string consists of matching parentheses or not. 
Input string will consist of {}[]().
*/

#include<iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
	string str;
	stack<char>s;
	cout<<"Enter string :\n";
	cin>>str;
	
	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i]=='{' || str[i]=='(' || str[i]=='[')
			s.push(str[i]);
		else if(str[i]=='}' && s.top()=='{' || str[i]==')' && s.top()=='(' || str[i]==']' && s.top()=='[')
			s.pop();
	}

	if (!s.empty())
	{
		cout<<"Mismatch !!\n";
	}

	else
		cout<<"Matched \n";
	return 0;
}