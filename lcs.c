#include <stdio.h>



// i and j is the startign indices of these two array
// i ,j is initially 0
int max(int a,int b)
{
    return a>b ? a : b;
}

char A [3] = "bd0"; 
char B [5] = "abcd0";
    
int lcs(int i,int j)
{
    if(A[i]== 0 || B[j]==0)
    {
        return 0;
    }
    else if(A[i]==B[j])
    {
        return 1+lcs(i+1,j+1);
    }
    else
    {
        return max(lcs(i+1,j),lcs(i,j+1));              
    }
    
    
}

int main()
{

    
    printf("hellow world! \n");
    printf("The max matching case: %d \n",lcs(0,0));
    
    return 0;
}
