#include <iostream>
using namespace std;

int main()
{
    int a;
    float x, y;

    cout << "اختر العملية:" << endl;
    cout << "1. جمع" << endl;
    cout << "2. طرح" << endl;
    cout << "3. ضرب" << endl;
    cout << "4. قسمة" << endl;
    cin >> a;

    cout << "أدخل الرقم الأول: ";
    cin >> x;
    cout << "أدخل الرقم الثاني: ";
    cin >> y;

    switch (a)
    {
    case 1:
        cout << "النتيجة: " << (x + y);
        break;
    case 2:
        cout << "النتيجة: " << (x - y);
        break;
    case 3:
        cout << "النتيجة: " << (x * y);
        break;
    case 4:
        if (y == 0)
            cout << "ما بقدر أقسم على صفر";
        else
            cout << "النتيجة: " << (x / y);
        break;
    default:
        cout << "خيار غير صالح";
    }

    return 0;
}