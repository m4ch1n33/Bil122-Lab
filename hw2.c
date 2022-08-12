#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//*-
	
	
	FILE *p = fopen("robinson.txt" , "r");
	if(p == NULL){
		printf("file can not be opened r mode");
	}
	char word[50];
	
	printf("enter your word : ");
	scanf("%s" , word);
	
	
	char text[1000]; 
	
	
	while(!feof(p)){
		fgets(text , 1000 , p);
		
	}
	
	printf("%s\n" , text);
	
	
	 char * pointer =  strtok(text , " ");
	
	int counter = 0;
	while(pointer == NULL){
		
		if (strcmp(pointer , word) == 0 ){
			counter++;
		}
		
		pointer = strtok(NULL , " ");
		
	}
	
	printf("%d" , counter); 
	fclose(p);
	
	return 0;
}
