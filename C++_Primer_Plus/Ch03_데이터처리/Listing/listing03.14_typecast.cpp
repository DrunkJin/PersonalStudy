// typecast.cpp -- 강제 데이터형 변환
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;      // 바다오리, 박쥐, 검둥오리

    // 다음 구문은 두 값을 double형으로 더한후에
    // 그 합을 int형으로 변환하여 대입한다.
    auks = 19.99 + 11.99;       

    // 다음 두 구문은 두 값을 int형으로 변환한 후에 더한다.
    bats = (int) 19.99 + (int) 11.99;       // 구식 C스타일
    coots = int (19.99) + int (11.99);      // 신식 C++스타일
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots <<endl;

    char ch = 'Z';
    cout << "CODE " << ch << "Value is ";    // char형으로 출력
    cout << int (ch) << endl;                // int형으로 출력
    cout << "Yes, CODE Z's value is ";
    cout << static_cast<int> (ch) <<endl;    // int형으로 출력
    return 0;
}

// 11.99 + 19.99 = 31.98인데 소수부를 버리니까 auks는 31
// 데이터변환자를 사용하면 소수부를 버리고 계산하여 19+11 = 30
// 정수모델링이 필요할때 좋음. 더한후 정수화랑 정수화한다음에 더하는거랑 차이가 생길수있음