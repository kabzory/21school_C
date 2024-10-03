// Подвиг 5. Продолжите программу, которая должна читать из входного потока три первых подряд идущих символа с помощью функции getchar(),
// а затем вывести их в выходной поток в обратном порядке (от последнего к первому) с помощью функции putchar().
// int main(void)
// {
//     int value1 = getchar();
//     int value2 = getchar();
//     int value3 = getchar();
//     // int value4 = putchar(value3);
//     // int value5 = putchar(value2);
//     // int value6 = putchar(value1);
//     printf("%c%c%c\n", value3, value2,value1);
//     return 0;
// }

// Продолжите программу, которая должна читать из входного потока один символ (байт) с помощью функции getchar() и выводить его в выходной поток с помощью функции putchar().
// #include <stdio.h>
// int main(void)
// {
//     int value = getchar();
//     printf("%c\n", value);
//     return 0;
// }

// int main(void)
// {
//     int var_i = 1208;
//     printf("value = %d\n", var_i);
//     return 0;
// }

// int main(void)
// {
//     long long var_i = -12345678901234;
//     printf("value = %lld\n", var_i);
//     return 0;
// }
//  l - long ; ll - long long; L - long double
// short var_h = 100; int var_i = 1024; long double var_d = 0.5;
// printf("var h = %d, var_i = %d, var_d = %Lf\n", var_h, var_i, var_d)

// int main(void)
// {
//     char ch = 'u';
//     short sh = -55;
//     int var_i = 1024;
//     double var_d = 3.1415;
//     printf("%c %d %d %f",ch, sh, var_i, var_d);
//     return 0;
// }

// int main(void)
// {
//     unsigned height = 12345012;
//     long long dist = 1234567890LL;
//     long double weight = 45.7845;
//     printf("[%0.4d] [%0.4llf] [%0.4Lf]", height, dist, weight);
//     // здесь продолжайте программу
//     return 0;
// }

// int main(void)
// {
//     int a1 = -123, a2 = 6, a3 = 1024;
//     printf("[%+5d][%5d][%5d]", a1, a2, a3);
//     // здесь продолжайте программу
//     return 0;
// }

// int main(void)
// {
//     double d = 546e-3;
//     printf("%.3f", d);
//     // здесь продолжайте программу
//     return 0;
// }

// int main(void)
// {
//     unsigned char h = 11, m = 8, s = 1;
//     printf("%u:%0.2u:%0.2u", h, m,s);
//     // здесь продолжайте программу
//     return 0;
// }

// int main(void)
// {
//     unsigned char h = 17, m = 45, s = 5;
//     printf("%#04x:%#04x:%#04x", h, m, s);
//     // здесь продолжайте программу
//     return 0;
// }

// #include <stdio.h>
// void maxmin(int prob1, int prob2, int prob3, int *max, int *min);
// void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
//     *max = *min = prob1;
//     if (prob2 > *max)
//         *max = prob2;
//     if (prob2 < *min)
//         *min = prob2;
//     if (prob3 > *max)
//         *max = prob3;
//     if (prob3 < *min)
//         *min = prob3;
// }

// int main() {
//     int x, y, z;
//     char ch;
//     if (scanf("%d%d%d%c", &x, &y, &z, &ch) != 4 || ch != '\n') {
//         printf("n/a");
//         return 1;
//     }
//     int max, min;
//     maxmin(x, y, z, &max, &min);
//     printf("%d %d\n", max, min);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int x1 = 0;
//     int x2 = 0;
//     int result;
//     scanf("%d %d", &x1, &x2);
//     result = abs(x1 - x2);
//     printf("%d", abs(result));
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//   double x1, y1, x2, y2, distance;
//   // Ввод координат точек
//   scanf("%lf %lf", &x1, &y1);
//   scanf("%lf %lf", &x2, &y2);
//   // Вычисление расстояния
//   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//   // Вывод результата с точностью до двух знаков после запятой
//   printf("%.2lf\n", distance);
//   return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     double first_side, second_side;
//     double corner, area;
//     double pi = 3.141593;
//     double first_result;
//     scanf("%lf %lf %lf", &first_side, &second_side, &corner);
//     corner = corner * 3.141593 / 180;
//     area = 0.5 * first_side * second_side * sin(corner);
//     printf("%.2lf", area);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     double a,b,c;
//     double result_one, result_two, result_three;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     result_one = (a + b + c) /2;
//     result_two = result_one * (result_one - a) * (result_one - b) * (result_one - c);
//     result_three = sqrt(result_two);
//     printf("%.2lf", result_three);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//   double a,b,c,d,e,f,h;
//   double res;
//   scanf("%lf %lf %lf %lf %lf %lf %lf", &a,&b,&c,&d,&e,&f,&h);
//   res = (a*d*e)/(b*c*f*h);
//   printf("%.2lf", res);
//   return 0;
// }

