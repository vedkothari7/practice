#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    float cgpa;
    int roll;
};
int main(){
    struct student s1;
    s1.cgpa = 7.2;
    s1.roll = 334;
    strcpy(s1.name,"rajat");
    printf("roll = %d\ncgpa = %f\nname = %s", s1.roll, s1.cgpa, s1.name);
    return 0;
}