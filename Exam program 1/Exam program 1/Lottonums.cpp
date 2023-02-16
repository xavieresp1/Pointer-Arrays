#include <iostream>

using namespace std;

bool Linearsearch(int *, int, int);

int main()
{
	int winnum, size = 10;
	int *lPtr = nullptr;
	bool win = false;
	int luckynums[] = { 13579,26791,26792,33445,55555,62483,77777,79422,85647,93121 };
	cout << "These are the numbers you entered\n";
	for (int i = 0; i < size; i++)
	{
		cout << luckynums[i] << endl;
	}
	lPtr = luckynums;
	cout << "What is this weeks winning 5 digit number? \n";
	cin >> winnum;
	win = Linearsearch(lPtr,winnum, size);
	if (win == true)
	{
		cout << "You've won!\n";
	}
	else
	{
		cout << "You lost!\n";
	}
	system("pause");
	return 0;

}
bool Linearsearch(int * lPtr,int winnum, int size)
{
	int index = 0;
	bool f = false;

	while (index < size && !f)
	{
		if (lPtr[index] == winnum)
		{
			f = true;
		}
		else
		{
			index++;
			f = false;
		}
	}
	return f;
}
