#include<stdio.h>
#include<conio.h>

int main(){
	int array[10],i,n;
	float rata,total;
	
	printf(" Program Menghitung Nilai rata-rata Menggunakan Array\n");
	printf(" Masukan banyaknya elemen array : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf(" Nilai ke-%d : ",i+1);
		scanf("%d",&array[i]);
		total = total+array[i];
		
	}
	
	rata = total/n;
	printf(" Hasil total adalah : %f\n",total);
	printf(" Hasil rata-rata adalah :%f\n",rata);
	
	return 0;
	
}
