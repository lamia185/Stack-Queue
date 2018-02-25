#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<string>str;
	string s;
	
	str.push("Lamia");
	str.push("robi");
	str.push("nasif");
	
	cout<<"Front element "<<str.front()<<endl;
	cout<<"Back element "<<str.back()<<endl;
	cout<<"Size "<<str.size();
	while(!str.empty()){
		s=str.front();
		cout<<s<<endl;
		str.pop();
	}
}
