#include <iostream>
int main(){
    int sum = 0, val = 49;
    while (val <= 99){
        sum += val;
        ++val;
        std::cout << val << std::endl;
    }
    return 0;
}
