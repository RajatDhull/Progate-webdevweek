#include<unistd.h>
#include<stdio.h>

int main(int argc,char *argv[]){
	printf("Total arguments:\t%d\n",argc);
	//printf("%s\n%s\n%s\n",argv[0],argv[1],argv[2]);
	int i;
	for(i=0;i<argc;i++){
		printf("Argument no. %d: %s\n",i,argv[i]);
	}
}
