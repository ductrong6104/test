#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int r;
	srand(time(0));
	for (int i = 0; i < 10000; i++)
	{
		r = rand()%10000+1;
		cout << "Rand " << i << " is " << r << endl;
	}
	return 0;
}