#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string str;
	deque<char> s1;
	cin>>str;
	for (int i=0; i<str.size(); i++){
			if (s1.empty()){
			s1.push_back(str[i]);
		}
		else if (s1.back()==str[i]){
			s1.pop_back();
		}
		else{
			s1.push_back(str[i]);
		}
	}
		int size=s1.size();
		for (int i=0; i<size; i++){
			cout<<s1.front();
			s1.pop_front();
		}
	return 0;
}
