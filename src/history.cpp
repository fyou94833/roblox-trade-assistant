// history.cpp — part of roblox-trade-assistant.

#include "robloxtradeassistant/history.h"

#include <cstdio>

namespace robloxtradeassistant {

History::History(const std::string& config_path)
    : config_path_(config_path) {}

void History::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool History::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-trade-assistant] history: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxtradeassistant
