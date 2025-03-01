#include<stdio.h>
struct patient {
int age;
int wt;
char name[100];
}p[100];

void name()
{
int a,i=0,f,b,j,q,bed,jar,sum;	
char o[50],x[5];
float e;
printf("Admmit process");
	puts("\nEnter patients name: ");
	scanf("%s",&o);
	printf("\nEnter the days of Admmit:");
	scanf("%d",&q);
	printf("\n1.1bed=700/-\n2.filltered waterjar=50/-\n3.For room per day=1000/-\n");
	printf("\n1.Requried Beds:") ;
	scanf("%d",&bed);
	printf("\n2.Required water jars:");
	scanf("%d",&jar);
	printf("\n3.only one Room\n");

	sum=((bed*700)+(50*jar)+(1000*q));
	printf("\nBill=%d",sum);
	

}
void main()

{
int a,i=0,f,b,j,q,bed,jar,sum;
char o[50],x[5];
float e;

printf("     **************************************************");
printf("*\n	Hello,Welcome in our City Hospital\n     *");
printf("**************************************************");
printf("\n\n\n1.Add Patients Record\n2.Addmit\n3.List of Doctors\n4.Instructions list\n");
scanf("%d",&a);
 switch(a)
{
case 1:
	for(i=0;i<=100;i++)
	{
	printf("Enter Patients Full Name:\n"); 
   	gets(p[i].name);

	printf("Enter the checked Weight of patient:\n");
	scanf("%d",&p[i].wt);

	printf("Enter Patients age:\n");
	scanf("%d",&p[i].age);
}
	name();
	break;

case 2:
	printf("Admmit process");
	puts("\nEnter patients name: ");
	scanf("%s",&o);
	printf("\nEnter the days of Admmit:");
	scanf("%d",&q);
	printf("\n1.1bed=700/-\n2.filltered waterjar=50/-\n3.For room per day=1000/-\n");
	printf("\n1.Requried Beds:") ;
	scanf("%d",&bed);
	printf("\n2.Required water jars:");
	scanf("%d",&jar);
	printf("\n3.only one Room\n");

	sum=((bed*700)+(50*jar)+(1000*q));
	printf("\nBill=%d",sum);

break;
case 3:
	printf("Doctors List:");
	printf("\n1.Dr.Pradhan\n2.Dr.Mehta\n3.Dr.Mishra\n4.Dr.Desai\n5.Dr.Guptta");

	/*printf("Enter your choice:\n");
	printf("\n1.Add Patients Record\n2.List Patients Record\n3.Addmit\n4.List of Doctors ");
	scanf("%d",&a);*/

	break;
case 4:
     printf("Some instruction list:");
      
default:
printf("Your choice is wrong");
}

}


