#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LINE_LENGTH 1024
#define MAX_LINES 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int rand_exclude(int min,int max,int exclude){
	int num= rand() % (max - min);
	if (num>= exclude - min){
	 num++;
	}
		return num + min;
}
int main(int argc, char *argv[]) {
	
		FILE *Team;
		int i,d,team,count,min=0,exclude;
		char line[MAX_LINES][MAX_LINE_LENGTH];
		int usedIndices[MAX_LINES]={0};
		int totalLines=0;
	
         // O Hafta Mac Yapmayacak Takimin Secilmesi
		srand(time(NULL));     
	    d=rand()%19; 
	   exclude=d;
	    //Takimlarin Oldugu Dosyayi Acma Ve Kontrolu
	  Team=fopen("C:\\Users\\demir\\Desktop\\team\\Team.txt","r");
	   if(Team == NULL){
	    printf("File open unsuccesful\n"); }
	  else
	   {
	      //Dosyadaki Bilgileri Dizi Icerisine Alma	   	
	    	while (fgets(line[totalLines], MAX_LINE_LENGTH,Team))  {
	     		totalLines++;
		    if (totalLines >= MAX_LINES ) {
		    	break;
	     }
		  
	 }
	    int max=totalLines;
	     fclose(Team);
	    
		  //Takimlarin Yazilacak Dosyayi Acma Ve Kontrolu 
	     FILE *fikstur;
       fikstur=fopen("C:\\Users\\demir\\Desktop\\team\\Fikstur.txt","w");
	  if(fikstur == NULL){
	    printf("File open unsuccesful\n"); }
	  else
	    {
	     printf("Successfully written to file\n");
		
		if(totalLines == 0){
	     	fprintf(fikstur,"dosya bos\n");
	     	return 1;
		 }
		 
	  fprintf(fikstur,"Bu hafta mac yapmayan takim:%s \n",line[d]);
	  	//  Mac Yapmayacak Takimi Ayirarak Diger Takimlari Rastgele Yazdirma  
	  	for(count=0; count < totalLines-1; count++){
			int randomIndex;
	      do	{
			randomIndex=rand_exclude(min,max,exclude);
		}while(usedIndices[randomIndex]==1);
		
		
			usedIndices[randomIndex]=1;
			fprintf( fikstur,"%s",line[randomIndex]);
	           if((count+1)%2 !=0 ){
		 			fprintf(fikstur,"vs");}
		 		else{
				 	fprintf(fikstur,"\n"); }
		 }
	}
	fclose(fikstur);
	return 0;
   }
 }

