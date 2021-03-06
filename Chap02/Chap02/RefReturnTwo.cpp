// 반환형은 참조이되 반환은 변수로 받는 경우
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

	// RefReturnOne과 다르게 일반변수를 선언해서 반환 값을 저장했다
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}