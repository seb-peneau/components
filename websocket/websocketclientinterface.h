#ifndef WebsocketClientInterface_h
#define WebsocketClientInterface_h

#include "Arduino.h"
#include "WebSockets.h"
#include "../debug/debugInterface.h"

class WebsocketClientInterface
{
  public:
    virtual void setup (DebugInterface* dI);
    virtual void loop ();
    virtual void connect(String ip, int port, String path);
    virtual void onEvent(std::function<void (WStype_t type, uint8_t *payload, size_t length)>);
    virtual void send(char *message);
};

#endif