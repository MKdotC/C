#include <stdio.h>
int main_printfscanf(void)
{
	//������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//�Ǽ��� ������ ���� ����, float ������ �׻� f�� �ڿ� �������
	/*float f = 46.5f;
	printf("%.2f\n", f); //%.���ڴ� �Ҽ��� ���° �ڸ����� ��Ÿ������
	double d = 4.428;
	printf("%.2lf\n", d); //�Ҽ��� lf�� �־� ���° �ڸ����� �ݿø��ؼ� ��Ÿ���� ����*/
//	const int YEAR = 2000;
//	printf("�³ʳ� �⵵ : %d\n", YEAR);
//	YEAR = 2001;
	
	//printf ����
	//printf("3+7=%d\n", add);
	//printf("%.3lfx%.3lf=%.3lf\n", 2134.2, 79.2, 2134.2 * 79.2);
	//printf("%dx%d=%d\n", 2134, 79, 2134 * 79);

	//scanf Ű���� �Է��� �޾Ƽ� ����
	//int input;
	//printf("���� �Է��ϼ��� : ");
	//scanf_s("%d", &input);
	//printf("�Է°�:%d\n", input);
	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d,%d,%d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/
	//����
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	//������Ʈ - ���� ���� �ۼ�
	//�������� ��� ���� - �̸�, ����, ������, Ű, ���˸�
	/*char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����԰� �� kg �Դϱ�?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �Դϱ�?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� �������̽��ϱ�?");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n====������ ����====\n\n");
	printf("�̸�   : %s\n", name);
	printf("����   : %d\n", age);
	printf("������ : %f\n", weight);
	printf("Ű     : %.2lf\n", height);
	printf("���˸� : %s\n", what);*/
	return 0;
}