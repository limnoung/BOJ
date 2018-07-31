#include <stdio.h>
#include <string.h>
int main(void) {
	char Color[7];
	int temp,Ans=0;
	for(int i=1 ; i<=3 ; i++){
		gets(Color);
		if(strcmp(Color,"black")==0)temp=0;
		if(strcmp(Color,"brown")==0)temp=1;
		if(strcmp(Color,"red")==0)temp=2;
		if(strcmp(Color,"orange")==0)temp=3;
		if(strcmp(Color,"yellow")==0)temp=4;
		if(strcmp(Color,"green")==0)temp=5;
		if(strcmp(Color,"blue")==0)temp=6;
		if(strcmp(Color,"violet")==0)temp=7;
		if(strcmp(Color,"grey")==0)temp=8;
		if(strcmp(Color,"white")==0)temp=9;
		if(i==1)
			Ans += temp*10;
		if(i==2)
			Ans += temp;
		if(i==3){
			if(temp>7){
				if(temp==9)
				Ans *=10;
			printf("%d",Ans);
			if(Ans!=0)
			printf("00000000");
			}
			else{
				for(int j=0 ; j<temp ; j++)
					Ans *=10;
				printf("%d",Ans);
			}
		}
	}
}

