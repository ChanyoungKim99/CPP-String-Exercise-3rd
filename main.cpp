#include <iostream>

int main()
{
	char myString1[255];
	char myString2[255]{};

	std::cout << "�ҹ��ڷ� �̷���� ���ܾ ���ּ���!" << std::endl;
	std::cin >> myString1;

	for (int i = 0; i < 255; i++)
	{
		myString2[i] = myString1[i] - 32;
		
		if (myString1[i + 1] == 0)
		{
			break;
		}
	}
	
	std::cout << "Result : " << myString2 << std::endl;
}