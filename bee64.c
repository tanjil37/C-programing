#include <stdio.h>
  int main()
  {
  	float x,avg_plus;
  	int sum=0,i;
  	for(i=0; i<6; i++){
  		scanf ("%f", &x);
  		if(x>0){
  			sum = sum + 1;
  			avg_plus = avg_plus + x;
  			}
  		}
   		printf("%d valores positivos\n", sum);
   		printf("%.1f\n", avg_plus/sum);
   		return 0;
  }
