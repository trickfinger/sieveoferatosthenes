#include <stdio.h>
#include <math.h>

#define MAX 1000000

int main()
{
    unsigned int crivo[MAX];
    double num;
    int i, j, result;
	
        for(i=0;i<MAX;i++)
            scanf("%lf", num);

        crivo[MAX] = 0;
        aux = sqrt(num);
            aux = floor(aux);

        for(i=2;i<MAX;i++) {

            if(crivo[MAX] == 0)
                    crivo[MAX] = 1;

                for(j=i+i;j<MAX;j = j + i)
                            crivo[MAX] = 2;                        
        }
                    result = 0;
                    for(i=2;i<MAX;i++)
                        
                        if(crivo[MAX] == 1) 
                                result = result + i;

                                    printf("%d", result);

	return (0);
}
