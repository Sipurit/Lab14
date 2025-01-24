#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i=0; i<N-1; i++){
		// while(d[i+1]>d[i]){ 
			for(int j=i; j>=0 ;j--){
				while(d[j+1] > d[j]){
					T temp = d[j];
					d[j] = d[j+1];
					d[j+1] = temp;
				}
			}
		// }
		cout << "Pass " << i+1 << ":";
			for(int j = 0; j < N; j++) cout << d[j] << " ";
			cout << "\n";
		// while(d[i+1]>d[i]){
		// 	T temp = d[j];
		// 	d[j] = d[j+1];
		// 	d[j+1] = temp;
		// }
	}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
