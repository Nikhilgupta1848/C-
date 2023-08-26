#include<iostream>
// find the value of sum  from 1 to n ,when i is  1 to 5 and sum starts with zero
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1 ;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 1;


    }

    cout << "value of sum is " << sum<< endl;


}
// to verify the output use formula [sum = n/2(a+l)}