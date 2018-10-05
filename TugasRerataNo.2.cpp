#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int array[10],i,n,xt;
	float rata,total,sd,y;
	
	printf(" Program Menghitung Nilai rata-rata Menggunakan Array\n");
	printf(" Masukkan banyaknya elemen array : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf(" Nilai ke-%d : ",i+1);
		scanf("%d",&array[i]);
		total = total+array[i];
		
	}
	rata= xt/n;

    for (i=1;i<=n;i++)
    {
        y=y+((array[i]-rata)*(array[i]-rata));
    }
	
	rata = total/n;
	sd = sqrt((y)/(n-1));
	printf(" Hasil nilai total adalah : %.2f\n",total);
	printf(" Hasil rata-rata adalah   : %.2f\n",rata);
	printf(" Hasil standar deviasi    : %.2f\n",sd);
	
	return 0;
}
