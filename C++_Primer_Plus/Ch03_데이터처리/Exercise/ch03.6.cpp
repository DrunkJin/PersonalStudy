// ch03.6.cpp
// 주행한 거리를 마일 단위로, 소비한 휘발유의 양을 갤런 단위로 묻고, 갤런당 마일 수를 보고하는 프로그램을 작성하라
// 또는 주행한 거리를 킬로미터 단위로, 
// 소비한 휘발유의 양을 리터 단위로 묻고, 유럽식으로 100킬로미터당 리터수를 보고하는 프로그램을 작성하라.

#include <iostream>
using namespace std;

int main()
{
    cout << "----Imperial System----" << endl;
    double distance, gas;

    cout << "Drive distance [mile] : ";
    cin >> distance;
    cout << "Consumed fuel [gal] : ";
    cin >> gas;
    cout << "Your fuel efficiency : " << distance / gas << " mile/gal" << endl << endl;

    cout << "----Metric System ----" << endl;
    cout << "Drive distance [km] : ";
    cin >> distance;
    cout << "Consumed fuel [L] : ";
    cin >> gas;
    cout << "Your fuel efficiency : " << gas / distance * 100 << " L/100km" << endl;
    return 0;
}

// ----Imperial System----
// Drive distance [mile] : 10
// Consumed fuel [gal] : 5
// Your fuel efficiency : 2 mile/gal

// ----Metric System ----
// Drive distance [km] : 300
// Consumed fuel [L] : 9000
// Your fuel efficiency : 3000 L/100km