#include "../include/Error.hpp"
#include "../include/Config.hpp"

void RaiseError(){
    std::printf("An Error has been Occured");
    Libus::Initializers::SetCrashStatus();
}
