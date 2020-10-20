#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream fp;
int n1, n2;
class lists
{
public:
	string l1[100], l2[100];
	void merge()
	{
		int i1 = 0, i2 = 0;
		while (i1 < n1 && i2 < n2)
		{
			if (l1[i1] == l2[i2])
			{
				cout << l1[i1++] << endl;
				i2++;
			}
			else if (l1[i1] < l2[i2])
				cout << l1[i1++] << endl;

			else if (l1[i1] > l2[i2])
				cout << l2[i2++] << endl;
		}
		if (i1 >= n1)
		{
			while (i2 < n2)
				cout << l2[i2++] << endl;
		}
		if (i2 >= n2)
		{
			while (i1 < n1)
				cout << l1[i1++] << endl;
		}
	}
};
int main()
{
	string name;
	string ele;
	lists list;

	fp.open("st1.txt", ios::out); //reading contents to file 1
	cout << "Enter the size list 1 : ";
	cin >> n1;
	cout << "Enter the list elements :" << endl;
	for (int i = 0; i < n1; i++)
	{
		cin >> ele;
		fp << ele << endl;
	}
	fp.close();

	fp.open("st2.txt", ios::out); //reading the contents of file 2
	cout << "Enter the size list 2: ";
	cin >> n2;

	cout << "Enter the list elements :" << endl;

	for (int i = 0; i < n2; i++)
	{
		cin >> ele;
		fp << ele << endl;
	}
	fp.close();

	fp.open("st1.txt", ios::in);
	int i = -1;
	while (fp)
	{
		getline(fp, name, '\n');
		list.l1[++i] = name;
	}
	fp.close();

	fp.open("st2.txt", ios::in);
	i = -1;
	while (fp)
	{
		getline(fp, name, '\n');
		list.l2[++i] = name;
	}
	fp.close();

	list.merge();
	return 0;
}
