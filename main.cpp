#include <iostream>

/*
* a program that uses the decreament operator
* in a loop state [ while ]
*/

int main(){
    int sum = 0, value = 10;
    while(value >= 1){
    std::cout << value << std::endl;
        sum += value;
        --value;
    }
    return 0;
}
