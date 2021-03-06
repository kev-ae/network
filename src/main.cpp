#include <iostream>
#include <asio.hpp>
#include <asio/ts/buffer.hpp> //manage movement of memory for us
#include <asio/ts/internet.hpp> //network communication

int main() {
  asio::error_code ec;

  // create a context - platform for interface
  asio::io_context context;

  // get the address of somewhere to connect to
  asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.34", ec), 80);

  // create the socket, context will deliver the implementation
  asio::ip::tcp::socket socket(context);

  // tell socket to try and connect
  socket.connect(endpoint, ec);

  if(!ec) {
    std::cout << "Connected!" << std::endl;
  } else {
    std::cout << "Failed to connect to address:\n" << ec.message() << std::endl;
  }
  
  return 0;
}
