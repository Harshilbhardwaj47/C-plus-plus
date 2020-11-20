#include<iostream>
using namespace std;
int main()
{
	int array[1000000];
	int numbmer_input;
	cin >> numbmer_input;
	for(int i=0;i<numbmer_input;i++){
		cin >> array[i];
	}
	for (int i = numbmer_input-1; i >= 0; i--) {
		cout << array[i]<<"\r";
	}
}
