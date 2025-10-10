/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しておく**/
    int shisutemu = 24516307;
    /**printfとは""の間に表示したい文字をしめすことで表示することができる。**/
    printf("システム創成工学科の私の学生番号は %d です。\n", shisutemu);
    shisutemu = 24517777;
    printf("すみません！間違えました。\n私の本当の学生番号は %d です。", shisutemu);
    return 0;
}