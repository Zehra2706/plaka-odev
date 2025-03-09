

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 1024

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *plate;
	int lineNumber;
    char line[MAX_LINE_LENGTH];
    int currentLine = 1; 
    printf("Please enter your license plate code\n");
	scanf("%d",&lineNumber);
	  plate=fopen("C:\\Users\\demir\\Desktop\\C dili ile Sehir Plakalari\\plaka.txt.txt","r");
	  if(plate == NULL){
	    printf("File open unsuccesful\n"); }
	  else
	    while (fgets(line, MAX_LINE_LENGTH,plate)) {
        if (currentLine == lineNumber) {
            printf("%s",line);
            
        }
       currentLine++;
    }
      if(lineNumber == 61 ||lineNumber == 8 || lineNumber == 28 ||lineNumber == 29 || lineNumber ==52 || lineNumber ==53 ||lineNumber ==69)
	  {
        printf("Dogu Karadeniz Bolgesinde Yer Alir.");  }
	
	  if(!(lineNumber<81)){
	  	 printf("Wrong code entered");
	  }
      
	fclose(plate);
	return 0;
}

