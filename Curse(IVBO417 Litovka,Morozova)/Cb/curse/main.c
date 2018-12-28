#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct sprav{
char fio[20];
char num[20];
}sprav;
int	t=0;
void main(int argc, char* argv[],char data){ 

if (argc < 3) { //.. проверяем кол-во аргументов 
printf("Where is ip/port?\n"); 
printf(argc); 
exit(1); 
} 
char c[] = "config"; //проверяем, что 2 аргумент написан правильно 
if (!strcmp(c, argv[1])) { 
//printf("config is right!\n"); 
} 
else { 
printf("config is wrong!\n"); 
printf(argv[1]); 
exit(1); 
} 
char show[] = "show"; 
char add[] = "add"; 
char delete[] = "delete"; 
char edit[] = "edit"; 
//проверяем, что 3 аргумент написан правильно 
if (!strcmp(show, argv[2])||!strcmp(add, argv[2]) || !strcmp(delete, argv[2]) ||!strcmp(edit, argv[2])) { 
//printf("3rd arg is right!\n"); 
	struct sprav *tel; 
	//SPRAV tel[5]; /* массив структур - 5 элементов */
char fio_tek[20];
int n=2;
	tel=(struct sprav *)malloc(n*sizeof(struct sprav));
	int itr=2;
char name_port[10]="port";
char value_port[20]="999";

strcpy(tel[0].fio,name_port);
strcpy(tel[0].num,value_port);

char name_ip[10]="ip";
char value_ip[20]="000.000.00.0";
strcpy(tel[1].fio,name_ip);
strcpy(tel[1].num,value_ip);
 int input;
do{    	
	printf( "lets go\n" );
    printf( "1. Show\n" );
    printf( "2. Add\n" );
    printf( "3. Edit\n" );
	printf( "4. Delete\n" );
    printf( "5. Exit\n" );
    printf( "************\n " );
	if(t<1){
		t++;
		if (!strcmp(show, argv[2])){ 
			input=1;
		}
		if (!strcmp(add, argv[2])){ 
			input=2;
		}
		if (!strcmp(edit, argv[2])){ 
			input=3;
		}
		if (!strcmp(delete, argv[2])){ 
			input=4;
		}
	}
		else{   
		scanf( "%d", &input );}
    switch ( input ) {
        case 1:   

         /* обратите внимание на двоеточие, точки сзапятой тут нет */
            for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}	
            break;
        case 2:
		
n++;	
tel=(struct sprav *)realloc(tel,n*sizeof(struct sprav));
	printf("add\n"); 
		char name[10];
	char value[20];
puts("name variable");
scanf("%s",&name);
puts("value");
scanf("%s",&value);
puts("entered:");
for(int i=n-1;i<n;i++){
	strcpy(tel[i].fio,name);
strcpy(tel[i].num,value);
	}
	for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}
	
            break;
        case 3:
         printf( "Your choice: \n" );
	for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}
    int input;
    scanf( "%d", &input );
if(input>n || input==n  ||input<n ){
		puts("name variable");
			char name[10];
	char value[20];
scanf("%s",&name);
puts("value");
scanf("%s",&value);
puts("entered:");
		strcpy(tel[input].fio,name);
strcpy(tel[input].num,value);
for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}
} 
            break;
		case 4:
      printf( "Your choice: \n" );
	for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}
    int input1;
    scanf( "%d", &input1 );
if(input1>n || input1==n  ||input1<n ){
	for(int i=input1;i<n;i++){
		tel[input1]=tel[input1+1];
		//tel[input]=tel[input+1];
	}
	n--;
tel=(struct sprav *)realloc(tel,n*sizeof(struct sprav));
		
for(int i=0;i<n;i++){
		printf("#%d %s  %s\n",i,tel[i].fio,tel[i].num);
	}
} 
            break;
        case 5:
            printf( "Good by\n" );
            exit(1);
        default:
            printf( "Error.Try again.\n" );
    }
    getchar();
	}
    while(1);
}
else 
{ 
printf("3rd arg is wrong!\n"); 
printf(argv[1]); 
exit(1); 
} 
}
