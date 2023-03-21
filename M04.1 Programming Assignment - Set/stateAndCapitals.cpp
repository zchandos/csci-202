#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> stateAndCapitals = {
        {"Indiana", "Indianapolis"},
        //enter rest of states and capitals here
    };
    
    std::string state;
    std::cout << "Enter a state to see its capital: ";
    std::cin >> state;
    
    std::map<std::string, std::string>::const_iterator it = stateAndCapitals.find(state);
    if (it != stateAndCapitals.end()) {
        std::cout << "The capital of " << it->first << " is " << it->second << std::endl;
    } else {
        std::cout << "State not found." << std::endl;
    }
    
}