#include<stdio.h>
#include<stdlib.h>

#include "product.h"
#include "manager.h"


int main(void){
    Product s[100];
	 Product p;
	 int curcount=0;     
    int count=0;
    int menu;
	 count=loadData(s);
	 curcount=count;

    while(1){
			#ifdef DEBUG
			printf("DEBUG [main.c] : call selectProduct()\n");
			#endif
			 menu=selectProduct();
        if(menu==0) break;
        if(menu==1||menu==3||menu==4){
            if(count==0){
		printf("데이터 없음!\n");
	        continue;
	    }
        }  
        if(menu==1){
            printf("*****************\n");
			#ifdef DEBUG
			printf("DEBUG [main.c] : call nolist()\n");
			#endif
         nolist(s,curcount);
        }

        else if(menu==2){
			#ifdef DEBUG
			printf("DEBUG [main.c] : call addlist()\n");
			#endif
            count=addlist(&s[curcount++]);
        }
        else if(menu==3){
				int no;
			#ifdef DEBUG
			printf("DEBUG [main.c] : call selectData()\n");
			#endif
				no=selectData(s,curcount);
				if(no==0){
					printf("취소됨!\n");
					continue;
				}
			#ifdef DEBUG
			printf("DEBUG [main.c] : call updatelist()\n");
			#endif
            updatelist(&s[no-1]);
        }
        else if(menu==4){
			int no;
			#ifdef DEBUG
			printf("DEBUG [main.c] : call selectDatatno()\n");
			#endif
         no=selectData(s,curcount);
            if(count==0){
                printf("=>삭제됨!!\n");
					continue;
            }
				int deleteok;
				printf("정말로 취소하시겠습니까?(삭제:1)");
				scanf("%d",&deleteok);
				if(deleteok==1){
			#ifdef DEBUG
			printf("DEBUG [main.c] : call deletelist()\n");
			#endif
					if(deletlist(&s[no-1])) 
				curcount--;
}
				deletlist(&p);

				if(count==0){
					printf("=>삭제됨!!\n");
 	

	}
} 				else if(menu==5){
             if(count==0){
                printf("데이터가 없습니다!\n");
             }
             else {
                savelist(s,curcount);
             }
           }
           else if(menu==6){
              if(count==0){
                 printf("데이터가 없습니다\n");
              }
              else{
                searchName(s,curcount);
             }
          }
}

        else if(menu==7){
             if(count==0){
                printf("데이터가 없습니다\n");
             }
             else{
                searchweight(s,curcount);
             }
          }

    printf("=>종료됨\n");
    return 0;
}
