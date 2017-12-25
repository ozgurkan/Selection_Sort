#include<stdio.h>
#include<stdlib.h>
void Selection_Sort(int *dizi,int);



int main(){
	
	//int dizi[20]={3,6,0,8,9,1,5,7,4,2,10,18,19,11,14,15,13,12,17,16};	
	int elemansayisi, i, *dizi;

    	printf("Eleman sayısını giriniz: ");
   	scanf("%d", &elemansayisi);

    	dizi = (int*) malloc(elemansayisi * sizeof(int));  //memory allocated using malloc
    	if(dizi == NULL)
	{
        	printf("Dizi oluşturulamadı.");
        	exit(0);
    	}

    
    	for(i = 0; i < elemansayisi; ++i)
    	{
		printf("Dizinin %d. elemanını giriniz: ",i+1);
        	scanf("%d", dizi + i);        
    	}

    	Selection_Sort(dizi,elemansayisi);
    	free(dizi);		
return 0;
}


void Selection_Sort(int* dizi,int elemansayisi){
	int i,j,min,temp;
	printf("  Girilen Dizi:		\n");
	for(i=0;i<elemansayisi;i++){
		printf("%d--",dizi[i]);
	}	
	
	//Diziyi sıralama işlemi
	for(i=0;i<elemansayisi;i++){
		min=dizi[i];
		for(j=i+1;j<elemansayisi;j++){
			if(dizi[j]<min){
				min=dizi[j];			
				temp=dizi[i];
				dizi[i]=min;
				dizi[j]=temp;
			}
		}		
	}

	printf("\n  Sıralı Dizi:		\n");
	for(i=0;i<elemansayisi;i++){
		printf("%d--",dizi[i]);
	}

printf("\n");

}
