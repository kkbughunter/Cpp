#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int res = 0;
	
	for(int i=1; i<=3; i++){
		res = (res * 10) + i;
		cout << res << " ";
	}

	cout << endl << "Result: " << res << endl;
	return 0;
}