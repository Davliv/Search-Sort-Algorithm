#include <iostream>

using namespace std;

int searchIndex(int arr[],int right,int search);
int main(){
	
	int arr[10]={2,5,6,10,15,19,24,29,36,39};
	int length=10;
	int numbertofind;
	cin>> numbertofind;
	
	int index=searchIndex(arr,length,numbertofind);
	if(index != -100){
	cout<< index<<endl;
	}
	else{
	cout<<"chka"<<endl;
	}
}


int searchIndex(int arr[],int right,int search){
	int centr=0;
	int left=0;
	while(true){
		centr=(left+right)/2;
		if(search==arr[centr]){
			return centr;
			
		}
		else if(search<arr[centr]){
			right=centr-1;
		}else{
			left=centr+1;
		}


	}

	return -100;
}
