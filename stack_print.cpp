#include<bits/stdc++.h>
#include<cstring>
#include<stack>
using namespace std;

int main(){
	stack<string>str;
	string s;
	
	str.push("Lamia");
	str.push("Robi");
	str.push("Nasif");
	
	cout<<"Print top element "<<str.top()<<endl;
	cout<<"Print size "<<str.size()<<endl;
	
	
	while(!str.empty()){
		s=str.top();
		cout<<s<<endl;
		str.pop();
	}
}
