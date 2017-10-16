#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string str;
	stack<char> s1;
	cin>>str;
	for (int i=0; i<str.size(); i++){
		if (s1.empty()){
			s1.push(str[i]);
		}
		else if (s1.top()==str[i]){
			s1.pop();
		}
		else{
			s1.push(str[i]);
		}
	}
	if (s1.empty()){
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	return 0;
}
