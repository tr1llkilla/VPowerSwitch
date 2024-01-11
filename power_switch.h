/*
Copyright (C) 2024 tr1llkilla
    This program comes with ABSOLUTELY NO WARRANTY.
    This is free software, and you are welcome to redistribute it
    under legal conditions.
Author:
tr1llkilla

Author's note:
This program is unfinished, but does the trick to get the job done manually
Feel free to credit this work in any future projects!
*/
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
