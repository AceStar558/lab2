#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cout<<"Введите кол-во элементов:";
	cin>>n;
	cin>>x;
	int a[n];
		cout<<"Введите числа:";
	for(int i=0; i<n; i++) {
		cin>>a[i];
		 if (a[i]==0)
            break;
		if (a[i] < 0)
            i++;
	}
	bool f = 0;
	for (int i=0; i<n; i++)
	{
		if (a[i]==x)
		{ f = 1; break;}
	}
	if (f==1) cout<<"найдено \n"; else cout<<"не найдено \n";
	return 0;
}