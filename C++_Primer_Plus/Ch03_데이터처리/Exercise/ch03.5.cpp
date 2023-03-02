// ch03.5.cpp -- 세계 인구와 미국(또는 당신이 원하는 국가)의 현재 인구수를 요구하는 프로그램을 작성하라. 
// 작성한 정보를 long long형 변수에 저장하라. 
// 전 세계 인구에서 미국(또는 당신이 원하는 국가) 인구수가 차지하는 비중을 나타내 보아라. 
#include <iostream>
using namespace std;

int main()
{
    unsigned long long world, us;
    
    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> us;
    cout << "The population of the US is " << double (us) / double (world) * 100 << "% of the world population." << endl;
    return 0;
}

// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world population.