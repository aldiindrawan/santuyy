#include<iostream>

using namespace std;



int main(){

	int T,input2,count=0;

	string input1;

	

	cin>>T;

	for(int i=0; i<T; i++){

		cin>>input1;

		if(input1 == "donate"){

			cin>>input2;

			count += input2;

		}else if(input1 == "report"){

			cout<<count<<endl;;

		}

	}

	

}
