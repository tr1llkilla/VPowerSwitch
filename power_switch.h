#pragma once

#include <httplib.h>

class PowerSwitch {
public:
    PowerSwitch();

    // Function to simulate device power state
    bool isDeviceOn() const;

    // Handler for the web interface
    void handleRequest(const httplib::Request& req, httplib::Response& res);

private:
    bool deviceOn;
};
