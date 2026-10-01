#pragma once
#include <string>
namespace Libus::Initializers{
    extern bool LoginStatus = false;
    extern bool CrashStatus = false;
}
namespace Libus::BaseConfig{
    inline constexpr int MAX_CHARACTER_COUNT =260;
}
namespace Libus::UserConfig{
    extern std::string name;
    extern std::string mail;
    extern std::string password;
}
