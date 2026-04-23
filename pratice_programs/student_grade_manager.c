#include <stdio.h>

#define struct_student_array_length 5

// float calculate_average(struct student *s);
// void display_student(struct average_marks *am);

int main(void) {
    struct student {
        char *name;
        unsigned char roll_number;
        float average_marks;
        struct marks_in_particular_subjects {
            float data_structures_and_algorithms;
            float operating_systems;
            float database_management_systems;
            float object_oriented_programming;
            float artificial_intelligence;
            float machine_learning;
        } marks;
    };
    struct student students[struct_student_array_length] = {
        {.name = "student_one",
         .roll_number = 1,
         .marks = {.data_structures_and_algorithms = 11,
                   .operating_systems = 12,
                   .database_management_systems = 13,
                   .object_oriented_programming = 14,
                   .artificial_intelligence = 15,
                   .machine_learning = 16}},
        {.name = "student_two",
         .roll_number = 2,
         .marks = {.data_structures_and_algorithms = 21,
                   .operating_systems = 22,
                   .database_management_systems = 23,
                   .object_oriented_programming = 24,
                   .artificial_intelligence = 25,
                   .machine_learning = 26}},
        {.name = "student_three",
         .roll_number = 3,
         .marks = {.data_structures_and_algorithms = 31,
                   .operating_systems = 32,
                   .database_management_systems = 33,
                   .object_oriented_programming = 34,
                   .artificial_intelligence = 35,
                   .machine_learning = 36}},
        {.name = "student_four",
         .roll_number = 4,
         .marks = {.data_structures_and_algorithms = 41,
                   .operating_systems = 42,
                   .database_management_systems = 43,
                   .object_oriented_programming = 44,
                   .artificial_intelligence = 45,
                   .machine_learning = 46}},
        {.name = "student_five",
         .roll_number = 5,
         .marks = {.data_structures_and_algorithms = 51,
                   .operating_systems = 52,
                   .database_management_systems = 53,
                   .object_oriented_programming = 54,
                   .artificial_intelligence = 55,
                   .machine_learning = 56}},
    };

    for (int i = 0; i < struct_student_array_length; i++) {
        students[i].average_marks =
            (students[i].marks.data_structures_and_algorithms +
             students[i].marks.operating_systems +
             students[i].marks.database_management_systems +
             students[i].marks.object_oriented_programming +
             students[i].marks.artificial_intelligence +
             students[i].marks.machine_learning) /
            6;
    }
    for (int i = 0; i < struct_student_array_length; i++) {
        printf("Name: %s, Roll number: %d, Average marks %.2f\n",
               students[i].name, students[i].roll_number,
               students[i].average_marks);
    }
}
