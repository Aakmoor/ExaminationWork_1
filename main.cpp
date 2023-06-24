//
//  main.cpp
//  Recipe
//
//  Created by Akmoor Ashimbek kuzu on 24/06/2023.


#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout<<"Все продукт\n 1. Мука\n 2. Молоко\n 3. Яйца\n 4. Сыр\n 5. Рис\n 6. Сливочное масло\n 7. Кефир\n 8. Яблоко\n 9. Картошка\n 10. Творог\n 11. Курица\n 12. Индейка\n  13. Морковь\n 14. Репчатый лук\n 15. Тыква\n 16. Сахар\n 17. Мед"<<endl;
    cout <<"Введите цифру продукта";
    cin >> x;
    
    if (x ==1)
    {
        cout << "Mука"<<endl;
        cout<<"Нашла рецепт с этим продуктом\n БЕЛЫЙ ХЛЕБ В ДУХОВКЕ. Ссылка на рецепт --https://1000.menu/cooking/27223-belyi-xleb-v-duxovke"<<endl;
    }
    if (x ==2)
    { cout <<" Mолоко"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Сладкая манная каша.Ссылка на рецепт --https://eda.ru/recepty/zavtraki/sladkaja-mannaja-kasha-39102"<<endl;
    }
    if (x ==3)
    { cout << "Яйца"<<endl;
        cout<<"Нашла рецепт с этим продуктом.яичница с помидорами.Ссылка на рецепт --https://tishka.org/яичница-с-помидорами"<<endl;
    }
    if (x ==4)
    { cout << "Сыр"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Сырные крокеты.Ссылка на рецепт --https://www.russianfood.com/recipes/recipe.php?rid=117193"<<endl;
    }
    if (x ==5)
    { cout << "Рис"<<endl;
        cout<<"Нашла рецепт с этим продуктом.ОТВАРНОЙ РИС НА ВОДЕ РАССЫПЧАТЫЙ.Ссылка на рецепт --https://1000.menu/cooking/19723-varenyi-rassypchatyi-ris"<<endl;
    }
    if (x ==6)
    { cout << "Сливочное масло"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Штрейзель.Ссылка на рецепт -- https://povar.ru/recipes/shtreizel-42872.html"<<endl;
    }
    if (x ==7)
    { cout << "Кефир"<<endl;
        cout<<"Нашла рецепт с этим продуктом. Омлет на кефире.Ссылка на рецепт --https://povar.ru/recipes/shtreizel-42872.html"<<endl;
    }
    if (x ==8)
    { cout << "Яблоко"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Шарлотка с яблоками.Ссылка на рецепт --https://baking-academy.ru/pirogi/vozdushnaya-sharlotka-s-yablokami/"<<endl;
    }
    if (x ==9)
    { cout << "Картошка"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Воздушное картофельное пюре.https://nehudeem.ru/recipe/vozdushnoe-kartofelnoe-pyure/"<<endl;
    }
    if (x ==10)
    { cout << "Творог"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Творожная запеканка \"Неженка\".https://www.russianfood.com/recipes/recipe.php?rid=130686"<<endl;
    }
    if (x ==11)
    { cout << "Курица"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Куриный суп по-домашнему.https://eda.ru/recepty/supy/kurinij-sup-po-domashnemu-16144"<<endl;
    }
    if (x ==12)
    { cout << "Индейка"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Индейка запеченная в духовке «а-ля буженина».https://eda.ru/recepty/osnovnye-blyuda/indejka-zapechennaja-v-duhovke-a-lja-buzhenina-51193"<<endl;
    }
    if (x ==13)
    { cout << "Морковь"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Морковь по-корейски в домашних условиях.https://www.edimdoma.ru/retsepty/32408-morkov-po-koreyski-v-domashnih-usloviyah"<<endl;
    }
    if (x ==14)
    { cout << "Репчатый лук"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Классический французский луковый суп — вкус и текстура.https://andychef.ru/recipes/onion-soup/"<<endl;
    }
    if (x ==15)
    { cout << "Тыква"<<endl;
        cout<<"Нашла рецепт с этим продуктом.ТЫКВЕННАЯ КАША С РИСОМ НА МОЛОКЕ.https://1000.menu/cooking/28865-tykvennaya-kasha-s-risom-na-moloke"<<endl;
    }
    if (x ==16)
    { cout << "Сахар"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Быстрый сахарный сироп.https://eda.ru/recepty/napitki/bistrij-saharnij-sirop-simple-syrup-26778"<<endl;
    }
    if (x ==17)
    { cout << "Мед"<<endl;
        cout<<"Нашла рецепт с этим продуктом.Медовые пряники.https://eda.ru/recepty/vypechka-deserty/medovye-pryaniki-93456"<<endl;
    }
    
    return 0;
}
