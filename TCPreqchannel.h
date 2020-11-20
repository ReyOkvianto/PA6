
#ifndef _TCPreqchannel_H_
#define _TCPreqchannel_H_

#include "common.h"
#include <sys/socket.h>
#include <netdb.h>

class TCPRequestChannel
{
//public:
	// enum Side {SERVER_SIDE, CLIENT_SIDE};
	// enum Mode {READ_MODE, WRITE_MODE};
	
private:
	/*  The current implementation uses named pipes. */
	
	
	// string my_name;
	// Side my_side;
	
	// int wfd;
	// int rfd;
	
	int sockfd;

	// string pipe1, pipe2;
	// int open_pipe(string _pipe_name, int mode);
	
public:
	TCPRequestChannel(const string host, const string port);

	TCPRequestChannel(int);

	~TCPRequestChannel();
	/* Destructor of the local copy of the bus. By default, the Server Side deletes any IPC 
	 mechanisms associated with the channel. */


	int cread(void* msgbuf, int bufcapacity);
	
	int cwrite(void *msgbuf , int msglen);

	int getfd();
	
};

#endif
