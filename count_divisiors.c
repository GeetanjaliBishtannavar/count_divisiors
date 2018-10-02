    #include <stdio.h>
     
    int main(){
    	int l, r, k ,c=0, i;
    	scanf("%d %d %d", &l, &r, &k);
    	for (i=l; i<100000;i++)
    	{
    	    if(i>=l  && i<=r)
    	      {
    	          if(i%k==0)
    	          {
    	              c++;
    	          }
    	      }
    	}
    	printf("%d\n", c);       // Writing output to STDOUT
    }
