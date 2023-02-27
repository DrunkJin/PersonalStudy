// divide.cpp -- Á¤¼ö ³ª´°¼À°ú ºÎµ¿¼Ò¼öÁ¡¼ö ³ª´°¼À
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Á¤¼ö ³ª´°¼À: 9/5 = " << 9 /5 << endl;          // int³ª´°¼À ¼öÇà
    cout << "ºÎµ¿ ¼Ò¼öÁ¡¼ö ³ª´°¼À: 9.0 / 5.0 = ";           // double ³ª´°¼À ¼öÇà
    cout << 9.0 / 5.0 << endl;                              
    cout << "È¥ÇÕ ³ª´°¼À: 9.0 / 5 = " << 9.0 / 5 << endl;   // double ¼öÇà
    cout << "doubleÇü »ó¼ö: 1e7 / 9.0 = ";                  // double tngod
    cout << 1e7 / 9.0 << endl;
    cout << "floatÇü »ó¼ö: 1e7f / 9.0f = ";                 // float ³ª´°¼À ¼öÇà
    cout << 1.e7f / 9.0f << endl;
    return 0;
}

// ±âº»ÀûÀ¸·Î ºÎµ¿¼Ò¼öÁ¡Àº double


// Á¤¼ö ³ª´°¼À: 9/5 = 1
// ºÎµ¿ ¼Ò¼öÁ¡¼ö ³ª´°¼À: 9.0 / 5.0 = 1.800000
// È¥ÇÕ ³ª´°¼À: 9.0 / 5 = 1.800000
// doubleÇü »ó¼ö: 1e7 / 9.0 = 1111111.111111
// floatÇü »ó¼ö: 1e7f / 9.0f = 1111111.125000