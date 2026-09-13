#include <iostream>
#include <string>
#include <vector>

struct ModCategory {
    std::string name;
    std::vector<std::string> entries;
};

int main() {
    const std::string trainerName = "Subnautica-2-Trainer";

    const std::vector<ModCategory> groups = {
        {"Movement Mods", {
            "No Clip Toggle",
            "Mount Speed Boost",
            "Fast Travel Anywhere",
            "Super Jump"
        }},
        {"Player Mods", {
            "No Fall Damage",
            "Infinite Stamina"
        }},
        {"Progress Mods", {
            "Add Skill Points",
            "Instant Cooldowns"
        }}
    };

    std::cout << "=== " << trainerName << " ===\n";
    std::cout << "Example build generated for Subnautica 2.\n\n";

    for (const auto& block : groups) {
        std::cout << "[" << block.name << "]\n";
        for (const auto& item : block.entries) {
            std::cout << "  - " << item << '\n';
        }
        std::cout << '\n';
    }

    std::cout << "Requirements:\n";
    std::cout << "  - .NET / VC++ runtime (installed on most systems)\n";
    std::cout << "  - Latest Subnautica 2 build\n";

    return 0;
}
