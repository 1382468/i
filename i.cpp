#include <iostream>
using namespace std;
int main(){
	int i=6,sum=0;
	while(i<=360){
		sum+=i;
		i+=6;
	}
	cout << sum;
}