#include<stdio.h>

main()

{
    int arr[100], size, i;
    int s,p;
    
    printf("Enter size of the array :- ");
    scanf("%d",&size);

    printf("Enter elements in the array\n: ");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0;i<size;i++)
    {
        if(arr[i]>s)
        {
        
            p = s;
            s = arr[i];
        }
        else 
		   if(arr[i] >p && arr[i] <s)
        {
        
            p = arr[i];
        }
    }

    printf("Second largest = %d", p);

}

