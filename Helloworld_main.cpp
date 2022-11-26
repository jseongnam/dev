#include <cstdio>
#include <stack>
#include <queue>
#include <string.h>
bool Check_Palindrome(const char *_str)
{
	std::stack<char> s;
	std::queue<char> q;
	
	int len = strlen(_str);
	for(int i=0;i<len;i++)
	{
		s.push(_str[i]);
		q.push(_str[i]);
	}
	
	while(!s.empty())
	{
		if(s.top()!=q.front())
			return false;
		s.pop();
		q.pop();
	}
	return true;	
}
int main()
{
	
	
	return 0;
}


