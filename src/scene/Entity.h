//
// Created by renan on 08/09/23.
//
#include <entt.hpp>

#ifndef GUNGI_CPP_ENTITY_H
#define GUNGI_CPP_ENTITY_H


class Entity {
public:
    operator bool() const {
        return m_Entity != entt::null;
    }
private:
    entt::entity m_Entity{ entt::null };
};


#endif //GUNGI_CPP_ENTITY_H
