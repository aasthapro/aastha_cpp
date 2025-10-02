//data structure basics
struct student
{
    //data
    int enrol_number;
    char name[10];
    int age;
    int grade;

    //pointer
    struct student* next;
};

//How information is stord in an array
//Let's say stuent data takes 20 bytes
//100: S1 array = 100
//120: S2
//140: S3

//array[0] = looks at address 100
//array[1] = 100 + 1 * size of student data = 120
//array[2] = 100 + 2 * size of student data = 140

//How information is stored in a linked list
//student 1 -> 150 (enrol_number=1001, name=Aastha, age=21, grade=16, next=230)
//student 2 -> 230 (enrol_number=1002, name=Prisha, age=15, grade=10, next=50)
//student 3 -> 50  (enrol_number=1003, name=Akshit, age=19, grade=14, next=null)