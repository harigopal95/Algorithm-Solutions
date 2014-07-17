#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	if(t<10001){
	double y=0.0;
	double x;
	while(t--){
	cin>>x;
	if(x==1 || x==0){
		cout<<"1"<<endl;
	}
	else{
		// Stirling's formula approximation  !! 
		// Dimitry Kamentsky proved this formula .. No for which this test fails -- 6561101970383
	y = (( x + 0.5)*log(x) -x + 0.9189385332)/log(10);
	long long z= static_cast<long long>(y+1);
	cout<<z<<endl;
     }
    }
    }
	return 0;
}
