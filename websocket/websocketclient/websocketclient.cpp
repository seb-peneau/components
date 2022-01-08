#include "websocketclient.h"

EspWebsocketClient::EspWebsocketClient() {}

void EspWebsocketClient::setup(DebugInterface* di) {
    debug = di;
    websocketClient = new WebSocketsClient();
}

void EspWebsocketClient::loop() {
    websocketClient->loop();
}

void EspWebsocketClient::connect(String ip, int port, String path) {
    debug->debug("Connecting to ip");
    websocketClient->begin(ip, port, path);
}

void EspWebsocketClient::onEvent(WebSocketsClient::WebSocketClientEvent handler) {
    websocketClient->onEvent(handler);
}

void EspWebsocketClient::send(char *message) {
    websocketClient->sendTXT(message);
}
