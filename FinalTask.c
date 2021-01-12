#include<stdio.h>
#include<string.h>
#include<strings.h>
// Writted by Ahmed Sami Elmoslmany
int numOfstudent=0, numOfoperation,i=0,foundOrnot,EditId,j=0,avrMath1=0,avrMath2=0,avrIS=0,avrCS=0,avrPL=0;
struct Student{
    int id;
    int old_id;
    char firstName[10];
    char lastName[10];
    char gender[1];
    int d;
    int m;
    int y;
    int score[5];
};
    void add();
    void search();
    void print();
    void stat();
    void edit();
    struct Student st[100];

int main(){
   
    printf("+---------------+\n");
    printf("|    Welcome    |\n");
    printf("+---------------+\n");
     
    do
    {
    printf("1-Add Student to DB\n");
    printf("2-Search for Student\n");
    printf("3-Print\n");
    printf("4-Statistics\n");
    printf("5-Edit\n");
    printf("0-Exit\n");

    printf("Enter Your choice: ");
    
    scanf("%d", &numOfoperation);
   
    
    if(numOfoperation==1) // Add
    {
         add();

    }else if (numOfoperation==2)
    {   
        search();
   }else if (numOfoperation==3)  // Print
    {

       print();
        
    }else if (numOfoperation==4)
    {
          stat();

    }else if (numOfoperation==5)
    {
        edit();
        
    } else if (numOfoperation==0)
    {
        printf("End the programe...Thanks to use our program, Sir\n Writted by Ahmed Sami Elmoslmany");
        break;
    }else if(numOfoperation!=0 ||  numOfoperation != 1 ||  numOfoperation != 2 ||  numOfoperation != 3 ||  numOfoperation != 4)
    {
    printf("Wrong choice...\n");
    printf("Choice again...\n\n");
    continue;
    }
    
    } while (1);
   
return 0;

}


void add(){
    numOfstudent++;
        for(; i<numOfstudent; i++){
            printf("Enter Student ID: ");
            scanf("%d", &st[i].id);
            if (st[i].id != st[i-1].old_id )
            {
               printf("Enter Student First name: ");
            scanf("%s", &st[i].firstName);

            printf("Enter Student Last name: ");
            scanf("%s", &st[i].lastName);

            printf("Enter Student Date of birth (Day, Month, Year): ");
            scanf("%d %d %d", &st[i].d, &st[i].m, &st[i].y);

            printf("Enter Student gender (M/F): ");
            scanf("%s", &st[i].gender);

            printf("Enter Student Score in Math1: ");
            scanf("%d", &st[i].score[0]);

            printf("Enter Student Score in Math2: ");
            scanf("%d", &st[i].score[1]);
            
            printf("Enter Student Score in Intro to CS: ");
            scanf("%d", &st[i].score[2]);

            printf("Enter Student Score in Intro to IS: ");
            scanf("%d", &st[i].score[3]);

            printf("Enter Student Score in Intro to PL: ");
            scanf("%d", &st[i].score[4]);
            st[i].old_id=st[i].id;
            }else if (st[i].id == st[i-1].old_id)
            {
                printf("Stdent is already in database please add new student with direent ID");
            }
            
            

            
        }
                    printf("----------\n");
}
// _____________________________________________________

void search(){
printf("+---------------+\n");
    printf("|    Search    |\n");
    printf("+---------------+\n");

        printf("Enter Student ID to search: ");
        scanf("%d", &foundOrnot);
        for(i=0; i<numOfstudent; i++){
           
            if (foundOrnot== st[i].id)
            {
            printf("ID: %d\n", st[i].id);
            printf("Student Name: %s %s\n", st[i].firstName, st[i].lastName);
            printf("Student Birth : %d-%d-%d\n", st[i].d, st[i].m, st[i].y);
            printf("Student Gender: %s\n", st[i].gender);
            printf("Scrore in Math1: %d\n", st[i].score[0]);
            printf("Scrore in Math2: %d\n", st[i].score[1]);
            printf("Scrore in Intro to CS: %d\n", st[i].score[2]);
            printf("Scrore in Intro to IS: %d\n", st[i].score[3]);
            printf("Scrore in Intro to PL: %d\n", st[i].score[4]);
            break;
            }
        }
        
        
                if(foundOrnot != st[i].id){
                printf("not found\n");
                   
         }
        
       

        printf("----------\n"); 
}

//_____________________________________________

void print(){
    printf("+---------------+\n");
    printf("|    Print    |\n");
    printf("+---------------+\n");
       
        for(i=0; i<numOfstudent; i++){
            printf("ID: %d\n", st[i].id);
            printf("Student Name: %s %s\n", st[i].firstName, st[i].lastName);
            printf("Student Birth : %d\n", 2020-st[i].y );
            printf("Student Gender: %s\n", st[i].gender);
            printf("Score in Math1: %d\n", st[i].score[0]);
            printf("Score in Math2: %d\n", st[i].score[1]);
            printf("Score in Intro to CS: %d\n", st[i].score[2]);
            printf("Score in Intro to IS: %d\n", st[i].score[3]);
            printf("Score in Intro to PL: %d\n", st[i].score[4]);
            printf("++++++++++++\n");

        }
}
// __________________________________________

void stat(){
    printf("+---------------+\n");
    printf("|    Stats    |\n");
    printf("+---------------+\n");
        for(i=0; i<1; i++){
            printf("Total number of student in DataBase: %d\n", numOfstudent);
            
            for(j=0; j<numOfstudent; j++){
                avrMath1 += st[i].score[0];
                avrMath2 += st[i].score[1];
                avrCS += st[i].score[2];
                avrIS += st[i].score[3];
                avrPL += st[i].score[4];
            }
            printf("Average students score in Math1: %d\n", avrMath1 / numOfstudent);
            printf("Average students score in Math2: %d\n", avrMath2 / numOfstudent);
            printf("Average students score in Intro to CS: %d\n", avrCS / numOfstudent);
            printf("Average students score in Intro to IS: %d\n", avrIS / numOfstudent);
            printf("Average students score in Intro to PL: %d\n", avrPL / numOfstudent);
        }

        avrPL=0;
        avrMath2=0;
        avrMath1=0;
        avrIS=0;
        avrCS=0;
        printf("----------\n");
}
// ____________________________________________

void edit(){
    printf("+---------------+\n");
    printf("|    Edit    |\n");
    printf("+---------------+\n");

        printf("Enter Student ID to Edit: ");
        scanf("%d", &EditId);
        for(i=0; i<numOfstudent; i++){
           
            if (EditId== st[i].id)
            {
            printf("Student is found Please enter new score for student: %s %s\n", st[i].firstName, st[i].lastName );    
            

            printf("Enter Student Score in Math1: ");
            scanf("%d", &st[i].score[0]);

            printf("Enter Student Score in Math2: ");
            scanf("%d", &st[i].score[1]);
            
            printf("Enter Student Score in Intro to CS: ");
            scanf("%d", &st[i].score[2]);

            printf("Enter Student Score in Intro to IS: ");
            scanf("%d", &st[i].score[3]);

            printf("Enter Student Score in Intro to PL: ");
            scanf("%d", &st[i].score[4]);
            printf("New score for student %s %s is added successfully\n", st[i].firstName, st[i].lastName);
            break;
            }
        }
        
        
                if(EditId != st[i].id){
                printf("not found\n");
                   
         }
}