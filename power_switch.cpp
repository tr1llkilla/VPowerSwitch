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
#include "power_switch.h"

PowerSwitch::PowerSwitch() : deviceOn(false) {}

bool PowerSwitch::isDeviceOn() const {
    return deviceOn;
}

void PowerSwitch::handleRequest(const httplib::Request& req, httplib::Response& res) {
    // Handle power switch requests
    if (req.method == "POST" && req.path == "/switch") {
        // Toggle device state
        deviceOn = !deviceOn;

        // Respond with the new device state
        res.set_content(deviceOn ? "Device is ON" : "Device is OFF", "text/plain");
    }
    else {
        // Handle other requests or serve HTML page
        // For simplicity, always respond with the current device state
        res.set_content(deviceOn ? "Device is ON" : "Device is OFF", "text/plain");
    }
}

