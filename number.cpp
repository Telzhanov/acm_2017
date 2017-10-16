#include <iostream>
#include <string> 
#include <sstream>
#include <stack>
using namespace std;
int main()
{
	string str;
	stack<char> st;
	long long number;
	long long tmp;
	string answer="";
	stringstream sso;
	stringstream sso1;
	int cf=0;
	int cs=0;
	cin>>str;
	sso << str;
	sso >> number;
	char p[100];
	for (int j=2; j<=14; j=j+2){	
	for (int mask=0; mask<(1<<j); mask++)
	{
		for (int i=0; i<j; i++)
		{
			
			if ((mask & (1<<i))>0)
			{
				cs++;
				st.push('7');
			}
			else{
				cf++;
				st.push('4');
			}
		}
		if (cs==cf){		
			for (int i=0; i<j; i++)
		{
			answer=answer+st.top();
			st.pop();
		}
		sso1<<answer;
		sso1>>tmp;
		sso1.str(std::string());
		sso1.clear();
		if (tmp==number)
		{
			cout<<tmp;
			return 0;
		}
		if (tmp>number)
		{
			cout<<tmp;
			return 0;
		}
		}
		else{
			for (int i=0; i<j; i++){
				st.pop();
			}
		}
		cf=0;
		cs=0;
		answer="";
	}
}
	return 0;
}
