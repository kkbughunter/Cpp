#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "ababab";
	for(int i=0; i<s.size(); i++){
		s >>= 1;
		cout << s << endl;
	}

	return 0;
}