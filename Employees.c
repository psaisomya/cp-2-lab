#include <stdio.h>
#include <string.h>

struct Dept {
    char dname[20];
};

struct Employee {
    char name[30];
    struct Dept dept;
};

int main() {
    struct Employee emp[3] = {{"Amit", {"IT"}}, {"Sita", {"HR"}}, {"Raj", {"IT"}}};
    int count = 0;

    for(int i=0; i<3; i++) {
        if(strcmp(emp[i].dept.dname, "IT") == 0) count++;
    }

    printf("Employees in IT: %d\n", count);
    return 0;
}
