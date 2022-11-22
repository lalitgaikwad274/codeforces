#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(char a, char b){
	if(a == 'e' && b == 's'){
		return true;
	}
	else if(a == 'Y' && b == 'e'){
		return true;
	}
	else if(a == 's' && b == 'Y'){
		return true;
	}
	else{
		return false;
	}
}

void solve(){
	string s;
	cin >> s;
	int l = s.size();

	if( l == 1 && (s[0]=='Y' || s[0]=='e' || s[0]=='s')){
		cout << "YES\n";
		return;
	}
	else if(l == 1){
		cout << "NO\n";
		return;
	}

	for(int i=1; i<l; i++){
		if(!check(s[i-1] , s[i])){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";

}

int main(){

	ll testcase;
	cin >> testcase;

	while(testcase--){
		solve();
	}
}

