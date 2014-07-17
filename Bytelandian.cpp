#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::map;
map <long long, long long> m;
#define max(a,b) (a>b)? a:b;

long long f(long long x){
	if(x==0)
	return x;
	long long t=m[x];
	if(t==0){
		long long d= max(x,(f(x/2) + f(x/3) + f(x/4)));
		m[x]=d;
	}
	return m[x];
}
int main(){
	long long int x;
	while(cin>>x){
		cout<<f(x)<<'\n';
	}
	return 0;
}
