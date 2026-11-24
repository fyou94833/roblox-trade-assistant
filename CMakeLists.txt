cmake_minimum_required(VERSION 3.16)
project(roblox-trade-assistant CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robloxtradeassistant
    src/main.cpp
    src/valuate.cpp
    src/history.cpp
)

target_include_directories(robloxtradeassistant PRIVATE include)

if(WIN32)
    target_link_libraries(robloxtradeassistant PRIVATE userenv)
endif()
