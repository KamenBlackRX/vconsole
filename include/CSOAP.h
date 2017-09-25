/*
 * Vanilla brasil server SOAP C++ manager.
 * ALl rights is copyrighted to vanilla brasil server,
 * Soap Manager
 */

#include <iostream>
//Defined libs for Linux 
#ifdef __linux___
   #include <pthread.h>
   #include <sys/types.h>   // Types used in sys/socket.h and netinet/in.h
   #include <netinet/in.h>  // Internet domain address structures and functions
   #include <sys/socket.h>  // Structures and functions used for socket API
   #include <netdb.h>       // Used for domain/DNS hostname lookup
   #include <unistd.h>
   #include <stdlib.h>
   #include <errno.h>
#endif
//Defined libs for Windows
#ifdef WIN32
   #include <windows.h>
#endif

/**
 * Soap class
 * This class is used by hold all connection and works for SOAP.
 * is thread safte typed.
 */
class Soap
{
public:
    //Default ctor
    Soap();
    // Default dctor
    ~Soap();

    /**
     * Initalize SOAP with args
     * @param string host 
     * Name of host to be connected.
     * @param string user
     * Name of user used to connect to SOAP server.
     * @param string pass
     * Given pass for user to connect to SOAP server.
     * @param int port
     * Port used by socket function to connect to SOAP.
     */
    Soap(std::string host, std::string user, std::string pass, int port);


    void ConnectToServer(std::string host, std::string user, std::string pass, int port);
    void DisconnectFromServer();
    void* ConnectToServerAsync(std::string host, std::string user, std::string pass, int port);


private:
	void FreeMemory();
	void FreeSocket();

        typedef struct m_socket
	{
	   int port = 7878;
	   int socketHandle;
	   void gethostname (char** bufferchar* hostname, int MaxHostName = 256)
	   {
	   	
	   }
	}*SOCKET;

       
};

