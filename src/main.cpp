// main.cpp — entry point. Wires config and subsystems together.

#include "robloxtradeassistant/settings.h"
#include "robloxtradeassistant/valuate.h"
#include "robloxtradeassistant/history.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robloxtradeassistant::Settings settings = robloxtradeassistant::Settings::load_default();
    robloxtradeassistant::Valuate valuate(settings.store_path);
    robloxtradeassistant::History history(settings.store_path);
    std::fprintf(stderr, "[roblox-trade-assistant] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
