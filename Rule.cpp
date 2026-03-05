#include <iostream>
using namespace std;

int main() {

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    int lastDigit = num % 10;
    int lastTwo = num % 100;

    if(lastDigit == 0 && lastTwo % 4 == 0)
        cout<<num<<" is divisible by 20";
    else
        cout<<num<<" is not divisible by 20";

    return 0;
}
