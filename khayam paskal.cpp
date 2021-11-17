#include<iostream>
using namespace std;

int main(){
	int a[100][100] = { {0} }, x;

	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;

	cout << "this app is for khayam paskal" << endl;
	cout << "enter row"<<endl;
	cin >> x;

	for (int i = 2; i < x; i++){
		a[i][0] = 1;
		for (int j = 1; j<i+1; j++){
			
			
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			
		}
		a[i][i] = 1;
	}
	int f = 0,k=0;
	for (int n = 0; n < x; n++){
		for (int m = 0; m < n + 1; m++){
			f = a[n][m];
		
			while(f>=1){
				k++;
				f=f / 10;
			}
			if (k == 1){ cout << a[n][m] << "     "; }
			if (k == 2){ cout << a[n][m] << "    "; }
			if (k == 3){ cout << a[n][m] << "   "; }
			if (k == 4){ cout << a[n][m] << "  "; }
			k = 0;
		}
		cout << endl;
	
	}







	system("pause");
	return 0;
}