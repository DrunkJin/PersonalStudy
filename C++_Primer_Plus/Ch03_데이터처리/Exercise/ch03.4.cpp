// ch03.4.cpp -- 초 수를 정수 값(long 또는 long long형 이용)으로 요청하고, 
// 그에 상응하는 시간을 일, 시, 분, 초로 출력하는 프로그램을 작성하라. 
// 1일의 시간, 분, 초는 기호 상수를 사용하여 표현하라. 

#include <iostream>

using namespace std;
int main()
{
    const int HOUR = 24;
    const int MINUTE = 60;
    const int SECOND = 60;
    unsigned long time;

    cout << "Enter the number of seconds: ";
    cin >> time;

    int days = time / (HOUR * MINUTE * SECOND);
    int hours = (time - (days * HOUR * MINUTE * SECOND)) / (MINUTE * SECOND);
    int minutes = (time - (days * HOUR * MINUTE * SECOND) - (hours * MINUTE * SECOND)) / SECOND;
    int seconds = time - (days * HOUR * MINUTE * SECOND) - (hours * MINUTE * SECOND) - (minutes * SECOND);

    cout << time << " seconds = " << days << " days, ";
    cout << hours << " hours, " << minutes << " minutes, ";
    cout << seconds << " seconds" << endl;
    return 0;
}

// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds