#include <stdio.h>

// t?o Employee struct
struct Employee {
  int age;
  char name[50];
};

int main() {

    // khai b�o bi?n employee1
    struct Employee employee1;

    // nh?n gi� tr? cho employee1.age
    scanf("%d ", &employee1.age);

    // nh?n gi� tr? cho employee1.name
    fgets(employee1.name, sizeof(employee1.name), stdin);

    // in c�c th�nh vi�n ra m�n h�nh
    printf("%s", employee1.name);
    printf("%d", employee1.age);

    return 0;
}

