
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int ord[n+1];
	for(int i=1;i<=n;++i)	cin>>ord[i];
	for(int i=1;i<=m;++i)	next_permutation(ord+1,ord+1+n);
	for(int i=1;i<n;++i)	cout<<ord[i]<<' ';
	cout<<ord[n];
}