#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, int temp)
{
	if (n == 1)
	{
        cout<<temp<<"\n";
		cout << "Move disk 1 from rod " << from_rod <<
							" to rod " << to_rod<<endl;
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, ++temp);
	cout << "Move disk " << n << " from rod " << from_rod <<
								" to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, ++temp);
}

// Driver code
int main()
{
	int n = 1; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B', 1); // A, B and C are names of rods
	return 0;
}

// This is code is contributed by rathbhupendra
