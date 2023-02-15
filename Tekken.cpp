#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i=i+1){
	    int a; //anna
	    int b; //bob
	    int c; //claudio
	    
	    cin>>a;
	    cin>>b;
	    cin>>c;
        
	    int min2=min(b,c);
	    b=b-min2;
	    c=c-min2;
	    
	    int min1=min(a,b);
	    a=a-min1;
	    b=b-min1;
	    
	    int min3=min(a,c);
	    a=a-min3;
	    c=c-min3;

	    if(a>0){cout<<"Yes"<<endl;}
	    else{cout<<"No"<<endl;}
	 }
	return 0;
}
