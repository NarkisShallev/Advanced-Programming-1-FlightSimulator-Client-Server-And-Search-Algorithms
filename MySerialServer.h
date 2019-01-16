#ifndef PROJECT2_MYSERIALSERVER_H
#define PROJECT2_MYSERIALSERVER_H

#include "AbstractServer.h"

using namespace server_side;

/**
 * Serial Server - Server who can deal with one client at a time
 */
class MySerialServer : public AbstractServer {
public:
    //opens the server
    virtual void open(int port, ClientHandler *clientHandler);
};

#endif //PROJECT2_MYSERIALSERVER_H
