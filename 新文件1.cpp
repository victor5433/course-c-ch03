#include<stdio.h>
int main(void){
int grade,f;

scanf("%d",&grade);

f=grade/10;
//printf("%d ",grade);
switch	(f){
	
	case 9:
		
		printf("您的成績為A");
		break;
	case 8:
			
		
		printf("您的成績為B");
		break;
	case 7:
		
		printf("您的成績為C");
		break;	
	case 6:
		
		printf("您的成績為D");
		break;
			

	default:
		printf("您的成績為E");
		break;
	}
} 
