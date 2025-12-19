#include "RandomFill.h"
#include <random>

void fillRandom(Matrix& m, int min, int max) {
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> dist(min, max);

    for (auto it = m.begin(); it != m.end(); ++it)
        *it = dist(gen);
}
