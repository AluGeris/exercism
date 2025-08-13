#include "grade_school.h"


int compare_names(char *name1, char *name2);


void init_roster(roster_t *roster) {
  roster->count = 0;
}


int add_student(roster_t *roster, char *name, int grade) {
  student_t student, temp;

  int i = 0;
  while(name[i]) {
    student.name[i] = name[i];
    i++;
  }
  student.name[i] = '\0';
  student.grade = grade;

  if (roster->count == 0) {
    roster->students[0] = student;
    roster->count++;
    return 1;
  }

  //find index for insertion
  size_t index = 0;
  for (; index < roster->count; index++) {
    int comp_names = compare_names(student.name, roster->students[index].name);
    int comp_grades = student.grade - roster->students[index].grade;
    if (comp_names == 0) return 0;
    if (comp_grades < 0) break;
    if (comp_grades == 0 && comp_names < 0) break;
  }

  // insert at index, push everything else forward
  for (; index <= roster->count; index++) {
    temp = roster->students[index];
    roster->students[index] = student;
    student = temp;
  }

  roster->students[index + 1] = student;
  roster->count++;

  return 1;
}


roster_t get_grade(roster_t *roster, int grade) {
  roster_t result;
  init_roster(&result);
  for (int i = 0; i < (int)roster->count; i++) {
    if (grade < roster->students[i].grade) break;
    if (grade == roster->students[i].grade) {
      add_student(&result, roster->students[i].name, roster->students[i].grade);
    }
  }
  return result;
}


int compare_names(char *name1, char *name2) {
  // name1 < name2 => -1, name1 == name2 => 0, name1 > name2 => 1
  int i = 0;
  while(name1[i] || name2[i]) {
    if (name1[i] != name2[i]) {
      if (name1[i] < name2[i]) return -1;
      else return 1;
    }
    i++;
  }
  return 0;
}

