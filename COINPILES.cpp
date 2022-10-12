#include"bits/stdc++.h"
using namespace std;
int min(int a,int b){
    if(a>b){ 
        return b;
    }
    return a;
}
int max(int a,int b){
    if(a>b){ 
        return a;
    }
    return b;
}

int main(){
	int t;
	cin>>t;
	while(t--){ 
        int x,y;
        cin>>x>>y;
        if(((x+y)%3==0) && (2*min(x,y)>=max(x,y)))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        
}
