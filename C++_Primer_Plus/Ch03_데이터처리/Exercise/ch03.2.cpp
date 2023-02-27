// ch03.2.cpp -- 키를 피트와 인치 단위로 묻고 체중을 파운드 단위로 묻는 프로그램작성
// 세개의 변수로 저장
// BMI를 계산하여 보고해야함. 여러 환산인수를 위해 기호 상수를 사용할 것

#include <iostream>

using namespace std;

int main()
{   
    const int feet_to_inch = 12;
    const double inch_to_meter = 0.0254, pound_to_kg = 2.2;
    
    int height_feet, height_inch;
    double weight;
    cout << "당신의 키에서 피트 부분만 입력해주세요. " ;
    cin >> height_feet;
    cout << "당신의 키에서 인치 부분만 입력해주세요. ";
    cin >> height_inch;
    cout << "당신의 몸무게(파운드)를 입력해주세요. ";
    cin >> weight;
    
    double height_meter = (height_feet * feet_to_inch + height_inch) * inch_to_meter;
    double weight_kg = (weight/pound_to_kg);
    cout << "당신의 BMI는 ";
    cout << weight_kg / height_meter * height_meter;
    cout << "입니다." << endl;
    return 0;
}
