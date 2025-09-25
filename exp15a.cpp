

#include<iostream>
using namespace std;

int sum(int n){
    if(n<=1)
    return 1;
   
    else return (n + sum(n-1));
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   
    cout<<"Summation of numbers till "<<n<<" is: "<<sum(n);
}
/* output
Enter number: 10
Summation of numbers till 10 is: 55
*/
