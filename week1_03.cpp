#include<iostream>

#include<string.h>

using namespace std;



void check(string P){

	if(P.length() == 3){

		if((P[0] == 'o' && P[1] == 'n') || (P[1] == 'n' && P[2] == 'e') || (P[0] == 'o' && P[2] == 'e')){

			cout<<1<<endl;

		}else if((P[0] == 't' && P[1] == 'w') || (P[1] == 'w' && P[2] == 'o') || (P[0] == 't' && P[2] == 'o')){

			cout<<2<<endl;

		}

	}else if(P.length() == 5){

		if((P[0] == 't' && P[1] == 'h' && P[2] == 'r' && P[3] == 'e') || (P[1] == 'h' && P[2] == 'r' && P[3] == 'e' && P[4] == 'e')

		|| (P[0] == 't' && P[2] == 'r' && P[3] == 'e' && P[4] == 'e') || (P[0] == 't' && P[1] == 'h' && P[3] == 'e' && P[4] == 'e')

		|| (P[0] == 't' && P[1] == 'h' && P[2] == 'r' && P[4] == 'e')){

			cout<<3<<endl;	

		}

	}

}



int main(){

	int T;

	char LittleBrother[10];

	

	cin>>T;

	for(int i=0; i<T; i++){

		cin>>LittleBrother;

		check(LittleBrother);

	}

}
