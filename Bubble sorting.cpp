#include<iostream>
using namespace std;


void buble(int dizi[],int boyut){
	int i,j,temp;
	
	for(i=0;i<boyut;i++){
		for(j = 0; j<(boyut-i-1);j++){
			if(dizi[j]>dizi[j+1]){
				temp = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = temp;
			}
		}
	}
	
}




int main(){
	int dizi[5]= {1,7,6,2,1};
	int boyut = sizeof(dizi)/sizeof(dizi[0]);
	
	buble(dizi,boyut);
	
	for(int i = 0; i < boyut; i++){
		cout<<dizi[i]<<" ";
	}
	
}
