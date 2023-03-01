#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i=i+1){
	    int a;
	    int b;
	    
	    cin>>a>>b;
	    
	    int price_1=100-(a);
	    int price_2=200-(b*2);
	    
	    
	    if(price_1>price_2){cout<<"Second"<<endl;}
	    else if(price_2==price_1){cout<<"Both"<<endl;}
	    else{cout<<"First"<<endl;}
	}
	return 0;
}
