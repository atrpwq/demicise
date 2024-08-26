#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum asciitable {NUL=0,DEL=127};
int count = 2;
void main(int argc, char **argv){
	char *flags = argv[1];
	if(strcmp(flags,"-d")==0){
		while(1){
			if(argv[count]!=NULL){
				for(int i=0;i<strlen(argv[count]);i++){
					printf(" %d",argv[count][i]);
				}
				count++;
			}
			else{
				printf("\n");
				break;
			}
		}
	}
	else if(strcmp(flags,"-a")==0){
		while(1){
			if(argv[count]!=NULL){
				printf("%c",atoi(argv[count]));
				count++;
			}
			else{
				printf("\n");
				break;
			}
		}
	}
	else{
		printf("No flags\n-d for ascii to decimal\n-a for decimal to ascii\n");
	}
}
