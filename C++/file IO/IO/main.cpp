#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    // this program is writting data in file
 /*   ofstream outputFile;
    outputFile.open("demofile.txt");


    cout << "writing data to the File:\n" << endl;
    outputFile << "Ali\n";
    outputFile << "Ahmad\n";
    outputFile << "Adeel\n";
    outputFile << "Ameen\n";

    outputFile.close();
    cout << "done" <<endl;*/

// This program gets data from file and displays on  the screen
 /*   ifstream inputFile;
    const char Size=20;
    char name[Size];
    inputFile.open("demofile.txt");
    cout << "Reading Data from the file:\n";
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile.close();
    cout << "done:\n";
*/
// This program gets dimensions of rectangle and calculate area for 5 reactangle
 /*   ifstream inFile;
    inFile.open("dimensions.txt");
    int length ,width , Area;
    cout << "Reading dimensions for of 5 rectangles from file.\n" ;

    inFile >> length;
    inFile >> width;
    Area= length * width;
    cout << "Area of the rectangle is " << Area << endl;

    inFile >> length;
    inFile >> width;
    Area= length * width;
    cout << "Area of the rectangle is " << Area << endl;

    inFile >> length;
    inFile >> width;
    Area= length * width;
    cout << "Area of the rectangle is " << Area << endl;

    inFile >> length;
    inFile >> width;
    Area= length * width;
    cout << "Area of the rectangle is " << Area << endl;

    inFile >> length;
    inFile >> width;
    Area= length * width;
    cout << "Area of the rectangle is " << Area << endl;

    inFile.close();
*/
    return 0;
}
