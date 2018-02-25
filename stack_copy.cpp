#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
	stack<int>a;
	stack<int>b;
	
	int i;
	
	for(i=1;i<=5;i++)
	a.push(i);
	
	b=a;
	
	while(!b.empty()){
		int x=b.top();
		cout<<x<<endl;
		b.pop();
	}
}
