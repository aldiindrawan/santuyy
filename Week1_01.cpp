#include <iostream>
using namespace std;

int main(){
	string kata;
	int i=1;
	do{
		cin>>kata;
		if(kata=="hajj"){
			cout<<"case "<<i<<" hajj-e-akbar"<<endl;
		}else if(kata=="umrah"){
			cout<<"case "<<i<<" hajj-e-asghar"<<endl;
		}
		i++;
	}while(kata!="*");
	return 0;
}
