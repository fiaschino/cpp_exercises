#include <iostream>
#include "particle.h"

int main() {
    particle p(1);  // Create a particle with ID 1
    std::cout << "particle ID: " << p.getId() << std::endl;
    return 0;
}
