#include <iostream>
#include <time.h>       /* time */

using namespace std;
int main()	{
	srand(time(NULL));
	int i = 0;
	while (i < 100){
	double random = (double(rand() % 101) / 100);
	i++;
	cout << random << endl;
}
	cin >> i;
}