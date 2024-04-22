#include <bits/stdc++.h>
using namespace std;

//finding the GCD of two values.
int main()
{
	
	//Time complexity Olog5(min(a,b))
	int a = 0;
	int b = 0;

	cin >> a >> b;
	//while they are greater than 0
	while(a > 0 && b > 0)
	{
		//get the larger value and divide (get remainder of the other)
		if(a>b)
			a = a % b;
		else
			b = b % a;
		
	}
		//check which value is a 0 and the other value will be 0!
		if(a == 0)
			cout << b;
		else
			cout << a;
    return 0;

}
