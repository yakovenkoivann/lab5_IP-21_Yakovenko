

#include <iostream>
#include <iomanip>
#include "figure.h"
#include "funFigure.h"

using namespace std;


int main() {
    int n, m;

    cout << "Enter a number of pyramids: ";
    cin >> n;
    cout << "Enter a number of cylinders: ";
    cin >> m;

    TPyramid* pyramids = new TPyramid[n];
    TCylinder* cylinders = new TCylinder[m];

    createPyramids(pyramids, n);
    printPyramids(pyramids, n);
    createCylinders(cylinders, m);
    printCylinders(cylinders, m);
    findMaxVCylinder(cylinders, m);
    findMinSPiramid(pyramids, n);

    return 0;
}