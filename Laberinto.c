#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void leer(char A[][27]){
	int i,j;
	
	for(i=0;i<16;i++){
		printf("|");
		for(j=0;j<27;j++){
			printf("%c",A[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("_____________    INICIO\n");
}

int main(void){
	
	char A[16][27];
	int i,j;
	
	for(i=0;i<16;i++){
		for(j=0;j<27;j++){
			A[i][j]=32;
		}
	}
	
	for(i=0;i<27;i++){
		A[i][1]=48;
		A[i][24]=48;
	}
	for(i=0;i<27;i++){
		if(i!=9&&i!=10&&i!=11){
			A[i][13]=48;
		}
	}
	for(i=1;i<27;i+=2){
		A[i][0]=48;
		A[i][2]=48;
		A[i][23]=48;
		A[i][25]=48;
		if(i!=9&&i!=10&&i!=11){
			A[i][12]=48;
			A[i][14]=48;
		}
	}
	A[13][19]='A';	
	A[14][18]='<';
	A[14][19]='-';
	A[14][20]='>';
	A[15][19]='V';
	
	
	char m, win=2;
	
	do{
		printf("       FINAL\n");
		printf("____           ______________\n");
		leer(A);
		printf("\nControles------\n   w\n a s d\t\t"); m=getch(); printf("%c\n",m);
		system ("cls");
		
		if(m=='w'){
			for(i=0;i<16;i++){
				for(j=0;j<27;j++){
					if(A[i][j]=='A'){
						A[i][j]=32;
						if(A[i-1][j]==48){
							win=0;
						}
						A[i-1][j]='A';
					}
					if(A[i][j]=='<'){
						A[i][j]=32;
						if(A[i-1][j]==48){
							win=0;
						}
						A[i-1][j]='<';
					}
					if(A[i][j]=='-'){
						A[i][j]=32;
						A[i-1][j]='-';
					}
					if(A[i][j]=='>'){
						A[i][j]=32;
						if(A[i-1][j]==48){
							win=0;
						}
						A[i-1][j]='>';
					}
					if(A[i][j]=='V'){
						A[i][j]=32;
						if(A[i-1][j]==48){
							win=0;
						}
						A[i-1][j]='V';
					}
				}
			}
			if(win==0){
				printf("\n...PERDISTE :(...\n\n"); getch();
				break;
			}
		}
		
		if(m=='a'){
			for(i=0;i<16;i++){
				for(j=0;j<27;j++){
					if(A[i][j]=='A'){
						A[i][j]=32;
						if(A[i][j-1]==48){
							win=0;
						}
						A[i][j-1]='A';
					}
					if(A[i][j]=='<'){
						A[i][j]=32;
						if(A[i][j-1]==48){
							win=0;
						}
						A[i][j-1]='<';
					}
					if(A[i][j]=='-'){
						A[i][j]=32;
						A[i][j-1]='-';
					}
					if(A[i][j]=='>'){
						A[i][j]=32;
						if(A[i][j-1]==48){
							win=0;
						}
						A[i][j-1]='>';
					}
					if(A[i][j]=='V'){
						A[i][j]=32;
						if(A[i][j-1]==48){
							win=0;
						}
						A[i][j-1]='V';
					}
				}
			}
			if(win==0){
				printf("\n...PERDISTE :(...\n\n"); getch();
				break;
			}
		}
		
		if(m=='s'){
			for(i=15;i>-1;i--){
				for(j=26;j>-1;j--){
					if(A[i][j]=='V'){
						A[i][j]=32;
						if(A[i+1][j]==48){
							win=0;
						}
						A[i+1][j]='V';
					}
					if(A[i][j]=='<'){
						A[i][j]=32;
						if(A[i+1][j]==48){
							win=0;
						}
						A[i+1][j]='<';
					}
					if(A[i][j]=='-'){
						A[i][j]=32;
						A[i+1][j]='-';
					}
					if(A[i][j]=='>'){
						A[i][j]=32;
						if(A[i+1][j]==48){
							win=0;
						}
						A[i+1][j]='>';
					}
					
					if(A[i][j]=='A'){
						A[i][j]=32;
						if(A[i+1][j]==48){
							win=0;
						}
						A[i+1][j]='A';
					}
				}
			}
			if(win==0){
				printf("\n...PERDISTE :(...\n\n"); getch();
				break;
			}
		}
		
		if(m=='d'){
			for(i=15;i>-1;i--){
				for(j=26;j>-1;j--){
					if(A[i][j]=='A'){
						A[i][j]=32;
						if(A[i][j+1]==48){
							win=0;
						}
						A[i][j+1]='A';
					}
					if(A[i][j]=='>'){
						A[i][j]=32;
						if(A[i][j+1]==48){
							win=0;
						}
						A[i][j+1]='>';
					}					
					if(A[i][j]=='-'){
						A[i][j]=32;
						A[i][j+1]='-';
					}
					if(A[i][j]=='<'){
						A[i][j]=32;
						if(A[i][j+1]==48){
							win=0;
						}
						A[i][j+1]='<';
					}
					
					if(A[i][j]=='V'){
						A[i][j]=32;
						if(A[i][j+1]==48){
							win=0;
						}
						A[i][j+1]='V';
					}
				}
			}
			if(win==0){
				printf("\n...PERDISTE :(...\n\n"); getch();
				break;
			}
		}
		
		if(A[0][3]=='-'||A[0][4]=='-'||A[0][5]=='-'||A[0][6]=='-'||A[0][7]=='-'||A[0][8]=='-'||A[0][9]=='-'||A[0][10]=='-'||A[0][11]=='-'){
			win=1;
			break;
		}
		
	}while(1);
	
	if(win==1){
		printf("\n...GANASTE :)...\n\n"); getch();
	}
	
	leer(A);
	getch();
	
	return 0;
}
