#include<iostream>
using namespace std;


int main(){
	int x;



	cout << "this app is jadval zarb"<<endl;
	cout << "enter ta chand mykhay";
	cin >> x;

	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
			if (((i + 1)*(j + 1)) / 10 < 1){ cout << (i + 1)*(j + 1) << "   "; }
			else{
				cout << (i + 1)*(j + 1) << "  ";
			}
		}
		cout << endl;
	}












	system("pause");
	return 0;
}