// morechar.cpp -- char���� int���� ��
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';      // M�� �ش��ϴ� ASCII �ڵ带 char�� ���� ch�� ����
    int i = ch;         // ���� �ڵ带 int�� ���� i�� ����
    cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;
torch
    cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
    ch = ch + 1;        // ch�� �ִ� �����ڵ带 �����Ѵ�.
    i = ch;             // i�� ���ο� ���� �ڵ带 �����Ѵ�.
    cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

    // cout.put() ��� �Լ��� ����Ͽ� char�� ���� ch�� ����Ѵ�.
    cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
    cout.put(ch);

    // cout.put() �� ����Ͽ� ���� ����� ����Ѵ�.
    cout.put('!');

    cout << endl << "����" << endl;
    return 0;
}

// M�� ASCII �ڵ�� 77�Դϴ�.
// �� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�.
// N�� ASCII �ڵ�� 78�Դϴ�.
// cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: N!
// ����