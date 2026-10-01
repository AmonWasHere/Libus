#pragma once

#include <string>


namespace Libus::Initializers{

    void SetNetworkStatus(bool status);
    void SetLoginStatus();
    void SetCrashStatus();

    extern bool NetworkStatus ;

    extern bool LoginStatus ;
    extern bool CrashStatus ;
}
namespace Libus::BaseConfig{
    inline constexpr int MAX_CHARACTER_COUNT =260;
}
namespace Libus::UserConfig{
    extern std::string name;
    extern std::string mail;
    extern std::string password;
}
