/**
    lib.h
    PhantomBot Project
    By: Robert F. (Phantom139)
    Built on Ubuntu 14.04.10 LTS
**/

#ifndef _LIB_H
#define _LIB_H

#include "../include.h"
#include "../Network/socket.h"

#define LIMIT_16 ((signed short)0x7FFF)

/*
Lib Class
 Collection of support and utility functions
*/
namespace Lib {
    //Create a socket and connect to specified instance
    Socket *createSocketAndConnect(const std::string addr, unsigned int port);
    //Fetch the current timestring
    std::string currentTime();
    //Write a log line
    void writeToLog(std::string logLocation, std::string message);
    //Format an incoming command line to strip out /r/n for proper output
    std::string formatForPrint(std::string incoming);
};


#endif //_LIB_H