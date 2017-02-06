/**
	linuxSocket.h
	PhantomBot Project
	By: Robert F. (Phantom139)
**/

#if defined(PHANTOMBOT_LINUX)

	#ifndef PLATFORM_LINUX_SOCKET_H
	#define PLATFORM_LINUX_SOCKET_H

		class Socket : public GeneralSocket {
			public:
				Socket();
				virtual ~Socket();

				virtual bool create();
				virtual bool bind(const U32 port);
				virtual bool listen() const;
				virtual bool accept(Socket &s);
				virtual SocketReturnCode connect(UFC32 host, const U32 port);
				virtual bool close();
				virtual bool shutdown();
				virtual bool send(UFC32 message) const;
				virtual SocketReturnCode receive(U8 *buffer, S32 bufferSize, S32 *bytesRead) const;
				virtual void setNonBlocking(const bool status = true);
				virtual bool isValidSocket() const;

				//Callbacks
				virtual void onConnected();
				virtual void onConnectFailed();
				virtual void onSelfDisconnect();
				virtual void onServerDisconect();

			private:
				S32 sObj;
				sockaddr_in _mAddr;
		};

	#endif //PLATFORM_LINUX_SOCKET_H

#endif //PHANTOMBOT_LINUX