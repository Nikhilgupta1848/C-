// prime or not
// 5%2=1 is prime  1%5 = 0 not prime ** 0 nhi anna chiye remainder mein
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 2;

    while(i < n){
        if( n % i == 0){
        cout << "not prime" << i<< endl;
    }
    else{
        cout << " Prime for " << i << endl;
    }
    i = i + 1;
}
}