#include "events.h"

namespace game
{

namespace events
{

namespace detail
{

void entity_caused_event::add_target_entity( ecs::entity_id id )
{
    m_entities.emplace_back( id );
}

const std::vector< ecs::entity_id >& entity_caused_event::get_entities() const noexcept
{
    return m_entities;
}

}// detail

}// components

}// ecs
