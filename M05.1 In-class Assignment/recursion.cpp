#include <iostream>

void stars(int x, char s){

    int i;

    for (i = 0; i < x; i++){
        std::cout << s;
    }

    std::cout << std::endl;

    if(i <= x){
        stars(x-1, s);
    }

    for(i; i>0; i--){
        std::cout << s;
        if (i <=0 ){
            stars(x + 1, s);
        }
    }
    std::cout << std::endl;
}

int main(){

    int x;
    char s;

    std::cout << "Please enter number of stars: " << std::endl;
    std::cin >> x;

   stars(x, '*');
}


#include <iostream>

using namespace std;

void printStars( int n, char s);
