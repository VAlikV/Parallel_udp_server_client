cmake_minimum_required(VERSION 3.30.0)

set(PROJECT UDPServer_Client)

project(${PROJECT} VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)
# set(GCC_COVERAGE_COMPILE_FLAGS "-W -fexceptions -O2 -DNDEBUG -Dlinux")

find_package(Threads REQUIRED)

add_executable(${PROJECT}
    main.cpp
	udp_server.cpp		udp_server.hpp
)

target_link_libraries(${PROJECT} 
    Threads::Threads
)
