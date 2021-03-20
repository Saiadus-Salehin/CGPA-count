#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

int main()
{
	double a[10], b[10], Tg = 0, Tc = 0, s[10], Result = 0;
	int i, n;


	cout << "Total Subject:\n";
	cin >> n;
	
		
	for (i = 1; i <= n; i++)
	{
		cout << "Subject " << i << " Grade:" << "\n";
		cin >> a[i];
	}

	cout << "\n";
	
	for (i = 1; i <= n; i++)
	{
			cout << "Subject " << i << " Credit:" << "\n";
			cin >> b[i];
	}
	
	for (i = 1; i <= n; i++)
	{
		Tc += b[i];
		s[i]= a[i]*b[i];
		Tg += s[i];
	}
	
	Result = Tg / Tc;

	cout << "\n";
	cout << "#################\n";
	cout << "# Result=" << Result<<" #\n";
	cout << "#################\n";
	
	return 0;
}