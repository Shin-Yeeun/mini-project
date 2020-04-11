#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "product.h"

void read(Product s,int count);//제품 읽어오기
void nolist(Product *s,int count);//readlist에서 읽어온 제품을 nolist에서 출력
int selectData(Product *s, int count);

void savelist(Product *s,int count);//제품 저장
void searchName(Product *s,int count);//제품 이름 검색
void searchStar(Product *s,int count);//제품 별점 검색
void searchweight(Product *s,int count);//제품 중량 검색
void searchStar(Product *s,int count);//제품 별점 검색
int loadData(Product s[]);
