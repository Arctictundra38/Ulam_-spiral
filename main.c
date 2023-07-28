#include<stdio.h>
#include<stdbool.h>
int myPow(int a, int b);
bool toCheckifPrime(int a);

int main(){

char tab[100][100]; //1[] :up Or down 2[] : Right or LEFT in tab[][]
char prime_array[3000];

int X=49;
int Y=49;
int v=2;
int f=2;
int ny=0;//counter inside prime_array array

/*Initialize arays*/

for(int g=0;g<3000;g++){
	if(toCheckifPrime(g)==true){
		prime_array[g]='x';
	}	
	else prime_array[g]=' ';

}

for(int g=0;g<100;g++){
	for(int u=0;u<100;u++){
		tab[g][u]=' ';
	}

}
//Initialization of a spiral
tab[50][50]='o';
tab[49][49]='x';



/*Fill the tab draw the spiraL*/

for(int g=2;g<100;g++){
	if(g%2==0){
			
	if(myPow(-1,v)==-1){
		for(int i=X-1;i>=X+myPow(-1,v)*v;i--){
				tab[i][Y]=prime_array[ny]; 
				ny++;
			}
		}
	if(myPow(-1,v)==1){
		for(int h=X+1;h<=X+myPow(-1,v)*v;h++){
				tab[h][Y]=prime_array[ny];
				ny++;
			}
		}
			X=X+myPow(-1,v)*v;
			v++;
			
			
					}

	else{
			
			if(myPow(-1,f)==-1){
		for(int r=Y-1;r>=Y+myPow(-1,f)*f;r--){
				tab[X][r]=prime_array[ny];
				ny++;
			}
		}
		if(myPow(-1,f)==1){
			for(int w=Y+1;w<=Y+myPow(-1,f)*f;w++){
				tab[X][w]=prime_array[ny];
				ny++;
			}
			}
			Y=Y+myPow(-1,f)*f;
			f++;
					
			
					}
		
}


/*Display the tab*/
for(int l=0;l<100;l++){
   printf("\n");
	for(int u=0;u<100;u++){
		printf("%c", tab[l][u]);
		
	}
}
	
 return 0;

}


/*Function returns True is the integer input is a prime number, false otherwise integer >=0*/ 
bool toCheckifPrime(int a){
	bool outPut=true;
	int inter=0;
	for(int i=2;i<a;i++){
		inter=a%i;
		if(inter==0){
			outPut=false;
			break;
		}
		
	}
	return outPut;
}


int myPow(int a, int b){

	int number=1;
	for(int k=0;k<b;k++){
		number=number*a;
	}
	return number;
}

