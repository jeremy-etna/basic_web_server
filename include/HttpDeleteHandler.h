#pragma once

#include "HttpRequestHandler.h"

class HttpDeleteHandler: public HttpRequestHandler
{
public:
    HttpDeleteHandler();
    virtual ~HttpDeleteHandler();

    void HandleRequest(
        const std::shared_ptr<ClientSocket>& client_socket,
        const std::shared_ptr<HttpData>& http_data
        ) override;

private:

};