#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=1; i<=t; i=i+1){
	    int x;
	    int y;
	    int z;
	    
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    
	    int total_passengers=10*x;
	    
	    if(total_passengers==y || total_passengers>y){cout<<y*z<<endl;}
	    else{cout<<total_passengers*z<<endl;}
	}
	return 0;
}
