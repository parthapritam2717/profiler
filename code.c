/***********************************All the external include files please write here********************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include "prime.h"
#include "profiler.h"

/**************************************************Includes ends here*************************************************/

/*******************************************All #defines please include here ******************************************/
#define nl() printf("\n");
#define os() printf(" ");
#define sf(n) scanf("%d",&n);
#define pf(n) printf("%d",n);

/*********************************************#defines ends here******************************************************/

/******************************All the global variables and structs should be declared here***************************/
unsigned long  timeStart,timeEnd;/* These variables are used to store the start user and kernel cpu time and calculate the cpu time we have spent on this block*/
unsigned long long cpuTimeStart,cpuTimeEnd;/*These variables are used to get the total cpu time betwwen the desired blocks and we will then calculate the percentage usage of the cpu during that block*/
long double cpuPercentage;// This will save the cpu usage percentage in the block





/***************************************Global variables declaration ends here***************************************/
bool is_prime(int item){	
	double y=(double)item;
	double x=sqrt(y);
	int i;
	int end=(int)x;
	for(i=2;i<(int)x;++i){
		if(item%i==0){
			return 0;
		}
		
	}
	return 1;

}
int count_prime(int *array,int s){
	int i=0,j=0;	
	for(i=0;i<s;++i){
		if(array[i]>=1 && is_prime(array[i])){
			j++;
		}
	}
	return j;
}

int main(){
	int n;
	do{
		sf(n);
		if(n==0)break;		
		int *array=(int *)malloc(sizeof(int)*n);
		int i;
		for(i=0;i<n;++i){
			sf(array[i]);
		}	
		int count=(count_prime(array,n));
		nl();			
		printf("num of primes=");
		pf(count);
		nl();		
		free(array);		
		nl();
	}while(n!=0);
	// will also send some packets but later
	
	return 0;
}
