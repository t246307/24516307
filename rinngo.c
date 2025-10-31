#include <stdio.h>

int main()
{
    int banana,apple;
    
    printf("バナナの数を入力してください:");
    scanf("%d", &banana);
    
    printf("リンゴの数を入力してください:");
    scanf("%d", &apple);
    
    if(banana > apple) {
        printf("バナナのほうが多いです。\n");
    }
    else if(banana < apple) {
        printf("リンゴの方が多いです。 \n");
    }
    else {
        printf("バナナとリンゴの数は一緒です！\n");
    }
    return 0;
}