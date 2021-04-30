//#include <stdio.h>
//
//int main() {
//    int decks;
//    puts("Введите количество колод. ");
//    scanf("%i", &decks);
//    if(decks < 1) {
//        puts("Вы ввели недопустимое количество колод. ");
//        return 1;
//    }
//    printf("Всего карт %i ", (decks * 52));
//    return 0;
//}
//
/*
 * Программа для оценивания важности карт.
 * Выпущено без публичной лицензии
 * (с) 2021 Adams Midov
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    char card_name[3];
    puts("Введите название карты: ");
    scanf("%2s", card_name);
    int val = 0;
    
    if(card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J'){
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }
//    Проверяем находится ли значение между 3 и 6
    if ((val > 2) && (val<7) ){
        puts("Счетчик увеличился ");
    } else if(val == 10){
        puts("Счетчик уменьшился");
    } else {
        puts("Туз");
    }
    printf("Ценность карты: %i\n", val);
    
    return 0;
}

