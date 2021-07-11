#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("---------------Welcome to Kaun Banega Crorepati---------------\n");
	printf("---------------Developed by AMULYA ABHINANDAN-----------------\n");
	printf("!!!!! Deviyyon aur Sajjano, Toh Chaliye Hum aur Aap milke shuru krte hai iss adbhut khel ko... !!!!!\n\n");
	int i,n;
	int result=0,ch,c=0;
printf("Are You Ready!!!! Press 1 to Start = ");
scanf("%d",&i);
printf("\n\n");

for(ch=1; ch<=15; ch++){
	c++;
	switch(ch)
	{
		case 1:printf("%d) Which of the following methods can be used to find the largest and smallest number in a linked list?\n",c);
		printf("1.Recursion\n");
		printf("2.Iteration\n");
		printf("3.Both Recursion and iteration\n");
		printf("4.Impossible to find the largest and smallest numbers\n");
		printf("\nSelect answer from above question = ");
		scanf("%d",&n);
		printf("\n");
		if(n==3){
		    printf("Woohoo... It's a Correct Answer\n\n\n");
			result=result + 10000;
		}
		else{
		    printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
			ch=16;
		}
		break;
	case 2:printf("%d) Which of the following lines should be inserted to complete the above code?\n",c);
	printf("1. temp > min_num\n");
	printf("2. val > min_min\n");
	printf("3. temp->val < min_num\n");
	printf("4. temp->val > min_num\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
	    printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;
	}
	break;
		case  3:printf("%d) Which of the following language is the predecessor to C Programming Language?\n",c);
	printf("1.A\n");
	printf("2.B\n");
	printf("3.BCPL\n");
	printf("4.C++\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
	    printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case  4:printf("%d) C programming language was developed by\n",c);
	printf("1.Peter Norton\n");
	printf("2. Dennis Ritchie\n");
	printf("3.Ken Thompson\n");
	printf("4.Bill Gates\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{
	    printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 5:printf("%d) C was developed in the year ___\n",c);
	printf("1. 1970\n");
	printf("2. 1972\n");
	printf("3. 1950\n");
	printf("4. 1845\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{ 
	    printf("Woohoo... It's a Correct Answer\n\n\n");
	    result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 6:printf("%d) If you want to exchange two rows in a two-dimensional array, the fastest way is to:\n",c);
	printf("1. Exchange the elements of the 2rows\n");
	printf("2. Exchange the address of each element in the two-row\n");
	printf("3. Silence the address of the rows in an array of the pointer and exchange the pointer\n");
	printf("4. None of these.\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 7:printf("%d) If you want to exchange two rows in a two-dimensional array, the fastest way is to:\n",c);
	printf("1. Exchange the elements of the 2rows\n");
	printf("2. Exchange the address of each element in the two-row\n");
	printf("3. Both of above\n");
	printf("4.Silence the address of the rows in an array of the pointer and exchange the pointer\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==4)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 8:printf("%d) C is a ___ language\n",c);
	printf("1.Low level\n");
	printf("2.Machine level\n");
	printf("3.High level\n");
	printf("4.Mid level\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==4)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 9:printf("%d) Which of the following is a Scalar Data type\n",c);
	printf("1. Float\n");
	printf("2.Array\n");
	printf("3.Union\n");
	printf("4.Pointer\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 10:printf("%d) What is the valid range of numbers for int type of data?\n",c);
	printf("1. 0 to 256\n");
	printf("2. -32768 to +32767\n");
	printf("3.-65536 to +65536\n");
	printf("4.No specific range\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 11:printf("%d) The associativity of ! operator is\n",c);
	printf("1.Right to Left\n");
	printf("2.Left to Right\n");
	printf("3.for Arithmetic and (b) for Relational\n");
	printf("4.(a) for Relational and (b) for Arithmetic\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 12:printf("%d) Operators have precedence. Precedence determines which operator is\n",c);
	printf("1. faster\n");
	printf("2. takes less memory\n");
	printf("3. evaluated first\n");
	printf("4. takes no arguments\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	if(n==3)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 13:printf("%d) Which of the following statements is true?\n",c);
	printf("1. C Library functions provide I/O facilities\n");
	printf("2. C inherent I/O facilities\n");
	printf("3. C doesn’t have I/O facilities\n");
	printf("4. Both (a) and (c)\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 14:printf("%d) Which pair of functions below are used for single character I/O.\n",c);
	printf("1. Getchar() and putchar()\n");
	printf("2. Scanf() and printf()\n");
	printf("3. Input() and output()\n");
	printf("4. None of these\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		printf("Woohoo... It's a Correct Answer\n\n\n");
		result = result + 10000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
		case 15:printf("%d) Which of the following is charecter oriented console I/O function?\n",c);
	printf("1. getchar() and putchar()\n");
	printf("2. gets() and puts()\n");
	printf("3. scanf() and printf()\n");
	printf("4. fgets() and fputs()\n");
	printf("\nSelect answer from above question = ");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		printf("Woohoo... It's a Correct Answer\n");
		printf("Congralutions... You Won the game... Kaun Banega Crorepati ...\n\n\n");
		result = result + 9860000;
	}
	else
	{
	printf("Oops... It's a Wrong Answer... Better Luck Next Time...\n");
	ch=16;	
	}
	break;
	
default :printf("case is %d is not exist",ch);
break;
		
	}
    
}
printf("\nThe amount you Win = Rs.%d",result);
return 0;
}
