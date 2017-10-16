	#include <iostream>
	#include <stack>
	using namespace std;
	int main()
	{
		string str;
		int max=0;
		int maxnum=1;
		int max2=0;
		int maxnum2=1;
		int counter=0;
		int counter1=0;
		stack<char> s1;
		stack<char> s2;
		cin>>str;
		for (int i=str.size()-1; i>=0; i--){
			if (str[i]==')'){
				s1.push(str[i]);
			}
			if (str[i]=='('){
				if (!s1.empty()){
					s1.pop();
					counter+=2;
					if (max==counter){
						maxnum++;
					}
					if (counter>max){
						max=counter;
						maxnum=1;
					}
				}
				else{
					counter=0;
				}
			}
}
				for (int i=0; i<str.size(); i++){
			if (str[i]=='('){
				s2.push(str[i]);
			}
			if (str[i]==')'){
				if (!s2.empty()){
					s2.pop();
					counter1+=2;
					if (max2==counter1){
						maxnum2++;
					}
					if (counter1>max2){
						max2=counter1;
						maxnum2=1;
					}
				}
				else{
					counter1=0;
				}
			}
}
		if (max==max2 ){
			cout<<max<<" "<<maxnum;
			return 0;
		}
		if (max>max2){
			cout<<max2<<" "<<maxnum2;
		}
		else{
			cout<<max<<" "<<maxnum;
		}
		return 0;
	}
