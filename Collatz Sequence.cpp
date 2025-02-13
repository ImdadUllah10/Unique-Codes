#include<iostream>
using namespace std;
int main( ){
int n;
cout<<"Enter your no:";
cin>>n;
while(n!=1){//cont until 1 
 if(n%2==0){
 	//divide by 2
 	n=-n/2;
 }else{
 	//odd
 	n=-n*3+1;	
 }
cout<<n<<" ";	
}
system("pause");
	return 0;
}
