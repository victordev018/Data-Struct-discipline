#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int registration;
    char name[30];

}Student;

Student vectorStudents[20];
int last = 0;

int isFull(){
    return last+1 == 20;
}

int isEmpty(){
    return last == 0;
}

void insert(Student student){

    if(!isFull()){
        vectorStudents[last] = student;
        last++;
    }
    else{
        printf("\nlist is full");
    }
}

void removeByIndex(int searched){

    if (!isEmpty() && searched <= last){
        for (int i = searched; i < last; i++){
            vectorStudents[i] = vectorStudents[i+1];
        }
        last--;
    }
    else{
        printf("\nInvalid index");
    }
}

void show(){
    printf("\n-------------- students -----------------");
    for (int i = 0; i < last; i++){
        printf("\n| student \t: %d\n| mat \t\t: %d\n| name \t\t: %s\n",i , vectorStudents[i].registration, vectorStudents[i].name);
    }
    printf("-----------------------------------------\n");
}

Student getStudent(){
    Student s;

    // read data
    printf("\n> student registration: ");
    scanf("%d", &s.registration);
    printf("> student name: ");
    getchar();
    scanf("%[^\n]", s.name);
    getchar();
    return s;
    
}

int getIndex(int *i){
    printf("> enter a index of element [%d - %d]: ", 0,  last-1);
    scanf("%d", i);
    while (*i < 0 || *i > (last-1))
    {
        printf("> ERRO, please enter a index of element: [%d - %d]: ", 0,  last-1);
        scanf("%d", i);
    }
    return *i;
}

void showMainMenu(){
    printf("\n----------- vector has %d elements -----------\n| 1 - insert\n| 2 - remove\n| 3 - show\n| 4 - quit\n| -> option: ", last);
}

int main()
{

    int option, index;

    do{
        showMainMenu();
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            // insert
            insert(getStudent());
            break;
        case 2:
            // remove
            if(!isEmpty()){
                index = getIndex(&index);
                removeByIndex(index);
            }
            else{
                printf("\nFailed to remove, the list is empty");
            }
            
            break;
        case 3:
            // show students
            show();
            break;
        case 4:
            break;
        default:
            printf("\n> invalid option");
            break;
        }

    }while(option != 4);

    return 0;
}