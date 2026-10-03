#include<stdlib.h>
int compare(const void *a,const void *b)
{   int x=*(const int*)a;
    int y=*(const int*)b;
    return (x>y)-(x<y);
}
bool containsDuplicate(int* a, int n) {
    qsort(a,n,sizeof(int),compare);
    for(int i=0;i<n-1;i++)
        if(a[i]==a[i+1])
            return true;
    return false;

}