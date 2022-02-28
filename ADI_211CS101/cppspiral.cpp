#include <iostream>

using std::cout;

int main(){
	
	int degree;
	std::cin >> degree;
	
	const int deg = degree;
	
	int ar[degree][degree] {};
	
	int x{0},y{0},k{1};
	
	for (; degree > 0; degree-=2){
		
		if (degree == 1){
			ar[x][y] = k;
			break;
		}
		
		for (int j = 0; j < degree -1 ;j++){
			ar[x][y] = k;
			k++;
			y++;
		}
		for (int j = 0; j < degree - 1;j++){
			ar[x][y] = k;
			k++;
			x++;
		}
		for (int j = 0 ;j < degree-1; j++){
			ar[x][y] = k;
			k++;
			y--;
		}
		for (int j =0; j < degree-1; j++){
			ar[x][y] = k;
			k++;
			if (j != degree-2) x--;
		}
		y++;
	}
	
	for (int i =0;i < deg; i++){
		for (int j =0; j < deg ; j++){
			deg > 3 ? ((ar[i][j] < 10) ? cout << ' ' <<ar[i][j] << '\t' : cout << ar[i][j] << '\t') : cout << ar[i][j] << '\t';
		}
		cout << "\n\n";
	}
	
	return 0;
}