#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float temp,temp1,temp2,temp3,a[10][10]={{7,7,0,1},{7,4,0,2},{3,4,0,2},{1,4,0,4}},d[10],d1[10],d2[10],x1,y1,count[10]={0,0,0,0,0,0,0};
	int i,n=1,j,k;
	clrscr();

	printf("\nEnter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);

	for(i=0;i<=3;i++){
		for(j=0;j<=n;j++){
			printf("%f",a[i][j]);
		}
		printf("\n");

	}
	for(i=0;i<=3;i++){
		a[i][2]=sqrt((a[i][0]-x1)*(a[i][0]-x1)+(a[i][1]-y1)*(a[i][1]-y1));
		printf("\n%f",a[i][2]);
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=3;j++){

			if(a[i][2]>a[j][2]){
			temp=a[i][2];
			a[i][2]=a[j][2];
			a[j][2]=temp;

			temp1=a[i][0];
			a[i][0]=a[j][0];
			a[j][0]=temp1;

			temp2=a[i][1];
			a[i][1]=a[j][1];
			a[j][1]=temp2;

			temp3=a[i][3];
			a[i][3]=a[j][3];
			a[j][3]=temp3;
			//printf("\n\n%f,",a[i][2]);
			}
		}
	}
	printf("\n");
	//for(i=0;i<=3;i++){
	//printf("%f\t",a[i][2]);
	//}
	printf("\n=======================================================\n");
	for(i=0;i<=3;i++){printf("%f\t%f\t%f\t%f",a[i][0],a[i][1],a[i][2],a[i][3]);printf("\n");}
	//printf("\n");
	for(i=0;i<=3;i++){
	if(a[i][3]==1){count[0]=count[0]+1;}
	if(a[i][3]==2){count[1]=count[1]+1;}
	if(a[i][3]==3){count[2]=count[2]+1;}
	if(a[i][3]==4){count[3]=count[3]+1;}
	}
	printf("\ncount of kidney disease 1 is : %f",count[0]);
	printf("\ncount of kidney disease 2 is : %f",count[1]);
	printf("\ncount of kidney disease 3 is : %f",count[2]);
	printf("\ncount of kidney disease 4 is : %f",count[3]);
	if(count[0]>count[1] && count[0]>count[2] && count[0]>count[3]){
	printf("\nkidney disease 1 detected");
	}
	if(count[1]>count[2] && count[1]>count[3]){
	printf("\nkidney disease 2 detected");
	}
	if(count[2]>count[3]){
	printf("\nkidney disease 3 detected");
	}
	if(count[3]>count[2] && count[3]>count[1] && count[3]>count[0]){printf("\nkidney disease 4 detected");}
	printf("\n===========================================================");
	getch();
}