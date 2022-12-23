# include <iostream>
# include <algorithm>

int main()

{
    // масив чисел 
    int arr[] = { 30, 40, -5, 3, -20, 11, 47, -12 };
    // std::sort сортируе масив від більшого до меншого, std::greater<> нам потрібен для того, щоб  сортувати  в порядку зменшення
    std::sort(std::begin(arr), std::end(arr), std::greater<>());
    // цикл, для сортування елементів масиву 
    for (int const &i: arr) {
    std::cout << i << ' ';
}

return 0;
}
