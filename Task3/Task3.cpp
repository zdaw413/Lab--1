#include <iostream>
using namespace std;

int main() {
    double width, height, area, tilesNeeded;

  
    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the height: ";
    cin >> height;

   
    area = width * height;
    cout << "The area is: " << area << endl;

    tilesNeeded = area / 0.25;
    cout << "The number of tiles needed is: " << tilesNeeded << endl;

    return 0;
}
