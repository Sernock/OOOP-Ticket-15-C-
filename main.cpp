#include <fstream>
#include "Matrix.h"
#include "RandomFill.h"
#include "FileOutput.h"

int main() {
    Matrix A(3, 3);
    Matrix B(3, 3);

    fillRandom(A, 0, 9);
    fillRandom(B, 0, 9);

    Matrix S = A + B;
    Matrix M = A * 2;

    std::ofstream f("report.txt");
    printMatrix(f, A, "Matrix A:");
    printMatrix(f, B, "Matrix B:");
    printMatrix(f, S, "A + B:");
    printMatrix(f, M, "A * 2:");
    f << "A == B: " << (A == B ? "true" : "false") << "\n";

    return 0;
}
