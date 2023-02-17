#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool primaCheck(long long int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

long long int prima(long long int x){
	long long int i=0,j=1;
	while(i!=x){
		j++;
		if(primaCheck(j)){
			i++;
		}
	}
	return j;
}

int main(){
    int x;
    printf("-------------------------------------\n");
    printf("     Mesin Mencari Bilangan Prima    \n");
    printf("-------------------------------------\n");
    printf("Masukan Angka: ");
    scanf("%d",&x);
    printf("---------------------------------------\n");
	printf("Bilangan prima ke-%d adalah %lld ",x, prima(x));
	return 0;
}
