#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
string a[10000][2];
int main()
{
	int n;
	stack<char> st1;
	stack<char> st2;
	stack<char> st3;
	stringstream sso;
	stringstream sso1;
	stringstream sso2;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for (int i=0; i<n; i++)
	{
		string s1="";
		string s2="";
		string s3;
		string answer="";
		int number1;
		int number2;
		int sum;
		for (int j=0; j<a[i][0].size(); j++)
		{
			st1.push(a[i][0][j]);
		}
		for (int j=0; j<a[i][1].size(); j++)
		{
			st2.push(a[i][1][j]);
		}
		for (int j=0; j<a[i][0].size(); j++)
		{
			s1+=st1.top();
			st1.pop();
		}
		for (int j=0; j<a[i][1].size(); j++)
		{
			s2+=st2.top();
			st2.pop();
		}
	sso << s1;
	sso >> number1;
	sso1 << s2;
	sso1 >> number2;
	sum=number1+number2;
	sso2<<sum;
	s3=sso2.str();
	for (int j=0; j<s3.size(); j++)
	{
		st3.push(s3[j]);
	}
	bool isZero=false;
	for (int j=0; j<s3.size(); j++)
	{
		if (j==0 && st3.top()=='0'){
			isZero=true;
		}
		if (isZero==true){
			st3.pop();
			if (st3.top()!='0'){
				isZero=false;
			}
		}
		else{
		answer+=st3.top();
		st3.pop();
		}
	
	}
	cout<<answer<<endl;
	sso.str(std::string());
	sso.clear();
	sso1.str(std::string());
	sso1.clear();
	sso2.str(std::string());
	sso2.clear();
	}
	return 0;
}
