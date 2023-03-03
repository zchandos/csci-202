#include <string>
#include <iostream>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

int getPrecedence(char symbol){

    if (symbol == '+' || symbol == '-'){
        return 3;
    }
    else if (symbol == '/' || symbol == '*'){
        return 2;
    }
    else if (symbol == '^'){
        return 1;
    }
    else
    return -1;
}

void toPostFix(string s){


    stack<char> myStack;
    string result;

    for (int i = 0; i < s.length(); i++){
        char symbol = s[i];
    

    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9')){
        result += symbol;
    }
    else if (symbol == '('){
        myStack.push('(');
    }
    else if (symbol == ')'){
        while (myStack.top() != '('){
            result += myStack.top();
            myStack.pop();
        }
        myStack.pop();
    }
    else{
        while (!myStack.empty() && getPrecedence(s[i] <= getPrecedence(myStack.top()))){
            result += myStack.top();
            myStack.pop();
        }
        myStack.push(symbol);
    }
    }

    while (!myStack.empty()){
        result += myStack.top();
        myStack.pop();
    }

    cout << result << endl;
}

int main(){

    string expression1 = "A+B-C";
    string expression2 = "(A+B)*C";
    string expression3 = "(A+B)*(C- )";
    string expression4 = "A+((B+C)*(E-F)-G)/(H-I)";
    string expression5 = "A+B*(C+D)-E/F*G+H";
    

    cout << "Infix Expression: " << expression2 << " Postfix Expression: ";
    toPostFix(expression2);
    cout << endl;

}
