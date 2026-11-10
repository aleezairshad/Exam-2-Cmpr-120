
#include "input.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

// Display the main menu
void displayMenu()
{
    cout << "\n";
    cout << "       * * *                       *                  *.*.*.*.*.*.*\n";
    cout << "    *      ....*                  *.*               *.*.*.*.*.*.***\n";
    cout << "  *          ....*              *  ...*             *          .***\n";
    cout << " *            ....*            *   ....*            *          .***\n";
    cout << " *       1-S  ....*          *    4-T....*          *    6-H   .***\n";
    cout << " *            ....*         *      +  ....*         *          .***\n";
    cout << "  *          ....*        *    ++++++++++...*       *          .***\n";
    cout << "    *       ...*         *+++++++++++++++++++*      *`*`*`*`*`*`*\n";
    cout << "       * * *\n";
    cout << "      Sphere                  Tetrahedron             Hexahedron\n\n";

    cout << "       * *.*                    * *.*                    * * *\n";
    cout << "    *       *...*            *    ...*...*            *    .*.*.**\n";
    cout << "  *       ********         *     ***....*.*         *       .*.*.*.*\n";
    cout << " *       * *... *.*       *    *.....*.....*       *        ******* *\n";
    cout << " *     8-O.*.**...*       *    12-D..***...*       *     20-I*.*.*.**\n";
    cout << " *    *************       *    ...***.....**       *         ********\n";
    cout << "  *    *....*...**         *    *.....*...*         *      . .*.*.**\n";
    cout << "    *   *.*....*             *   *.....**.            *     *******\n";
    cout << "       * *.*                    * *.*                     *.*.*\n";
    cout << "      Octahedron              Dodecahedron              Icosahedron\n\n";

    cout << "CMPR120 Exam#2: functions and vectors By Prof Q (10/26/26)\n";
    cout << "==========================================================================================\n";

    cout << "        S. Sphere       - a perfectly round, geometric object defined as the set\n";
    cout << "                          of all points in space that are exactly the same\n";
    cout << "                          distance from a single fixed center point.\n";
    cout << "        T. Tetrahedron  - four triangular faces platonic object\n";
    cout << "        H. Hexahedron   - six square faces platonic object\n";
    cout << "        O. Octahedron   - eight triangular faces platonic object\n";
    cout << "        D. Dodecahedron - twelve pentagonal faces platonic object\n";
    cout << "        I. Icosahedron  - twenty triangular faces platonic object\n";

    cout << "------------------------------------------------------------------------------------------\n";
    cout << "        1. Read data from text file and store into appropriate shape vectors\n";
    cout << "        2. Select and output data from a specific shape vector\n";
    cout << "        3. Find the smallest and largest objects among the vectors\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << "        Q. quit\n";
    cout << "==========================================================================================\n";
    cout << "        Option: ";
}

int main()
{
    char option;

    do
    {
        displayMenu();
        cin >> option;

        option = toupper(option);

        switch (option)
        {
        case 'S':
            cout << "\nSphere selected.\n";
            break;

        case 'T':
            cout << "\nTetrahedron selected.\n";
            break;

        case 'H':
            cout << "\nHexahedron selected.\n";
            break;

        case 'O':
            cout << "\nOctahedron selected.\n";
            break;

        case 'D':
            cout << "\nDodecahedron selected.\n";
            break;

        case 'I':
            cout << "\nIcosahedron selected.\n";
            break;

        case '1':
            cout << "\nRead data from text file selected.\n";
            break;

        case '2':
            cout << "\nSelect and output shape data selected.\n";
            break;

        case '3':
            cout << "\nFind smallest and largest shapes selected.\n";
            break;

        case 'Q':
            cout << "\nGoodbye!\n";
            break;

        default:
            cout << "\nInvalid option. Please try again.\n";
        }

    } while (option != 'Q');

    return 0;
}