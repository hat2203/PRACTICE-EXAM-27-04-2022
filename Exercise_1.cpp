# include <stdio.h>
int main(){
	
	int n;
	float S;
	S=0;
	do{
	printf ("nhap n: ");
	scanf ("%d",&n);
		
		if (n<=0){
			printf ("so can nhap phai lon hon hoac bang 1\n");
		}
	}while (n<=0);
	
	for (int i=1 ; i<=n ; i++){
		S = S + 1.0/i;
	}
	
	printf ("ket qua cua phep tinh la: %2f",S);
	
}
