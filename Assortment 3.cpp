#include <stdio.h>    
     
main()
    
{    
 
    int arr[]={1,2,3,4,5};     
	   
    int length = sizeof(arr)/sizeof(arr[0]);    
	  
    int n=3;    
	  
    printf("Original array:\n"); 
	   
    for(int i=0;i<length;i++) 
	{     
        printf("%d",arr[i]);     
    }     
          
    for(i=0;i<n;i++)
	{          
        last = arr[length-1];    
        
        for(j = length-1;j>0;j--)
		{    
           arr[j] = arr[j-1];    
        }    
       
        arr[0] = last;    
    }    
        
    printf("\n");    
          
    printf("Array after right rotation: \n");
	    
    for(i=0;i<length;i++)
	{    
        printf("%d",arr[i]);    
    }    
      
}    

