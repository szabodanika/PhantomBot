/**
    TwitchPing.cpp
    PhantomBot Project
    By: Robert F. (Phantom139)
    Built on Ubuntu 14.04.10 LTS
**/

#include "TwitchCommandProcess.h"

bool TwitchPing::Process(const std::string incoming) {
    cout << "BOT: Recieved PING request, responding..." << endl;
    Lib::writeToLog("PhantomBotLog.txt", "{Twitch} Recieved PING request, responding...");
	const std::string response = "PONG :tmi.twitch.tv";
	_tcl->PushCommand(response);
	return true;
}