#include"prachi.h"

int main()
{	
    struct demo obj;
    int no  = 11;
    float radius = 30.6f;
    float area = pi * radius * radius ;
    
    IPTR ptr = &no;
    
    printf("value of no is : %d\n",*ptr);
    
    printf("area is : %f\n",area);

   return 0;
}

