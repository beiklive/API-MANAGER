#include <iostream>
#include <spdlog/spdlog.h>
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#include <httplib/httplib.h>
#include <nlohmann/json.hpp>

#define LISTEN_PORT 8018

std::string apps[]={
    "WebApp-PicBed"
};


void LogInit(){
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%l] [%s,%!] %v");
    SPDLOG_INFO("api manager started");
}

void HttpSer(){
    using namespace httplib;
    Server svr;
    svr.Get("/api", [](const Request& req, Response& res){
        res.set_content("Hello World!", "text/plain");
    });
    svr.listen("localhost", LISTEN_PORT);
}

int main(){
    LogInit();



    return 0;
}