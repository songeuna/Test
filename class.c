#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 100000

struct STUDENT{
	unsigned char name[8];
	unsigned char kor;
	unsigned char eng;
	unsigned char math;
	unsigned char germany;
 	short total;
	float average;
};

void main(void)
{
	struct STUDENT student[size];
	int i;
	int sum = 0;
	char a = 'a';

	
	for(i=0;i<size;i++){
		student[i].name[8] = 'A' + 1;

	}

	srand(time(NULL));	

	for(i=0;i<size;i++){
		student[i].kor = (rand() % 100 + 1);
		student[i].eng = (rand() % 100 + 1);
		student[i].math = (rand() % 100 + 1);
		student[i].germany = (rand() % 100 + 1) ;
	
		student[i].total = student[i].kor + student[i].eng + student[i].math + student[i].germany; 
		student[i].average = student[i].total / 4.0;	
	
/*	printf("%c, kor = %d, eng = %d, math = %d, germany = %d ,sum = %d, average = %lf\n",
	student[i].name[8], student[i].kor, student[i].eng, student[i].math, student[i].germany,
	student[i].total, student[i].average);
*/	}	
}

