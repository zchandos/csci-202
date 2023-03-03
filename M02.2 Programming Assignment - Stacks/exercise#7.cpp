#include <iostream>
#include <stack>
#include <math.h> 
using namespace std;

int main(){

    int numOfDigits;
    int number;

    int dec = 0;
    int count = 0;

    stack <int> myStack;

    cout << "How many digits long is your binary number?" << endl;
    cin >> numOfDigits;

    cout << "Please enter each digit of your binary number followed by a space" << endl;
    for ( int i = 1; i <= numOfDigits; i++){
        cin >> number;
        myStack.push(number);

    }

    while(!myStack.empty()){
        dec += myStack.top() * pow(2, count);
        count += 1;
        myStack.pop();
    }

    cout << "Your converted number is: " << dec << endl;

}

