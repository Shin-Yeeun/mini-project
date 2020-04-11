#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "manager.h"


void read(Product s,int count){
 if(s.price>=0){
	 printf("%d %s  %4dg %4d원 %4d원  %4d개\n",count,s.name,s.weight,s.price,s.s_price,s.star);
    }
}
void  nolist(Product *s,int count){
   printf("=============================\n");
	for(int i=0; i<count; i++){
	if(s->price==-1) continue;
	read(s[i],i+1);
}
printf("\n");
}
int selectData(Product *s, int count){
	int no;
	nolist(s, count);
	printf("번호는 (취소 :0) ");
	scanf("%d",&no);
	return no;
}

int loadData(Product s[]){
    int count=0;
    FILE *fp;
    fp=fopen("product.txt","rt");
        if(fp==NULL){
            printf("=>파일 없음\n");
            return 0;
        }
        for(; ;count++){
				fscanf(fp,"%d  %4dg %4d원 %4d원  %4d개\n",count,&s[count].weight,&s[count].price,&s[count].s_price,&s[count].star);
            fgets(s[count].name,sizeof(s[count].name),fp);
            s[count].name[strlen(s[count].name)] = '\0';

            if(feof(fp))
					break;
		}
        fclose(fp);
        printf("=>로딩성공!\n");
        return count;
}
void savelist(Product *s,int count){
    FILE *fp;
    fp = fopen("product.txt","wt");

    for(int i=0; i<count; i++){
        if(s[i].price!=-1){
				fprintf(fp,"%d  %4dg %4d원 %4d원  %4d개\n",count,s[i].weight,s[i].price,&s[i].s_price,&s[i].star);
        }
        
    }
    printf("저장됨!\n");
    fclose(fp);
}
void searchName(Product *s,int count){
    int scount=0;
    char search[20];
    
    printf("검색할 메뉴?");
    scanf("%s",search);

    printf("=========================\n");
    for(int i=0; i<count; i++){
        if(s[i].price!=-1){
            if(strstr(s[i].name,search)){
                read(s[i],i+1);
                scount++;

            }
        }
    }
    if(scount==0){
        printf("검색된 데이타 없음!\n");
    }
}

void searchweight(Product *s,int count){
	int search_w=0;
	int scount_w=0;
	printf("검색할 무게?");
	scanf("%d",&search_w);

	printf("====================\n");
	for(int i=0; i<count; i++){
		if(s[i].price==-1){
			if(s[i].weight==search_w){
				read(s[i],i+1);
				scount_w++;
				}
		}
}
}
void searchStar(Product *s,int count){
	int search_s=0; 
	int scount_s=0; 
	printf("검색할 별 개수?");
	scanf("%d",&search_s);

	printf("==================\n");
	for(int i=0; i<count; i++){
		if(s[i].price==-1){
			if(s[i].weight==search_s){
				read(s[i],i+1);
				scount_s++;
				}
		}
}
}
int loadData(Product s[]){
     int count=0;
     FILE *fp;
     fp=fopen("product.txt","rt");
         if(fp==NULL){
             printf("=>파일 없음\n");
             return 0;
         }
         for(; ;count++){
             fscanf(fp,"%d  %4dg %4d원 %4d원  %4d개\n",count,&s[count].weight,&s[count].price,&s[count].s_pr    ice,&s[count].star);
             fgets(s[count].name,sizeof(s[count].name),fp);
             s[count].name[strlen(s[count].name)] = '\0';

             if(feof(fp))
                break;
       }
         fclose(fp);
         printf("=>로딩성공!\n");
         return count;
 }
void savelist(Product *s,int count){
     FILE *fp;
     fp = fopen("product.txt","wt");

     for(int i=0; i<count; i++){
         if(s[i].price!=-1){
             fprintf(fp,"%d  %4dg %4d원 %4d원  %4d개\n",count,s[i].weight,s[i].price,&s[i].s_price,&s[i].sta    r);
         }

     }
     printf("저장됨!\n");
     fclose(fp);
 }
void searchName(Product *s,int count){
     int scount=0;
     char search[20];

     printf("검색할 메뉴?");
     scanf("%s",search);

     printf("=========================\n");
      for(int i=0; i<count; i++){
          if(s[i].price!=-1){
              if(strstr(s[i].name,search)){
                 read(s[i],i+1);
                 scount++;

             }
         }
     }
     if(scount==0){
         printf("검색된 데이타 없음!\n");
     }
 }
