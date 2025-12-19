#include "FileOutput.h"

void printMatrix(std::ofstream& f, Matrix& m, const char* title) {
    f << title << "\n";
    for (int i = 0; i < m.rows(); ++i) {
        for (int j = 0; j < m.cols(); ++j)
            f << m.at(i, j) << " ";
        f << "\n";
    }
    f << "\n";
}
