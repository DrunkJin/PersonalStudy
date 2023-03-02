// ch03.7.cpp
// 휘발유 소비량을 유럽식(100km 당 리터 수)로 묻고, 미국식(1 gal 당 마일 수)으로 변환하는 프로그램을 작성하라. 
// 두 방식은 측정 단위가 서로 다를뿐 아니라, 미국식(거리/연료)은 유럽식(연료/거리)의 역수이다.
// 여기서 100 km = 62.14 mile이고, 1 gal = 3.875 L 이다. 
// 그러므로 19 mpg(miles per gallon) = 약 12.4L/100km 이고, 27mpg = 약 8.7 L/100km 이다.

#include <iostream>
using namespace std;

int main()
{   
    const double GAL_PER_L = 1 / 3.875;
    const double MILE_PER_KM = 62.14 / 100;
    double gas;
    double distance = 100;
    cout << "Fuel efficiency in European style [L/100km] : ";
    cin >> gas;
    cout << "Your efficiency in American style [mile/gal] : ";
    cout << (distance * MILE_PER_KM) / (gas * GAL_PER_L) << endl;
    return 0;
}

// Fuel efficiency in European style [L/100km] : 8.7
// Your efficiency in American style [mile/gal] : 27.6773