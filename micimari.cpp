#include <iostream>
#include <cstring>

using namespace std;

#define MAX_N 200

int main()
{
	char s[MAX_N+1];

	cin.getline(s, MAX_N, '.');

	int n, i;

	n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i]-'a' + 'A';
		}
	}

	cout << s;

	return 0;
}
