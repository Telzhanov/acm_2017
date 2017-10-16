	#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	stack<int> s2;
	stack<int> st;
	for (int i=0; i<n; i++)
	{
		int number;
		cin>>number;
		st.push(number);
	}
	int zero;
	cin>>zero;
	for (int i=0; i<n; i++){
		v.push_back(st.top());
		st.pop();
	}	
	for (int i=0; i<n; i++)
	{
		int maxi=*max_element(v.begin(),v.end());
		int pos;
		for (int i=0; i<n; i++){
			if (maxi==v[i]){
				pos=i;
				break;
			}
		}
		if (maxi!=v[0] && pos!=0)
		{
			s2.push(maxi);
			v.erase(v.begin()+pos);
		}
		
	}
	int sz=v.size();
	stack<int> final;
	for (int i=0; i<sz; i++){
		final.push(v[i]);
	}
	vector<int> final1;
	for (int i=0; i<sz; i++){
		final1.push_back(final.top());
		final.pop();
	}
	int sz2=s2.size();
	for (int i=0; i<sz2; i++){
		final1.push_back(s2.top());
		s2.pop();
	}
	for (int i=0; i<n; i++){
		if (i==n-1){
			continue;
		}
		if (final1[i]>final1[i+1]){
			cout<<"no";
			return 0;
		}
	
	}
	cout<<"yes";
	return 0;
	
}
