/*
 * NİSA ZUHAL KAÇAN
 * ZAR OYUNU 
 * 
*/
 /*
 #include <stdio.h>
 #include <stdlib.h>
 */
 
 int main(){
	 int computer=0;  /*bilgisayarın toplam puanı*/
	
	 int user=0; /*user toplam puan*/
	 int zar,turSkoru;
	 
	
	
	
int zarat,zarat2;
printf("Zar atmak icin 1'e basin: ");
scanf("%d",&zarat);
srand(time(NULL)); // Zamana bağlı olarak sayı üreten kod.
if(zarat==1){
 zar=1+rand()%6;
    printf("%d geldi",zar);
}

else
return 0;

 
 
 
 

	 
	 
	 while (100>=user && 100>=computer){
     while(turSkoru+computer<100 && turSkoru<25){
		zar=rand()%6 +1;
		
		
		if(1!=zar){
			turSkoru+=zar;
		}
		else{
			turSkoru=0;
			break;
		}
	}
}
	computer+=turSkoru;
	if(computer<100){
		int done=0;
		turSkoru=0;
		while(!done){
			zar=rand()%6 +1;
			  
			  printf("zar: %d\n devam etmek istiyor musunuz?");
			   scanf("%d",&done);
			   
			   if(1!=zar) {
				   
				   turSkoru +=zar;
				   printf("devam etmek için 0 devam etmek için 1'e basınız.");
				   scanf("%d",&done);
			   }else {
				   turSkoru=0;
				   break;
			   }
		   }
		   }
		   computer+=turSkoru;
		   
		   return 0;
	   }	 
 
 
