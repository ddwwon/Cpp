// ��ȯ���� �����̵� ��ȯ�� ������ �޴� ���
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;

	// RefReturnOne�� �ٸ��� �Ϲݺ����� �����ؼ� ��ȯ ���� �����ߴ�
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}