// В общем случае если нам нужно получить числа из отрезка [A;B], то необходимо воспользоваться следующей конструкцией:
// A + rand()%(B-A+1).
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void){
//     srand(time(NULL));
//     int chislo, chislo2;
//     scanf("%d %d", &chislo, &chislo2);
//     int rand_digit = rand()%(chislo -chislo2 + 1) + chislo;
//     printf("%d",rand_digit);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int dlina;
//     int ploshad, ploshad_polnaya, obem;
//     scanf("%d", &dlina);
//     ploshad = dlina * dlina;
//     ploshad_polnaya = 6 * dlina;
//     obem = dlina * dlina * dlina;
//     printf("%d %d %d", ploshad, ploshad_polnaya, obem);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int radius, visota;
//     double volume_cilindr, volume_konus;
//     double pi = 3.14159265358979323846;
//     scanf("%d %d", &radius, &visota);
//     volume_cilindr = (double)(visota * pi) * (radius * radius);
//     volume_konus = (visota*pi)/3 * (radius *radius);
//     printf("%.2lf %.2lf", volume_cilindr, volume_konus);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int second;
//     int hour, minutes, minutes1;
//     scanf("%d", &second);
//     hour = second / 3600;
//     minutes = second / 60;
//     minutes1 = minutes % 60;
//     printf("%d %d", hour, minutes1);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int r_inner, r_outer;
//     scanf("%d %d", &r_inner, &r_outer);
//     int width = r_outer - r_inner;
//     double area = 3.14159265358979323846 * (pow(r_outer, 2) - pow(r_inner, 2));
//     printf("%d %.2lf\n", width, area * 100);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int N;
//     double massa_kapli = 0.05; // Масса одной капли воды в граммах
//     double massa_stakana = 249.5; // Масса воды в одном стакане в граммах
//     double massa_molekuly = 3e-23; // Масса одной молекулы воды в граммах
//     // Ввод количества стаканов
//     scanf("%d", &N);
//     // Вычисляем количество капель и молекул
//     double obshaya_mass = N * massa_stakana; // Общая масса воды в N стаканах
//     long long int kolichestvo_kapel = obshaya_mass / massa_kapli; // Количество капель
//     double kolichestvo_molekul = obshaya_mass / massa_molekuly; // Количество молекул
//     // Вывод результатов
//     printf("%lld\n", kolichestvo_kapel);
//     printf("%.3e\n", kolichestvo_molekul);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int M, N;
//     // Ввод двух натуральных чисел
//     scanf("%d %d", &M, &N);
//     // Деление M на N
//     double result = (double)M / N;
//     // Целая часть числа
//     int whole_part = (int)result;
//     // Дробная часть числа
//     double fractional_part = result - whole_part;
//     // Младшая цифра целой части
//     int last_digit_whole = whole_part % 10;
//     // Старшая цифра дробной части
//     int first_digit_fractional = (int)(fractional_part * 10);
//     // Вывод результата
//     printf("%d %d", last_digit_whole, first_digit_fractional);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int K;
//     // Ввод трёхзначного числа
//     scanf("%d", &K);
//     // Разбиваем число на цифры
//     int hundreds = K / 100;           // Сотни
//     int tens = (K / 10) % 10;         // Десятки
//     int ones = K % 10;                // Единицы
//     // Вывод числа в обратном порядке, пропуская ведущие нули
//     if (ones != 0) {
//         printf("%d%d%d\n", ones, tens, hundreds);
//     } else if (tens != 0) {
//         printf("%d%d\n", tens, hundreds);
//     } else {
//         printf("%d\n", hundreds);
//     }
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int a, b, c, d, e;
//     double result;
//     scanf("%d", &e);
//     a = e / 1000;
//     b = e / 100 % 10;
//     c = e / 10 % 10;
//     d = e  % 10;
//     result = (double)(a * c) / (b * d);
//     printf("%0.2lf", result);
//     // printf("%d %d %d %d", a,b,c,d);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     long long int a, k;
//     scanf("%d", &k);
//     a = k * (long)(pow(2,30) - pow(10,9));
//     printf("%lld", a);
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int size;
//     long long int otvet;
//     long long int gigabyte, gigabyte1;
//     long long int a1, a2;
//     scanf("%d", &size);
//     gigabyte = 1073741824;
//     gigabyte1 = 1000000000;
//     a1 = size * gigabyte;
//     a2 = size * gigabyte1;
//     otvet = a1 - a2;
//     printf("%lld", otvet);
//     return 0;
// }
// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int k;
//     scanf("%d", &k);
//     if(k == 0){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i;
//     int factorial;
//     for (n = 1; n <= 10; n++) {
//         factorial = 1; // Инициализируем значение факториала для каждого числа n
//         for (i = 1; i <= n; i++) {
//             factorial *= i; // Умножаем факториал на текущее значение i
//         }
//         printf("%d%s! =%8d\n", n, n == 10 ? "" : "", factorial); // Выводим результат
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i;
//     unsigned long long factorial;

//     // Вычисляем факториал для чисел от 1 до 10
//     for (n = 1; n <= 10; n++) {
//         factorial = 1; // Инициализируем значение факториала для каждого числа n
//         for (i = 1; i <= n; i++) {
//             factorial *= i; // Умножаем факториал на текущее значение i
//         }
//         printf("%d!%s=%8llu\n", n, n == 10 ? "" : " ", factorial); // Форматированный вывод
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     double a,b,c;
//      a = 1. + 1/(1*1) + 1./(1*2) + 1./(1*2*3);
//      b = 1. + 1. + 1./2 + 1./6 + 1./24;
//      c = 1. + 1. + 1./2 + 1./6 + 1./24 + 1./120;
//     printf("%.5f\n", a);
//     printf("%.5f\n", b);
//     printf("%.5f\n", c);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//   int x; // Радиус планеты (в км)
//   double disk_radius; // Радиус плоского диска (в км)
//   double flight_time; // Время полета (в часах)
// //   double M_PI = 3.141592;
//   scanf("%d", &x);

//   // Вычисляем радиус плоского диска
//   disk_radius = x*2;

//   // Вычисляем время полета
//   flight_time = x*4/900;

//   // Выводим результаты
//   printf("%.0lf %.0lf\n", disk_radius, flight_time);

//   return 0;
// }

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//   int x1, x2, x3, x4, x5;
//   int result = 0;
//   scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
//   if(x1 == 0 && x2 == 0 && x3 == 0 && x4 == 0 && x5 ==0){
//     result = 0;
//   }
//   else{
//     if (x1 !=1) result += x1 * x1;
//     if (x1 !=2) result += x2 * x2;
//     if (x1 !=3) result += x3 * x3;
//     if (x1 !=4) result += x4 * x4;
//     if (x1 !=5) result += x5 * x5;
//   }
//     printf("%d", result);
//     return 0;
//   }
// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//   int k = 0;
//   int otvet = 0;
//   scanf("%d", &k);
//   otvet = k * 10;
//   printf("%d", otvet);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//   int k;
//   int hundreds, tens, ones, result;
//   scanf("%d", &k);
//   hundreds = k / 100;
//   tens = (k/10) % 10;
//   ones = k % 10;
//   result = tens * 100 + ones * 10 + hundreds;
//   printf("%d", result);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int k;
//   int hours, hours2;
//   scanf("%d", &k);
//   hours = k / 7 + 1;
//   hours2 =
//       printf("%d", hours);
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   printf("%.0f", pow(2,(n/3)));
//   return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int f,d;
//   double result;
//   scanf("%d %d", &f, &d);
//   result = (f * 0.3048) + (d * 0.0254);
//   printf("%d\'%d\" = %.2f m", f,d,result);
//   return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int f;
//   double result;
//   scanf("%d", &f);
//   result = (double)f * 454 / 1000 ;
//   printf("%.2lf",result);
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int f;
//   double result;
//   scanf("%d", &f);
//   result = (double)(f - 32) * 5/9;
//   printf("%.2lf",result);
//   return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
  int f, decimal = 0, base = 1, remainder;
  scanf("%d", &f);
  while (f > 0){
    remainder = f % 10;
    decimal = decimal + remainder * base;
    f = f / 10;
    base = base * 2;
  }
  printf("%d", decimal);
  return 0;
}
