// valuate — part of roblox-trade-assistant.

#pragma once

#include <string>
#include <vector>

namespace robloxtradeassistant {

class Valuate {
public:
    explicit Valuate(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robloxtradeassistant
