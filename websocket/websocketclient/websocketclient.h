#ifndef websocketclient_h
#define websocketclient_h

#include "../websocketclientinterface.h"
#include <WebSocketsClient.h>

class EspWebsocketClient : public WebsocketClientInterface {

  private:
    DebugInterface* debug;
    bool started = false;
    WebSocketsClient* websocketClient;

  public:
    EspWebsocketClient ();
    void setup (DebugInterface* dI);
    void loop ();
    void connect(String ip, int port, String path);
    void onEvent(WebSocketsClient::WebSocketClientEvent handler);
    void send(char *message);
};

#endif