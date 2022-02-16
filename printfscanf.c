#include <stdio.h>
int main_printfscanf(void)
{
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수에 대한 예제, float 변수는 항상 f를 뒤에 써줘야함
	/*float f = 46.5f;
	printf("%.2f\n", f); //%.숫자는 소수점 몇번째 자리까지 나타내는지
	double d = 4.428;
	printf("%.2lf\n", d); //소수는 lf를 넣어 몇번째 자리에서 반올림해서 나타낼지 설정*/
//	const int YEAR = 2000;
//	printf("태너난 년도 : %d\n", YEAR);
//	YEAR = 2001;
	
	//printf 연산
	//printf("3+7=%d\n", add);
	//printf("%.3lfx%.3lf=%.3lf\n", 2134.2, 79.2, 2134.2 * 79.2);
	//printf("%dx%d=%d\n", 2134, 79, 2134 * 79);

	//scanf 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input);
	//printf("입력값:%d\n", input);
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d,%d,%d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/
	//문자
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	//프로젝트 - 경찰 조서 작성
	//경찰관이 물어볼 내용 - 이름, 나이, 몸무게, 키, 범죄명
	/*char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게가 몇 kg 입니까?");
	scanf_s("%f", &weight);

	double height;
	printf("키가 몇 cm 입니까?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저지르셨습니까?");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n====범죄자 정보====\n\n");
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %f\n", weight);
	printf("키     : %.2lf\n", height);
	printf("범죄명 : %s\n", what);*/
	return 0;
}