#include <stdio.h>

// t?o Employee struct
struct Employee {
  int age;
  char name[50];
};

int main() {

    // khai báo bi?n employee1
    struct Employee employee1;

    // nh?n giá tr? cho employee1.age
    scanf("%d ", &employee1.age);

    // nh?n giá tr? cho employee1.name
    fgets(employee1.name, sizeof(employee1.name), stdin);

    // in các thành viên ra màn hình
    printf("%s", employee1.name);
    printf("%d", employee1.age);

    return 0;
}

