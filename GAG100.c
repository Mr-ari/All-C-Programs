#include <stdio.h>
#include<string.h>

int main() {
	char str1[100],str2[100],final[100];
	int T,i,j,k;
	
	scanf("%d",&T);
	printf("\n");
	while(T--){
	    scanf("%s",str1);
	    
	    scanf("%s",str2);
	    
	    int n=0,x=0;
	    for(i=0;i<strlen(str1);i++){
	        for(j=0;j<strlen(str2);j++){
	           if(str1[i]!=str2[j]){
	               n++;
	               if(n==strlen(str2)){
	               final[x]=str1[i];    
	               x++;
	           }
	           
	        }
	    }
	    n=0;
	}
	
	
	    for(i=0;i<strlen(str2);i++){
	        for(j=0;j<strlen(str1);j++){
	           if(str2[i]!=str1[j]){
	               n++;
	               if(n==strlen(str1)){
	               final[x]=str2[i];    
	               x++;
	           }
	           
	        }
	    }
	    n=0;
	}
	
	for (i = 0; i <= x; i++) {
      for (j = i + 1; j <= x;) {
         if (final[j] == final[i]) {
            for (k = j; k <= x; k++) {
               final[k] = final[k + 1];
            }
            x--;
         } else
            j++;
      }
   }

   for (i = 0; i < x; i++) {
      printf("%c", final[i]);
   }
	
	
}
return 0;
}
	
