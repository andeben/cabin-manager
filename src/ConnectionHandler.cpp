/*
 * @file ConnectionHandler.hpp
 * @brief
 */

#include "ConnectionHandler.hpp"

#include <sys/socket.h>
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>

ConnectionHandler::ConnectionHandler()
{

}

ConnectionHandler::~ConnectionHandler()
{

}

void ConnectionHandler::Run()
{
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout << "Lift off!\n";
}
