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
        
        if(x+y>6){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
	return 0;
}
