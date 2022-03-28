#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define LSIZ 128 
#define RSIZ 10 





int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}



int R(char line[]){
	
	printf("\n");
	
	int j = 0;
	char func[100];
	char rd[1000]; 
	char rs[1000];
	char rt[10000];
	
	
	
	for (int i =26; i<32;i++){
		func[j]=line[i];
		j++;
		
	}
	
	
	if (strcmp(func, "100100")==0){
		printf("and  ");
		
		
				int l =0;                                               //rd//
		                                          
		for (int rd1= 16 ; rd1<21 ; rd1++){
			rd[l]=line[rd1];
			l++;
		
		
		}
		
		  
		
		if (strcmp(rd,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$12,");
		}if (strcmp(rd,"01101")==0){
			printf("$13,");
		}if (strcmp(rd,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$15,");
		}
		
		
				int h=0;
		                          //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rs,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rs,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rs,"01100")==0){
			printf("$12,");
		}if (strcmp(rs,"01101")==0){
			printf("$13,");
		}if (strcmp(rs,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rs,"01111")==0){
			printf("$15,");
		}
		
			
		int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$9");
		}
		if (strcmp(rt,"01010")==0){
			printf("$10");
		}
		if (strcmp(rt,"01011")==0){
			printf("$11");
		}
		if (strcmp(rt,"01100")==0){
			printf("$12");
		}if (strcmp(rt,"01101")==0){
			printf("$13");
		}if (strcmp(rt,"01110")==0){
			printf("$14");
		}
		if (strcmp(rt,"01111")==0){
			printf("$15");
		}
				
		
		
	}
	if (strcmp(func, "100000")==0){
		printf("add  ");               //func//
		
						int l =0;                                               //rd//
		                                          
		for (int rd1= 16 ; rd1<21 ; rd1++){
			rd[l]=line[rd1];
			l++;
		
		
		}
		
		  
		
		if (strcmp(rd,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$12,");
		}if (strcmp(rd,"01101")==0){
			printf("$13,");
		}if (strcmp(rd,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$15,");
		}
		
		
				int h=0;
                          //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rs,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rs,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rs,"01100")==0){
			printf("$12,");
		}if (strcmp(rs,"01101")==0){
			printf("$13,");
		}if (strcmp(rs,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rs,"01111")==0){
			printf("$15,");
		}
		
			
		int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$9");
		}
		if (strcmp(rt,"01010")==0){
			printf("$10");
		}
		if (strcmp(rt,"01011")==0){
			printf("$11");
		}
		if (strcmp(rt,"01100")==0){
			printf("$12");
		}if (strcmp(rt,"01101")==0){
			printf("$13");
		}if (strcmp(rt,"01110")==0){
			printf("$14");
		}
		if (strcmp(rt,"01111")==0){
			printf("$15");
		}
			
		
	}
	if (strcmp(func, "100101")==0){
		printf("or  ");
		
			int l =0;                                               //rd//
		                                          
		for (int rd1= 16 ; rd1<21 ; rd1++){
			rd[l]=line[rd1];
			l++;
		
		
		}
		
		  
		
		if (strcmp(rd,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$12,");
		}if (strcmp(rd,"01101")==0){
			printf("$13,");
		}if (strcmp(rd,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$15,");
		}
		
		
				int h=0;
		                          //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rs,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rs,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rs,"01100")==0){
			printf("$12,");
		}if (strcmp(rs,"01101")==0){
			printf("$13,");
		}if (strcmp(rs,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rs,"01111")==0){
			printf("$15,");
		}
		
			
		int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$9");
		}
		if (strcmp(rt,"01010")==0){
			printf("$10");
		}
		if (strcmp(rt,"01011")==0){
			printf("$11");
		}
		if (strcmp(rt,"01100")==0){
			printf("$12");
		}if (strcmp(rt,"01101")==0){
			printf("$13");
		}if (strcmp(rt,"01110")==0){
			printf("$14");
		}
		if (strcmp(rt,"01111")==0){
			printf("$15");
		}
				
	}
	if (strcmp(func, "101010")==0){
		printf("slt");
		
				int l =0;                                               //rd//
                                          
		for (int rd1= 16 ; rd1<21 ; rd1++){
			rd[l]=line[rd1];
			l++;
		
		
		}
		
		  
		
		if (strcmp(rd,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$12,");
		}if (strcmp(rd,"01101")==0){
			printf("$13,");
		}if (strcmp(rd,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$15,");
		}
		
		
				int h=0;
	                  //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("$9,");
		}
		if (strcmp(rs,"01010")==0){
			printf("$10,");
		}
		if (strcmp(rs,"01011")==0){
			printf("$11,");
		}
		if (strcmp(rs,"01100")==0){
			printf("$12,");
		}if (strcmp(rs,"01101")==0){
			printf("$13,");
		}if (strcmp(rs,"01110")==0){
			printf("$14,");
		}
		if (strcmp(rs,"01111")==0){
			printf("$15,");
		}
		
			
		int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$9");
		}
		if (strcmp(rt,"01010")==0){
			printf("$10");
		}
		if (strcmp(rt,"01011")==0){
			printf("$11");
		}
		if (strcmp(rt,"01100")==0){
			printf("$12");
		}if (strcmp(rt,"01101")==0){
			printf("$13");
		}if (strcmp(rt,"01110")==0){
			printf("$14");
		}
		if (strcmp(rt,"01111")==0){
			printf("$15");
		}
			
		
		
	}
	return 0;
	}



