#ifndef GENERAL_ENUMS_H
#define GENERAL_ENUMS_H

#include <chrono>

namespace game
{

enum class tile_type{ wall, iron_wall, empty };
enum class alignment{ player, enemy };
enum class movement_direction{ left, right, up, down, none };
enum class has_infinite_lifes{ yes, no };
enum class animation_type{ explosion, respawn, shield };
enum class powerup_type{ shield };
enum class object_type{ tile,
                        player_base,
                        player_tank,
                        enemy_tank,
                        projectile,
                        respawn_point,
                        frag,
                        animation,
                        power_up,
                        none };

struct animation_data
{
    std::chrono::milliseconds duration;
    uint32_t frame_num;
    uint32_t frame_rate;
    uint32_t loops;
};

}// game

#endif
