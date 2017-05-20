#include <stdio.h>

int is_leap(const int *y);				/*检查闰年*/
int is_solar(const int *m);	/* a solar month of 31 days */
int is_lunar(const int *m);	/* a lunar month of 30 days */

void yesterday(int *y, int *m, int *d);
void tomorrow(int *y, int *m, int *d);

int is_leap(const int *y)		/*检查闰年*/
{
	if (((*y % 4 == 0) && (*y % 100 != 0)) || *y % 400 == 0)	/*((*y % 4 == 0) && (*y % 100 != 0))---非百年，能被4整除为闰年｜｜*y % 400 == 0－－－－整百的年份能被400整除为闰年*/
		return 1;
	else
		return 0;
}

int is_solar(const int *m)		/*判断是否是31天，大月*/
{
	int i = 0;
	int n[8] = {1, 3, 5, 7, 8, 10, 12};

	n[7] = *m;
	
	while (1) {
		if (n[7] == n[i])
			break;
		i++;
	}

	if (i == 7)
		return 0;
	else
		return 1;
}

int is_lunar(const int *m)		/*判断是否是30天，小月*/
{
	int i = 0;
	int n[6] = {4, 6, 8, 9, 11};
	
	n[5] = *m;

	while (1) {
		if (n[5] == n[i])
			break;
		i++;
	}

	if (i == 5)
		return 0;
	else
		return 1;
}



void yesterday(int *y, int *m, int *d)
{
	if (*d == 1)
		if (is_solar(m)) {
			if (*m == 1) {
				(*y)--;
				*m = 12;
				*d = 31;
			} 
			else if (*m == 3){
				if (is_leap(y)) {
					(*m)--;
					*d = 29;
				} 
				else {
					(*m)--;
					*d = 28;
				}
			} 
			else {
				(*m)--;
				*d = 30;
			}
		} 
		else if (is_lunar(m)) {
			(*m)--;
			*d = 31;
		} 
		else {		/*此处为2月，特殊，单列*/
			(*m)--;
			*d = 31;
		}
	else
		(*d)--;

	return;
}

void tomorrow(int *y, int *m, int *d)
{
	if (is_solar(m)) {		/* a solar month of 31 days */
		if (*d == 31) {
			if (*m == 12) {
				(*y)++;
				*m = 1;
				*d = 1;
			} 
			else {
				(*m)++;
				*d = 1;
			}
		} 
		else {
			(*d)++;
		}
	} 
	else if (is_lunar(m) || *m == 2) {		/* a lunar month of 30 days */
		if (*d == 30) {
			(*m)++;
			(*d) = 1;
		} 
		else {
			if (*d < 28) {
				(*d)++;
			} 
			else {
				if ((is_leap(y)) && (*d == 28)) {
					(*d)++;
				} 
				else {
					(*m)++;
					(*d) = 1;
				}
			}
		}
	}
}



int main(void)
{
	int year, month, day;
	int no;

	puts("please enter a date");
	printf("please enter the year: ");
	scanf("%d", &year);
	printf("please enter the month: ");
	scanf("%d", &month);
	printf("please enter the day: ");
	scanf("%d", &day);

	do {
		printf("0...yesterday\n1...tomorrow\n2...quit\n"
			"please select: ");
		scanf("%d", &no);

		switch (no) {
		case 0: yesterday(&year, &month, &day); break;
		case 1: tomorrow(&year, &month, &day); 	break;
		default: 				break;		/*与任何case不同时跳到default*/
		}
		
		if (no == 0)
			printf("the yesterday is %d-%d-%d\n", year, month, day);
		else if (no == 1)
			printf("the tomorrow is %d-%d-%d\n", year, month, day);
		else if (no == 2)
			break;
		else
			continue;	/*continue结束本次循环，break结束循环体*/
	} while (1);

	return 0;
}