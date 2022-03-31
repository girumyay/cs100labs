#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect;
    rect.set_width(3);
    rect.set_height(4);

    rect1.set_width(4);
    rect1.set_height(2);

    cout << "Rectangle 1 area: " << rect.area() << endl;
    cout << "Rectangle 2 area: " << rect1.area() << endl;

    return 0;
}

