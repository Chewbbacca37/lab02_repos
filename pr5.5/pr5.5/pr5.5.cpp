#include <iostream>
#include <iomanip>

using namespace std;

int f(int const n, int level,int &depth)
{
	if (level > depth)
		depth = level;
	cout << " level = " << level << endl;

	if (n / 10 != 0)
		return n % 10 + f(n / 10, level + 1, depth);
	else
		return n % 10; 

		
	

}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	
	int depth = 0;
	int level = 1;

	cout << "\nresult = " <<  f(n, level, depth) << endl;
	
    cout << "\ndepth = " << depth << endl;
	

	return 0;
}

