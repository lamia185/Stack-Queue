#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
	queue<int>a;
	queue<int>b;

	int i;

	for(i=1;i<=5;i++)
	a.push(i);

	b=a;

	while(!b.empty()){
		int x=b.front();
		cout<<x<<endl;
		b.pop();
	}
}
