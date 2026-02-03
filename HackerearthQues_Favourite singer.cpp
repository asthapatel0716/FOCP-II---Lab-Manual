#include<iostream>
int main(){
	int scode,max=0,N,count=0;
	int track[1000]={0};
	std::cin>>N;
	for(int i=0;i<N;i++){
		std::cin>>scode;
		track[scode]++;
		if(max<track[scode]){
			max=track[scode];
		}
	}
	for(int i=0;i<1000;i++){
    if(track[i]==max){
		count++;
	}
	}
	std::cout<<count;
	return 0;
}
