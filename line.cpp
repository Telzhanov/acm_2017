#include <iostream>
#include <deque>
#include <vector>
using namespace std;
deque<string> split(string str){
	string word="";
	deque<string> v2;
	for (int i=0; i<str.size(); i++){
		if (str[i]=='/' && i==0){
			continue;
		}
		if (i==str.size()-1){
			word+=str[i];
			v2.push_back(word);
			break;
		}
		if (str[i]=='/' && i!=0){
			v2.push_back(word);
			word="";
		}
		else{
			word+=str[i];
		}
	}
	return v2;
}
int main()
{
	int n;
	int i=0;
	deque<string> files;
	cin>>n;
	string str;
	while(i<n){
		cin>>str;
		if (str=="pwd"){
				int size=files.size();
				deque <string> show;
				show=files;
				for (int i=0; i<size; i++){
						cout<<"/"<<show.front();
						show.pop_front();
					}
				
			cout<<"/"<<endl;
		}
		if (str=="cd"){
			string s4;
			cin>>s4;
			if (s4[0]=='/'){
				files.clear();
				deque<string> newfiles;
				newfiles=split(s4);
				int sz=newfiles.size();
				for (int i=0; i<sz; i++){
					if (newfiles.at(i)==".."){
						files.pop_back();
					}
					else{
						files.push_back(newfiles.at(i));
					}
				}
				
			}
			else{
				deque<string> newfiles;
				newfiles=split(s4);
				int sz=newfiles.size();
				for (int i=0; i<sz; i++){
					if (newfiles.at(i)==".."){
						files.pop_back();
					}
					else{
					files.push_back(newfiles.at(i));
					}
				}
			}
		}
		i++;
	}
	return 0;
}
