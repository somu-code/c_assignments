#include <stdio.h>

struct emp {
	char *name;
	int age;
	long salary;
};

void salary_sort(struct emp emp_array[], int array_len)
{
	int i,j;
	for (i = 0; i < array_len; i++) {
		for (j = 0; j < (array_len - 1); j++) {
			if (emp_array[j].salary > emp_array[j+1].salary) {
				struct emp temp = emp_array[j];
				emp_array[j] = emp_array[j+1];
				emp_array[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < array_len; i++) {
		printf("%s\n", emp_array[i].name);
	}
}


int main(void)
{
	struct emp shanu = {"Shanu Khera", 30, 100000000};
	struct emp ritwik = {"Ritwik", 25, 100};
	struct emp sid = {"Sid", 24, 10};
	struct emp somnath = {"Somnath Golui", 23, 1};

	struct emp emp_array[4] = {shanu, ritwik, sid, somnath};
	int array_len = sizeof(emp_array) / sizeof(struct emp);

	salary_sort(emp_array, array_len);

	return 0;
}
