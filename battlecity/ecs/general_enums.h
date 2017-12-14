#ifndef GENERAL_ENUMS_H
#define GENERAL_ENUMS_H

namespace game
{

enum class tile_type{ wall, empty };
enum class tank_type{ player, enemy };
enum class movement_direction{ left, right, up, down, none };
enum class object_type{ tile, player_base, player_tank, enemy_tank, projectile };

}// game

#endif