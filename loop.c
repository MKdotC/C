#include<stdio.h>

int main(void)
{
	// ++ 쁠쁠 = +1
		//int a = 10;
		//printf("a = %d\n", ++a);
		//printf("a = %d\n", a);
		//printf("a = %d\n", a++);
		//printf("a = %d\n", a);

		// 반복문 for, while, do while

		//for (선언;        조건; 증감)
		  /*for (int i = 1; i <= 10; i++)
		   {
			 printf("MKCHO %d\n", i);
		   }*/

		   // while (조건) {  }
		   /*int i = 1;
		   while (i <= 10)
		   {
			   printf("MKCHO %d\n", i++);
		   }*/

		   // do {  } while (조건) ;
			/*int i = 1;
				do {
						printf("MKCHO %d\n", i++);
					} while (i <= 10);*/

		  // 2중 반복문
	//for (int i = 1; i <=3 ; i++)
	//{
	//	printf("첫번째 반복문 : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("	두번째 반복문 : %d\n", j);
	//	}
	//		}

	//구구단 2단
	/*for (int j= 1; j<=9; j++)
	{
		int i = 2;
		printf("%dx%d=%d\n", i, j, i * j);
	}*/
	
	//구구단 전부
	//for (int i = 2; i <= 9; i++)
	//{
	//	printf("%d단 계산\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%dx%d=%d\n", i, j, i * j);
	//	}
	//}

	/* 삼중 반복 구문
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9-1; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

// 피라미드를 쌓아라 - 프로젝트

	int floor;
	printf("몇층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i*2 +1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}