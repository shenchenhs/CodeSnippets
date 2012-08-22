#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: void *的加减运算规则
 *  =====================================================================================
 */
int main ( int argc, char *argv[] ){
    int i = 3;
    int *p = &i;
    void *q = (void *)&i;
    printf("%d\n",(int)sizeof(void));
    printf("%p\n",p);
    printf("%p\n",p-1);
    printf("%p\n",q-1);
    return 0;

}		/* ----------  end of function main  ---------- */

