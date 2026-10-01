#include "../include/Config.hpp"


namespace Libus::UserConfig{
    std::string name;
    std::string password;
    std::string mail;
}
namespace Libus::Initializers{
    bool CrashStatus = false;
}
void Crash(){
    Libus::Initializers::CrashStatus = true;
}
