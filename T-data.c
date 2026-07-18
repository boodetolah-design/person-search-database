#include <cs50.h>
#include <stdio.h> 
#include <string.h>
typedef struct {
int age;
string name; 
string gender;
string number;
}data;
int main(void){
data people[5];
people[0].age=20;
people[0].name="joe";
people[0].gender="male";
people[0].number="1234567890";
people[1].age=19;
people[1].name="sarah";
people[1].gender="female";
people[1].number="1537654324";
people[2].age=26;
people[2].name="ahmed";
people[2].gender="male";
people[2].number="1424567890";
people[3].age=22;
people[3].name="maya";
people[3].gender="female";
people[3].number="1654321098";
people[4].age=31;
people[4].name="khalid";
people[4].gender="male";
people[4].number="1764467698";
string input = get_string("Enter name: ");
for( int x=0; x<5; x++){
if(strcmp(people[x].name, input)==0){
printf("Name: %s\n", people[x].name);
printf("Age: %i\n", people[x].age);
printf("Gender: %s\n", people[x].gender); 
printf("Number: %s\n", people[x].number);
return 0;
}
}
printf("Name not founde\n");
return 1;

}


