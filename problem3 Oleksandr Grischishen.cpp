#include <stdio.h>

int main()
{

    int a;
    printf("Type day of the week: \n");
    
    printf("Number of the day: ");
    scanf("%d",&a);
   
   switch(a) 
   {
	    case 1: 
	       printf("\n %d , Monday",a);
	       break;
	       
    	case 2: 
	       printf("\n %d , Tuesday",a);
           break;

	    case 3: 
	       printf("\n %d , Wednesday",a);
           break;
           
	    case 4: 
	       printf("\n %d , Thursday",a);
		   break;
		   		   
	    case 5: 
	       printf("\n %d , Friday",a);
		   break;
		   		   	       
	    case 6: 
	       printf("\n %d , Saturday",a);
	       break;
	       
	    case 7: 
	       printf("\n %d , Sunday",a);	       
           break;
           
        default:
		    printf("\n Invalid input");         
   }
   
   return 0;
}
