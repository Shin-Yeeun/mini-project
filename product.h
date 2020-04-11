#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef __PRODUCT_H__
#define __PRODUCT_H__
typedef struct{
    char name[50];//제품 이름
    int weight;//제품 중량
    int price;//제품 가격
    int s_price;//제품 표준가격
    int star;//별점수(1~5)
}Product;
#endif

int addlist(Product *s);//제품 추가
void readlist(Product s,int count);//제품 읽어오기
//void nolist(Product *s,int count);//readlist에서 읽어온 제품을 nolist에서 출력
//int selectData(Product *s,int count);//선택할 제품 고르기
int updatelist(Product *s);//제품 정보 고치기
int deletlist(Product *s);//제품 삭제
int selectProduct();//실행할 메뉴 고르기

