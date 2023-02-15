#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1; i<=t; i=i+1){
	    
	    int x; //speed of Jerry
	    int y; //speed of Tom
	    
	    cin>>x;
	    cin>>y;
	    
	    if(y>x){cout<<"Yes"<<endl;}
	    else{cout<<"No"<<endl;}
	}
	return 0;
}
