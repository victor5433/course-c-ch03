#include<stdio.h>
int main(void){
int grade,f;

scanf("%d",&grade);

f=grade/10;
//printf("%d ",grade);
switch	(f){
	
	case 9:
		
		printf("�z�����Z��A");
		break;
	case 8:
			
		
		printf("�z�����Z��B");
		break;
	case 7:
		
		printf("�z�����Z��C");
		break;	
	case 6:
		
		printf("�z�����Z��D");
		break;
			

	default:
		printf("�z�����Z��E");
		break;
	}
} 
