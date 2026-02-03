#include<iostream>
int main(){
	int l,r,k,count=0;
	std::cin>>l>>r>>k;
	for(int i=l;i<=r;i++){
		if(i%k==0){
			count++;
		}
	}
	std::cout<<count;
	return 0;
}
