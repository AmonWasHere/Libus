#BASE CONFIG
CMAKE_MINIMUM_REQUIRED(VERSION 3.20)
PROJECT(Libus
        VERSION 1.0.0
        LANGUAGES CXX
        )
#STANDARDS
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)

#FIREBASE
SET(FIREBASE_ROOT "$ENV{HOME}/Firebase/firebase_cpp_sdk")
SET(FIREBASE_INCLUDE_DIR "${FIREBASE_ROOT}/include")
SET(FIREBASE_LIB_DIR "${FIREBASE_ROOT}/libs/linux/x86_64/legacy")

ADD_LIBRARY(Libus STATIC
            src/Config.cpp
            src/Diagnostics.cpp
            src/AsciiArt.cpp
            src/Error.cpp
            src/LoginAuth.cpp
)
TARGET_INCLUDE_DIRECTORIES(Libus
            PUBLIC
              ${PROJECT_SOURCE_DIR}/include
              ${FIREBASE_INCLUDE_DIR}
)

ADD_EXECUTABLE(LibusApp
                main.cpp
              )
TARGET_LINK_LIBRARIES(LibusApp
    PRIVATE
        Libus

        ${FIREBASE_LIB_DIR}/libfirebase_app.a
        ${FIREBASE_LIB_DIR}/libfirebase_auth.a
        ${FIREBASE_LIB_DIR}/libfirebase_analytics.a
        ${FIREBASE_LIB_DIR}/libfirebase_messaging.a

        pthread
        dl
)
