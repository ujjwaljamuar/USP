// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include <stdio.h>
void main(){
    int m = 10, n = 5;
    int *mp, *np;
    mp = &m;
    np = &n;
    *mp = *mp + *np;
    *np = *mp - *np;

    printf("%d %d \n%d %d\n", m, *mp, n, *np); /*line-1 */
}

/*
15 15
10 10

*/