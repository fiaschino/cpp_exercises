#ifndef PARTICLE_H
#define PARTICLE_H

class particle {
public:
    particle(int id);       // Constructor
    int getId() const;      // Getter

private:
    int id;
};

#endif
