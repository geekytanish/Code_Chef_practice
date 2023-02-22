#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i=i+1){
	    
	    int x;
	    int y;
	    
	    cin>>x;
	    cin>>y;
	    
	    if(y<=x){cout<<y*1<<endl;}
	    else{cout<<(x*1)+((y-x)*2)<<endl;}
	}
	return 0;
}
