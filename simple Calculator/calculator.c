#include <stdio.h>

int main(void) 
{
	int option;
	while (1)
	{
        printf("-------------------------------------\n");
		printf("Mathematical operation,enter 1\n");
        printf("QUIT, enter 2\n");
        printf("-------------------------------------\n");
        scanf("%d",&option);
        switch(option)
        {
        	case 1:
        	    printf("please enter two numbers\n");
                float x,y;
                scanf("%f",&x);
                scanf("%f",&y);
                printf("please enter the operation\n");
                char operation;
                scanf(" %c",&operation);
                float result;
                switch(operation)
                      {
                        	case '+':
    	                         result = x + y;
    	                         printf("Result = %f\n",result);
    	                         break;
    	    
                         	case '-':
    	                         result = x - y;
    	                         printf("Result = %f\n",result);
    	                         break;
    	    
    	                    case '/':
                                 if(y == 0) 
                                 {
                                    printf("you cannot divided by zero\n");
                                    break;

                                 }//end of if
                                 else
                                 {


    	                         result = x/y;
    	                         printf("Result = %f\n",result);
    	                         break;
                                 }//end of else
    	   
    	                    case '*':
    	                         result = x*y;
    	                         printf("Result = %f\n",result);
    	                         break;
    	
    	                    default:
    	                         printf("please enter operations like +, -, /, *\n");
    	                         break;
                      }//end of second switch
    
        	   case 2:
                  return 0;
        	
                 }//end of first switch
           
            
	}//end of while true
    
    
	return 0;
}//end of main
