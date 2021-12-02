// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

void main(){
    int m = 25, n = 77;
    char c = '*';
    int *itemp;
    //describe the errors in each of the following statements.
    m = &n;                // m is not a pointer
    itemp = m;
    *itemp = c;
    *itemp = &c;

}