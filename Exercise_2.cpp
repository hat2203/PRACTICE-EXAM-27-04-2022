# include <stdio.h>

void nhapMang(int ary[],int n){
	printf ("nhap mang:\n");
	for (int i=0;i<n;i++){
		scanf ("%d", &ary[i]);
	}
	
}

void xuatMang (int ary[],int n){
	printf ("xuat mang: \n");
	for (int i=0;i<n;i++){
		printf ("%5d",ary[i]);
	}
}


void reverseArray(int ary[], int n){

 for (int i=0;i<=n/2;i++){
  int temp;
  temp =ary[i];
  ary[i]=ary[n-i-1];
  ary[n-i-1]=temp;
 }
}

int main(){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	int ary[n];
	nhapMang(ary,n);
	xuatMang(ary,n);
	reverseArray(ary,n);
	 printf(" : is reverse of Integer Array ary[%d]  \n",n);
	
}

