#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void OutputsAnswer(int arr[], int size){
    
    //declaring temp and index
    int temp=0;
    int index=0;
    int num=0;
    //checking max occurance
    for(int i=0; i<size; i=i+1){
        int count=0;
        for(int j=0; j<size; j=j+1){
            if(arr[i]==arr[j]){count++;}
        }
        if(count>temp){temp=count;num=arr[i];}
    }
    
    //getting min steps
    int steps=0;
	for(int j=0; j<size; j=j+1){
	    if(arr[j]!=num){steps++;}
	    }
	    
	//output steps
    cout<<steps<<endl;
    
}  //returns index

int main() {
	int t;
	cin>>t;
	
	for( int i=0; i<t; i=i+1){
	    int n; //size of arr
	    cin>>n;
	    int arr[n];
	    
	    //input array 
	    for(int z=0; z<n; z=z+1){
	        cin>>arr[z];
	    }
	    OutputsAnswer(arr, n);
	}
	
	return 0;
}
