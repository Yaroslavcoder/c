#include <iostream>

using namespace std;

/* int main() // first
{
   cout << "****************" << endl;
    cout << "*      *       *" << endl;
    cout << "****************" << endl;
    cout << endl;

    cout << "* * *" << endl;
    cout << "*****" << endl;
    cout << "* * *" << endl;
    cout << endl;

    cout << "            *" << endl;
    cout << "           ***" << endl;
    cout << "          *****" << endl;
    cout << "         *******" << endl;
    cout << "            *" << endl;
    cout << "            *" << endl;
    return 0;
}*/
/*
int main()
{
    int currentYear = 2026;


    string name1 = "Ivanenko Vasyl";
    char gender1 = 'M';
    int birthYear1 = 2006;
    float height1 = 155.5;
    int age1 = currentYear - birthYear1;


    string name2 = "Petrenko Olena";
    char gender2 = 'F';
    int birthYear2 = 2007;
    float height2 = 168.2;
    int age2 = currentYear - birthYear2;

    cout << "Student 1:" << endl;
    cout << "Name: " << name1 << endl;
    cout << "Gender: " << gender1 << endl;
    cout << "Birth year: " << birthYear1 << endl;
    cout << "Height: " << height1 << " cm" << endl;
    cout << "Age: " << age1 << " years" << endl;
    cout << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << name2 << endl;
    cout << "Gender: " << gender2 << endl;
    cout << "Birth year: " << birthYear2 << endl;
    cout << "Height: " << height2 << " cm" << endl;
    cout << "Age: " << age2 << " years" << endl;

    return 0;
}
*/
int main()
{
    double a, b, h;

    double triBase, triHeight;

    cout << "Enter trapezoid base a: ";
    cin >> a;

    cout << "Enter trapezoid base b: ";
    cin >> b;

    cout << "Enter trapezoid height h: ";
    cin >> h;

    cout << "Enter triangle base: ";
    cin >> triBase;

    cout << "Enter triangle height: ";
    cin >> triHeight;

    double trapezoidArea = (a + b) / 2 * h;
    double triangleArea = 0.5 * triBase * triHeight;

    double shadedArea = trapezoidArea - triangleArea;

    cout << "Shaded area = " << shadedArea << endl;

    return 0;
}

int main()
{
    double a, x, y;
    double b = 2.1;
    double result;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    result = (a * cos(b) - sqrt(b)) / (1 + a * a * pow(b, 4))
           - (abs(x) + y + 3) / (1 + abs(x - y));

    cout << "Result = " << result << endl;

    return 0;
}
