#include<iostream>
#include<string>
using namespace std;


int main(){
	int x,y=1;
string s;


	cout << "this app is for number of  words input " << endl;
	cout << "enter your string"<<endl;
	getline(cin,  s);
	x = s.size();
	for (int i = 1; i < x; i++){
		if (s[i] == ' '){
			y++;
			while (s[i + 1] == ' '){
				i++;
			}
		}
	}

	cout << y;



	system("pause");
	return 0;
}