#include<iostream>
using namespace std;
int funPrime(int n)
{
	for(int i = 2 ; i < n;i++)
        {
		if(n % i == 0){
		return 0;
		}
        }
return 1;
} 
int main(){
cout<<"Enter an number: ";
int n;
cin>>n;
if(funPrime(n)==1){
cout<<"The Number "<<n<<" is Prime";
}
else{
cout<<"The Number "<<n<<" is Not Prime";
}