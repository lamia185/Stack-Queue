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
	
	cout<<str.top()<<endl;
	
	while(!str.empty()){
		s=str.top();
		cout<<s<<endl;
		str.pop();
	}
}
