#include <stdio.h>
int output(int i)
{
    if(i>5)
    {
    return i;
}
printf("i=%d\n",i);
output(i+1);
}
int main()
{
    output(1);
}