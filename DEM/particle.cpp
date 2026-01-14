#include "particle.h"

particle::particle(int id) : id(id) {}

int particle::getId() const {
    return id;
}