int I(char line[]){
	
	int j = 0;
	char func[10000];
	char rs[100000]; 
	char rd[1000];
	char imm[10000]; 
	char rt[10000];
	
	
	
	for (int i =0; i<6;i++){
		func[j]=line[i];
		j++;
		
	}
	
	
	
	
	
	
	
	
	if (strcmp(func, "001000")==0){
		printf("\naddi  ");   //addi//
		
		
		
			
		int q=0;                                          //rd//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rd[q]=line[rt1];
			q++;
			
		
		}
		
		
	
		if (strcmp(rd,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$t4,");
		}
		if (strcmp(rd,"01101")==0){
			printf("$t5,");
		}
		if (strcmp(rd,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$t7,");
		}
	
	
		
		
		
		
		
		
		
		
			int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
		
		
		
		
		
		
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
	
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("%d",imm1);
		
	
	
	
	
	
		
		}
		
		
		
		
		
		
	if (strcmp(func, "101011")==0){   
	printf("\nsw  ");         //sw//
	
	
	
	
	int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rt,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rt,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rt,"01100")==0){
			printf("$t4,");
		}if (strcmp(rt,"01101")==0){
			printf("$t5,");
		}if (strcmp(rt,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rt,"01111")==0){
			printf("$t7,");
		}
	
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("\%d",imm1);
	
	
	
	
		int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
		
		
		
		
		
		
		  
		
		
		
	
	
	
	}
	if (strcmp(func, "100011")==0){          //lw//
	printf("\nlw  ");
	
	
	
	
	int q=0;                                          //rt//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rt[q]=line[rt1];
			q++;
			
		
		}
		
	
		if (strcmp(rt,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rt,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rt,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rt,"01100")==0){
			printf("$t4,");
		}if (strcmp(rt,"01101")==0){
			printf("$t5,");
		}if (strcmp(rt,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rt,"01111")==0){
			printf("$t7,");
		}
	
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("\%d",imm1);
	
	
	
	
		int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
	
	
	}
	
	
	if (strcmp(func, "001101")==0){
		printf("\nori  ");           //ori//
		
		
		
			
		int q=0;                                          //rd//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rd[q]=line[rt1];
			q++;
			
		
		}
		
		
	
		if (strcmp(rd,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$t4,");
		}
		if (strcmp(rd,"01101")==0){
			printf("$t5,");
		}
		if (strcmp(rd,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$t7,");
		}
	
	
		
		
			int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
		
		
		
		
		
		
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
	
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("%d",imm1);
		
	
	
	
	
	
		
		}
		
		
		
		if (strcmp(func, "001100")==0){
		printf("\nandi  ");           //andi//
		
		
		
			
		int q=0;                                          //rd//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rd[q]=line[rt1];
			q++;
			
		
		}
		
		
	
		if (strcmp(rd,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$t4,");
		}
		if (strcmp(rd,"01101")==0){
			printf("$t5,");
		}
		if (strcmp(rd,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$t7,");
		}
	
	
		
		
			int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
		
		
		
		
		
		
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
	
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("%d",imm1);
		
	
	
	
	
	
		
		}
		
		
		
		
		
		if (strcmp(func, "001010")==0){
		printf("\nslti  ");                    //slti
		
		
		
			
		int q=0;                                          //rd//
		
		for (int rt1=11; rt1<16;rt1++){                       
			rd[q]=line[rt1];
			q++;
			
		
		}
		
		
	
		if (strcmp(rd,"01001")==0){
			printf("$t1,");
		}
		if (strcmp(rd,"01010")==0){
			printf("$t2,");
		}
		if (strcmp(rd,"01011")==0){
			printf("$t3,");
		}
		if (strcmp(rd,"01100")==0){
			printf("$t4,");
		}
		if (strcmp(rd,"01101")==0){
			printf("$t5,");
		}
		if (strcmp(rd,"01110")==0){
			printf("$t6,");
		}
		if (strcmp(rd,"01111")==0){
			printf("$t7,");
		}
	
	
		
		
			int h=0;
		                           //rs//
		for (int rs1= 6; rs1<11; rs1++){
			rs[h]=line[rs1];
			h++;
		}
	
		
		if (strcmp(rs,"01001")==0){
			printf("($t1)");
		}
		if (strcmp(rs,"01010")==0){
			printf("($t2)");
		}
		if (strcmp(rs,"01011")==0){
			printf("($t3)");
		}
		if (strcmp(rs,"01100")==0){
			printf("($t4)");
		}if (strcmp(rs,"01101")==0){
			printf("($t5)");
		}if (strcmp(rs,"01110")==0){
			printf("(($t6)");
		}
		if (strcmp(rs,"01111")==0){
			printf("($t7)");
		}
		
		
		
		
		
		
		
	
	
	
		int l =0;                                               //imm//
		                                          
		for (int rd1= 16 ; rd1<32 ; rd1++){
			imm[l]=line[rd1];
			l++;
		
		
		}
	
		long long t = atoll(imm);
		int imm1= convert(t);
		printf("%d",imm1);
		
	
	
	
	
	
		
		}
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
return 0;

}
















int main(void) 
{
    char line[RSIZ][LSIZ];
	
    FILE *fptr; 
    int i = 0;
    int tot = 0;
    printf("\nMachine Code:\n");
	
    fptr = fopen("input.txt", "r");
    while(fgets(line[i], LSIZ, fptr)) 
	{
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
 
    }
    char ch;
    fptr = fopen("input.txt", "r");
    int count=0;
         while((ch=fgetc(fptr))!=EOF)
    {
        putchar(ch);
        if(ch=='\n')
        {
            count++;
        }
    }
            
            
            
        
	printf("MIPS Assembly Language");  

	int a =6;
	char arr2[100000];
	
	for (int j=0; j<(count); j++){
	for (i = 0; i < 6; i++) 
	{
	arr2[i]=line[j][i];
	
	
	}
	
	

	if (strcmp(arr2, "000000") == 0){
	
		R(line[j]);
	}
	else{
		I(line[j]);
	}
	
	}
	return 0;
	
}

