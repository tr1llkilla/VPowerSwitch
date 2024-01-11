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

int main() {
    // Create an instance of PowerSwitch
    PowerSwitch powerSwitch;

    // Create and configure the HTTP server
    httplib::Server server;

    // Set the request handler
    server.Post("/switch", [&](const httplib::Request& req, httplib::Response& res) {
        powerSwitch.handleRequest(req, res);
        });

    server.Get("/", [&](const httplib::Request& req, httplib::Response& res) {
        powerSwitch.handleRequest(req, res);
        });

    // Start the server on port 8080
    server.listen("localhost", 8080);

    return 0;
}
