// valuate.cpp — part of roblox-trade-assistant.

#include "robloxtradeassistant/valuate.h"

#include <cstdio>

namespace robloxtradeassistant {

Valuate::Valuate(const std::string& config_path)
    : config_path_(config_path) {}

void Valuate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Valuate::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-trade-assistant] valuate: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxtradeassistant
