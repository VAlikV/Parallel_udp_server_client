#include <iostream>

#include "udp_server.hpp"

int main()
{
    int a; 
    Eigen::Array<double,7,1> b;
    b << 1, 2, 3, 4, 5, 6, 7;

    server::UDPServer<7,7> server("127.0.0.1", 8084, "127.0.0.1", 8081);

    server.start();

    while(1)
    {
        std::cin >> a; 
        server.setMsg(b);
    }

    server.stop();
}