#include <stdio.h>

int main(void)
{
    int takuto, kouta, ruka;
    takuto = 20;
    kouta = 40;
    ruka = 20;
    
    if (takuto == 20)
    printf("拓斗は20歳です\n");
    if (kouta != 40)
    printf("康太は20歳ではありません\n");
    if(kouta >= 20)
    printf("康太は20歳以上です\n");
    if(ruka < 20)
    printf("瑠香は20歳未満です\n");
    
    if(takuto > ruka)
    printf("拓斗は瑠香瑠香より年上です\n");
    if(kouta > takuto)
    printf("康太は拓斗より年上です\n");
    
    return 0;

}