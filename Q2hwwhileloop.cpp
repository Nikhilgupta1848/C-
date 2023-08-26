// 1 to N find sum of all even no.s with n input

#include<iostream>
using namespace std;

int main()
{  
    int n;
    cin >> n;

   int i = 2;
    int sum = 0;

    while(i<=n){
        if(i % 2 == 0)
        sum = sum + i ;
        i = i + 1;
    }
    cout << "the value of sum from " << 1 << " to " << n << "="<< sum << endl;
    return 0;
}