#include <stdio.h>

int main() {
	int T=0, c[10000000], N=0;
	int i=0, j=0;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
	    scanf("%d", &N);
	    for(int j=0; j<N; j++){
	        scanf("%d", &c[j]);
	    }
	    
	    
	    for(int j=0; j<N; j++){
	        if(c[j+1] - c[j] > 1){
	            printf("%d \n",j );
	            break;
	        }
	    }
	}
	return 0;
}
