#include <iostream>
#include <algorithm> 
#include <stack>
#include <vector>
using namespace std;
int main()
{
	int n;
	int k[100000];
	string book[100000];
	vector<string> v1;
	vector<int> v;
	cin>>n;
	for (int i=0; i<n; i++){
		int l;
		cin>>l;
		if (l<0)
		{
			k[i]=l;
		}
		else{
			k[i]=l;
			cin>>book[i];
		}
	}
	int counter=0;
	for (int i=0; i<n; i++){
		if (k[i]>0){
			v.push_back(k[i]);
			v1.push_back(book[i]);
		}
		if (k[i]<0){
			int min=*min_element(v.begin(),v.end());
			int sz=v.size();
			for (int j=sz-1; j>=0; j--){
				if (v[j]!=min){
					v.pop_back();
					v1.pop_back();
					counter++;
				}
				else{
					cout<<counter<<" "<<v1[j]<<endl;
					v.pop_back();
					v1.pop_back();
					counter=0;
					break;
				}
			}
		}
	}
	return 0;
}
