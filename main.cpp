#include "include/config.hpp"
#include <iostream>
#include <unistd.h>

int main(){
    std::cout << "Libus Started";
    std::cout <<"Login";
    std::cout<<"Enter username";
    std::cin>>Libus::UserConfig::name;

    std::cout << "Enter password for " <<Libus::UserConfig::name;
    //disable terminal echo
    // pass it through a single way function and don't store it, just pass it to an hashin alg and auth it
    std::cin>>Libus::UserConfig::password;

    return 0;
}
