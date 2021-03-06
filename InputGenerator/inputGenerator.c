
/*This program will generate me an input file for my testing code which 
given an array of integers count and display the total number of primes
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <time.h>

void writeNum2File(int n){
	FILE *fp=fopen("input.txt","a");
	fprintf(fp,"%d ",n);
	fclose(fp);
}
void writeNewLine(){
	FILE *fp=fopen("input.txt","a");
	fprintf(fp,"\n");
	fclose(fp);
}

void fileOverWrite(){
	FILE *fp=fopen("input.txt","w");
	fclose(fp);
}
int main(){
	fileOverWrite();
	int index=1000;
	srand ( time(NULL) );
	writeNum2File(index);
	writeNewLine();
	while(index>0){		
		int n = rand()%1000;
		if(n==0){
			n+=10;
		}
		// write n into the file
		writeNum2File(n);
		writeNewLine();
		while(n>0){
			int x=rand()%1000000000;
			if(x==0){
				x+=11;
			}
			writeNum2File(x);						
			--n;
		}
		writeNewLine();			
		--index;

	}	
	return 0;
}
