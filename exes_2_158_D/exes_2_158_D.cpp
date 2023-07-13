
#include <iostream>
using namespace std;

int iqbal[78];
int i;
int n;
int awal;
int akhir;
int item;
int mid;

void input()
{
	cout << "Enter the number of elements in the array : ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "\nEnter array elements " << (i + 1) << ": ";
		cin >> iqbal[i];
	}
}

void binarySearch()
{
	cout << "\nEnter the element you want to search : ";
	cin >> i;

	awal = 0;
	akhir = n - 1;
	mid = (awal + akhir) / 2;
	while (awal <= akhir)
	{
		if (iqbal[mid] < i)
		{
			awal = mid + 1;
		}
		else if (iqbal[mid] == i)
		{
			cout << "\n" << i << " Found at position " << mid + 1 << "\n";
			break;
		}
		else {
			akhir = mid - 1;
		}
		mid = (awal + akhir) / 2;
	}
	if (awal > akhir)
	{
		cout << "\n" << i << " Not found in the array " << endl;
	}
}

int main()
{
	input();
	binarySearch();
}