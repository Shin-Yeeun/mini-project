#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "product.h"

int addlist(Product *s){
 	 printf("제품명은?");
    getchar();
    fgets(s->name,sizeof(s->name),stdin);
    s->name[strlen(s->name)-1] = '\0';
    printf("제품 중량? ");
    scanf("%d",&s->weight);
    printf("가격은? ");
    scanf("%d",&s->price);
	 printf("제품 표준가격은?");
	 scanf("%d",&s->s_price);
	 printf("별점수는?");
	 scanf("%d",&s->star);
 	 
    return 1;
}
void readlist(Product s,int count){
 if(s.price>=0){
	 printf("%d %s  %4dg %4d원 %4d원  %4d개\n",count,s.name,s.weight,s.price,s.s_price,s.star);
    }
 else{
	printf("없음!\n");
 }
}

int updatelist(Product *s){
 
 	printf("제품명은?");
    getchar();
    fgets(s->name,sizeof(s->name),stdin);
    s->name[strlen(s->name)-1] = '\0';
    printf("제품 중량? ");
    scanf("%d",&s->weight);
    printf("가격은? ");
    scanf("%d",&s->price);
	printf("제품 표준가격은?");
	scanf("%d",&s->s_price);
	printf("별점수는?");
	scanf("%d",&s->star);
 	printf("수정됨!\n"); 
    return 1;
}
int deletlist(Product *s){
//	s->weight=-1;
	s->price=-1;
//	s->star=-1;
	return 0;
}
int selectProduct(){
	int menu;
    printf("***PRODUCT ***\n");
    printf("1. 제품조회\n");
    printf("2. 제품추가\n");
    printf("3. 제품수정\n");
    printf("4. 제품삭제\n");
	 printf("5. 제품저장\n");
	 printf("6. 제품 이름 검색\n");
	 printf("7. 제품 무게 검색\n");
	 printf("8. 제품 별 검색\n");

    printf("0. 종료\n");
    printf("\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d",&menu);
    return menu;
}

