#include<iostream>
#include<math.h>
#define PI 3.1416
using namespace std;
int main()
{
    float side1, side2, ang1, area;

    cout << " \n\nFind the area of scalene triangle : \n";
    cout << " ------------------------------------\n";

    cout << " Input the length of a side of the triangle : ";
    cin >> side1;

    cout << " Input the another length of a side of the triangle : ";
    cin >> side2;

    cout << " Input the angle between these sides of the triangle : ";
    cin >> ang1;

    area = ( side1 * side2 * sin((PI/180) * ang1))/2;

    cout << " The area of the Scalene Triangle is : " << area << endl;
    cout << endl;

    return 0;
}
