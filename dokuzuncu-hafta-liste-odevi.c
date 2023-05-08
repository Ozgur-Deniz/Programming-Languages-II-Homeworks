#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
  int number;
  char name[50];
  float midterm;
  float final;
  float grade;
  struct student *next;
};

void add_student(struct student **head_ref, int number, char *name, int midterm,int final) {
  struct student *new_student =
      (struct student *)malloc(sizeof(struct student));
  new_student->number = number;
  strcpy(new_student->name, name);
  new_student->midterm = midterm;
  new_student->final = final;
  new_student->grade = (float)midterm * 0.4 + (float) final * 0.6;
  new_student->next = NULL;

  if (*head_ref == NULL) {
    *head_ref = new_student;
    return;
  }

  struct student *last = *head_ref;
  while (last->next != NULL) {
    last = last->next;
  }
  last->next = new_student;
}

void remove_student(struct student **head_ref, int number) {
  struct student *temp = *head_ref;
  struct student *prev = NULL;

  if (temp != NULL && temp->number == number) {
    *head_ref = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->number != number) {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL) {
    printf("Unfortunately,student not found!\n");
    return;
  }

  prev->next = temp->next;
  free(temp);
}

void list_students(struct student *head) {
  if (head == NULL) {
    printf("Unfortunately,no students found!\n");
    return;
  }

  printf("%-10s%-20s%-10s%-10s%-10s\n", "Number", "Name", "Midterm", "Final", "Grade");
  printf("----------------------------------------------------------\n");
  while (head != NULL) {
    printf("%-10d%-20s%-10.2f%-10.2f%-10.2f\n", head->number, head->name,head->midterm, head->final, head->grade);
    head = head->next;
  }
}

void list_highest_grade_student(struct student *head) {
  if (head == NULL) {
    printf("Unfortunately,no students found!\n");
    return;
  }

  struct student *highest_grade_student = head;
  while (head != NULL) {
    if (head->grade > highest_grade_student->grade) {
      highest_grade_student = head;
    }
    head = head->next;
  }

  printf("Number: %d, Name: %s, Midterm Grade: %.2f, Final Grade: %.2f, ""Overall Grade: %.2f\n",
         highest_grade_student->number, highest_grade_student->name,
         highest_grade_student->midterm, highest_grade_student->final,
         highest_grade_student->grade);
}

float calculate_class_average(struct student *head) {
  if (head == NULL) {
    printf("Unfortunately, no students found!\n");
    return 0.0;
  }

  float sum = 0.0;
  int count = 0;
  while (head != NULL) {
    sum += head->grade;
    count++;
    head = head->next;
  }

  return sum / count;
}

int main() {
  struct student *head = NULL;
  add_student(&head, 1903, "Mehmet Yilmaz", 80, 70);
  add_student(&head, 1907, "Ozgur Deniz", 90, 85);
  add_student(&head, 1961, "Ahmet Yandas", 75, 80);
  add_student(&head, 1905, "Mustafa Eren", 85, 90);
  printf("Initial student list:\n");
  list_students(head);

  printf("\nAfter removing student with number 1905:\n");
  remove_student(&head, 1905);
  list_students(head);
  printf("\nStudent with the highest grade:\n");
  list_highest_grade_student(head);

  printf("\nClass average grade: %.2f\n", calculate_class_average(head));

  return 0;
}