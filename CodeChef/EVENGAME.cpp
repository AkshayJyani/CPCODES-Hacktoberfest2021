/*
Code Chef 
Even sum
https://www.codechef.com/problems/EVENGAME
Solution
*/
#include <iostream>
using namespace std;

void solver(){
    int n;
    cin>>n;
    int temp,counter =0;
    while (n-->0){
        cin>>temp;
        if(temp&1)
        ++counter;
    }
    if(counter&1)
    cout<<2<<endl;
    else
    cout<<1<<endl;
    return;
}

int main() {
   int t =1;
   cin>>t;
   while(t-->0){
       solver();
   }
	return 0;
}