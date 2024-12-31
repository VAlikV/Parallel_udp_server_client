#include <iostream>

#include "udp_server.hpp"

int main()
{
    int a;
    double b = 5;

    server::UDPServer server("127.0.0.1", 8084, "127.0.0.1", 8081);

    server.start();

    while(1)
    {
        std::cin >> a; 
        server.setMsg(b);
    }

    server.stop();
}