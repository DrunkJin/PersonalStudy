// ourfunc.cpp -- 사용자가 작성하는 함수를 정의한다.
#include <iostream>
void simon(int);        // simon()을 위한 함수 원형

int main()
{
    using namespace std;
    simon(3);
    cout << "정수를 하나 고르시오: ";  // 개행 문자 endl를 넣어도 되지만 넣지 않아서 정수입력을 수월하게 받음
    int count;
    cin >> count;
    simon(count);       // simon() 함수를 다시 호출한다.
    cout << "끝!" << endl;
    return 0;
}

void simon(int n)       // simon() 함수를 정의한다.
{
    using namespace std;
    cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;
}                       // void형 함수에는 return 구문이 필요없다.

// void형 함수는 return값이 없기 때문에 
// simon(3) 처럼 단독으로 사용할 수는 있지만
// example = simon(3) 이렇게 사용할 수는 없다.
// using namespace std; 이걸 #include <iostream> 아래에 선언하면 이 파일에 있는 모든 함수 정의에 영향을 준다.
// 그러나 사용하는 함수에만 선언하는 것이 더 효율적이긴 함
// using namespace std;를 안쓰면 
// std::cout << "std 이름 공간의 cout과 endl을 사용" << std::endl;
// 위와같이 사용 가능