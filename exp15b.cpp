

#include<iostream>
#include<string>
using namespace std;

string reves(string n){
   string st1=" ";
   for( int i=n.length()-1;i>=0;i--){
       st1 += n[i];
   }
    return st1;
   
}

int main(){
    string n;
    cout<<"Enter a string: ";
    cin>>n;
   
    cout<<"Reversed string is: "<<reves(n);
}
/* output
Enter a string: hello
Reversed string is:  olleh
*/
