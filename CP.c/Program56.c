#include<stdio.h>//program using structure pointer in array
struct student {
    int id;
    char name[20];
};
int main() {
    struct student s[2]={{101,"Anu"},{102,"Vasu"}};
    struct student *ptr;
    ptr=s; 
    for(int i=0;i<2;i++)
    printf("ID: %d,Name: %s\n",(ptr+i)->id,(ptr+i)->name); 
    return 0;
}