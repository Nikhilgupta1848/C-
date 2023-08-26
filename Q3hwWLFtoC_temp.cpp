#include<iostream>
using namespace std;

// farheniet to celsius  formula is {C = 5/9(F-32)}
int main(){
    
    float F;
    cin >> F;
    float C = (5.0/9) * (F-32);
    cout << F << " farheniet = " <<  C << "celsius" << endl;
    
    return 0;
}