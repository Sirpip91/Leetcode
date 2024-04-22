#include <bits/stdc++.h>
using namespace std;

//Algorithm: example n = 36
//if (36%4 == 0) true;
//	if((36/4) != 4) true;

	//the logic is 
	//1 * 36
	//2 * 16
	//3 * 12
	//4 * 8
	//6 * 6 -------- sqrt(36) = 6
	//8 * 4
	//12 * 3
	//16 * 2
	//36 * 1
	//
//so we only check up until the sqrt of n, but we check both sides.
// 11 is prime so 
// 1 * 11 true cnt == 2
// 

//Determine if a number is prime.
int main()
{	
	int n;

	cin >> n;
	int cnt = 0;
	//Time complexity O(sqrt(n))
	for(int i = 1; i*i<=n; i++)
	{
		if(n%i == 0)//if we find a divisor!
		{
			cnt++;// count it.
			if((n/i) != i)//then check the higher end of divisor
			{
				cnt++;//count it.
			}
		}
	}
	//check if prime. a number is prime if only have 2 divisors.
	if(cnt == 2) cout<< "true" << endl;
	else cout << "false"<< endl;
    return 0;

}
