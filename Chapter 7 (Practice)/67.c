/* Create  an array of 10 numbers. Verify using  pointer arthemtic that
 (ptr+2) points to the third (3rd) element where ptr is a pointer pointing
  to the first  element of an array */

  #include <stdio.h> 
  
  int main()
  {
    int arr[10];
    int *ptr=arr;
    ptr = ptr+2;
    if (ptr==&arr[2])
    {
        printf("These point to the same location \n");
    }
    
    else
    {
        printf("These do not point to the same location");
    }
    
      return 0;
  }