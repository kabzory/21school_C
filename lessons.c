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
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int f, decimal = 0, base = 1, remainder;
//   scanf("%d", &f);
//   while (f > 0){
//     remainder = f % 10;
//     decimal = decimal + remainder * base;
//     f = f / 10;
//     base = base * 2;
//   }
//   printf("%d", decimal);
//   return 0;
// }
// #include <stdio.h>

// int main() {
//     int k, x;
//     int decimal = 0;
//     int multiplier = 1;

//     scanf("%d %d", &k, &x);

//     // Последовательно переводим цифры из k-ичной системы в десятичную
//     while (x > 0) {
//         int digit = x % 10;  // Извлекаем последнюю цифру
//         decimal += digit * multiplier;
//         multiplier *= k;
//         x /= 10;  // Удаляем последнюю цифру
//     }

//     // Выводим результат
//     printf("%d\n", decimal);

//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(){
//   int a,b;
//   scanf("%d %d", &a, &b);
//   if(a / b ==0){
//     printf("0");
//   }
//   else{
//     printf("%d", a % b);
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(){
//   int a,b,c;
//   scanf("%d %d %d", &a, &b, &c);
//   printf("%d %d", b%a, c%a);
//   return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//   int a,b,c,d,e;
//   scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//   printf("%d %d %d %d", (b+a)%26, (c+a)%26, (d+a)%26, (e+a)%26);
//   return 0;
// }
//     a = e / 1000;
//     b = e / 100 % 10;
//     c = e / 10 % 10;
//     d = e  % 10;
// #include <stdio.h>
// #include <math.h>
// int main(){
//   int a,b,c,d,e;
//   int a1,b1,c1,d1;
//   scanf("%d", &e);
//     a = e / 1000;
//     b = e / 100 % 10;
//     c = e / 10 % 10;
//     d = e  % 10;
//     a1 = (a + 7) %10;
//     b1 = (b +7) % 10;
//     c1 = (c+ 7) % 10;
//     d1 = (d+7) % 10;
//     printf("%d%d%d%d", c1,d1,a1,b1);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(){
//   int a,b,c,d,e;
//   int a1,b1,c1,d1;
//   scanf("%d", &e);
//     a = e / 1000;
//     b = e / 100 % 10;
//     c = e / 10 % 10;
//     d = e  % 10;
//     a1 = (a + 7) %10;
//     b1 = (b +7) % 10;
//     c1 = (c+ 7) % 10;
//     d1 = (d+7) % 10;
//     printf("%d%d%d%d", c1,d1,a1,b1);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x1,x2,x3,x4;
//     scanf("%1d%1d%1d%1d", &x1,&x2,&x3,&x4);
//     printf("%d%d%d%d", (x3+3)%10,(x4+3)%10,(x1+3)%10,(x2+3)%10);
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     // Исходные данные
//     const double rho0 = 1.29;
//     const double z = 1.25e-4;
//     int h;

//     // Ввод высоты
//     scanf("%d", &h);

//     // Вычисление плотности
//     double rho = rho0 * exp(-h * z);

//     // Вывод результата с точностью до двух знаков
//     printf("%.2f\n", rho);

//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main(){
//   const double No = 7.5e10;
//   const double T = 5570;
//   const double ln2 = log(2);
//   int k;
//   scanf("%d", &k);
//   double lambda = ln2 / T;
//   double N = No * exp(-lambda *k);
//   N /= 1e9;
//   printf("%.2f", N);
//   return 0;
// }
// #include <stdio.h>
// int main(void){

//   int k = 0, last = 0;

//   scanf("%d",&k);

//   last = k%10;

//   switch (last) {
//     default:
//       printf("0\n");
//       break;
//     case 1 :
//     case 9 :
//       printf("1\n");
//       break;
//     case 2 :
//     case 8 :
//       printf("4\n");
//       break;
//     case 5 :
//       printf("5\n");
//       break;
//     case 4 :
//     case 6 :
//       printf("6\n");
//       break;
//     case 3 :
//     case 7 :
//       printf("9\n");
//       break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main() {
//   setlocale(LC_ALL, "");
//   char s;
//   scanf("%c",&s);

//   switch (s) {
//     case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
//     case 'f' : printf("и себя и коня потеряешь!\n"); break;
//     case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
//   }

//   return 0;
// }
// #include <stdio.h>
// #include <locale.h>
// int main() {
//   setlocale(LC_ALL, "");
//   char s;
//   scanf("%c",&s);

//   switch (s) {
//     case '1' : printf("плохо\n"); break;
//     case '2' : printf("неудовлетворительно\n"); break;
//     case '3' : printf("удовлетворительно\n"); break;
//     case '4' : printf("хорошо\n"); break;
//     case '5' : printf("отлично\n"); break;
//   }

//   return 0;
// }
// #include <stdio.h>
// int main(){
//   int k;
//   scanf("%d", &k);
//   if (k % 2 == 0){
//     printf("Не любит");
//   }
//   else{
//     printf("Любит");
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     char a;
//     int b, c;
//     float result;
//     scanf("%c %d %d", &a, &b, &c);
//     // b_delit_c = b / c;
//     // b_minus_c = b - c;
//     // b_plus_c = b + c;
//     // b_umn_c = b * c;
//     switch (a)
//     {
//     case '+':
//         result = b + c;
//         printf("%.2f\n", result);
//         break;
//     case '-':
//         result = b - c;
//         printf("%.2f\n",result);
//         break;
//     case '*':
//         result = b * c;
//         printf("%.2f\n",result);
//         break;
//     case '/':
//         result = (float) b / c;
//         printf("%.2f\n",result);
//         break;
//     default:
//         printf("ERROR!\n");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     char c;
//     int a, b;
//     float result;
//     scanf("%d %d %c", &a, &b, &c);
//     switch (c)
//     {
//     case '+':
//         result = a + b;
//         printf("%.2f\n", result);
//         break;
//     case '-':
//         result = a - b;
//         printf("%.2f\n",result);
//         break;
//     case '*':
//         result = a * b;
//         printf("%.2f\n",result);
//         break;
//     case '/':
//         if (b == 0){
//         printf("ERROR!\n"); break;
//     }
//         result = (float) a / b;
//         printf("%.2f\n",result);
//         break;
//     default:
//         printf("ERROR!\n");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//   int age, height, weight;
//   char bov;
//   double result;
//   scanf("%c %d %d %d", &bov, &age, &height, &weight);
//   switch (bov)
//   {
//   case 'm':
//     result = 10 * weight + 6.25 * height - 5 * age + 5;
//     printf("|  BMR  |\n");
//     printf("|%7.2f|\n", result);
//     break;
//   case 'f':
//     result = 10 * weight + 6.25 * height - 5 * age - 161;
//     printf("|  BMR  |\n");
//     printf("|%7.2f|\n", result);
//     break;
//   default:
//     printf("ERROR!\n");
//     break;
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//   int day, month;
//   int result;
//   scanf("%d %d", &month, &day);
//   switch (month)
//   {
//   case 1:
//     result = 0 + day;
//     printf("%d", result);
//     break;
//   case 2:
//     result = 31 + day;
//     printf("%d", result);
//     break;
//   case 3:
//     result = 59 + day;
//     printf("%d", result);
//     break;
//   case 4:
//     result = 90 + day;
//     printf("%d", result);
//     break;
//   case 5:
//     result = 120 + day;
//     printf("%d", result);
//     break;
//   case 6:
//     result = 151 + day;
//     printf("%d", result);
//     break;
//   case 7:
//     result = 181 + day;
//     printf("%d", result);
//     break;
//   case 8:
//     result = 212 + day;
//     printf("%d", result);
//     break;
//   case 9:
//     result = 243 + day;
//     printf("%d", result);
//     break;
//   case 10:
//     result = 273 + day;
//     printf("%d", result);
//     break;
//   case 11:
//     result = 304 + day;
//     printf("%d", result);
//     break;
//   case 12:
//     result = 334 + day;
//     printf("%d", result);
//     break;
//   default:
//     printf("ERROR!\n");
//     break;
//   }
//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number, number_one, result;
//     scanf("%d %d", &number, &number_one);
//     switch (number)
//     {
//     case 1:
//         printf("%d", number_one);
//         break;
//     case 2:
//         result = (number_one / 10) * (number_one % 10);
//         printf("%d", result);
//         break;
//     case 3:
//         result = (number_one / 100) * ((number_one / 10) % 10) * (number_one % 10);
//         printf("%d", result);
//         break;
//     case 4:
//         result = (number_one / 1000) * ((number_one / 100) % 10) * ((number_one / 10) % 10) * (number_one % 10);
//         printf("%d", result);
//         break;
//     default:
//         printf("ERROR!");
//         break;
//     }
//     return 0;
// }
//     a = e / 1000;
//     b = e / 100 % 10;
//     c = e / 10 % 10;
//     d = e  % 10;

// #include <stdio.h>

// int main() {
//     int k;
//     scanf("%d", &k);

//     if (k % 10 == 1 && k != 11) {
//         printf("Мне %d год\n", k);
//     } else if (k % 10 >= 2 && k % 10 <= 4 && (k < 10 || k > 14)) {
//         printf("Мне %d года\n", k);
//     } else {
//         printf("Мне %d лет\n", k);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a == b)
//     {
//         printf("1");
//     }

//     else
//     {
//         printf("0");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x,y;
//     scanf("%d %d", &x, &y);
//     if(x > 0 && y > 0){
//         printf("1");
//     }
//     else if(x > 0 && y < 0){
//         printf("4");
//     }
//     else if(x < 0 && y < 0){
//         printf("3");
//     }
//     else if(x < 0 && y > 0){
//         printf("2");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     double x, y;
//     scanf("%lf %lf", &x, &y);

//     // Определение квадранта
//     int quadrant = (x > 0) * (y > 0) * 1 +  // I квадрант
//                    (x < 0) * (y > 0) * 2 +  // II квадрант
//                    (x < 0) * (y < 0) * 3 +  // III квадрант
//                    (x > 0) * (y < 0) * 4;   // IV квадрант

//     printf("%d\n", quadrant);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int temp;
//     scanf("%d", &temp);
//     if(temp > 60){
//         printf("Fire situation");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     int counter = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > 0)
//     {
//         counter = counter + 1;
//     }
//     if (b > 0)
//     {
//         counter = counter + 1;
//     }
//     if (c > 0)
//     {
//         counter = counter + 1;
//     }
//     printf("%d", counter);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     if(a > b || a == b){
//         printf("no");
//     }
//     else{
//         printf("yes");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x,y;
//     int x1,y1;
//     int result = 0,result2 = 0;
//     scanf("%d %d %d %d", &x, &y, &x1, &y1);
//     result = (x*x) + (y*y);
//     result2 = (x1*x1) + (y1 * y1);
//     if(result < result2){
//         printf("1");
//     }
//     else if(result > result2){
//         printf("2");
//     }
//     else{
//         printf("0");
//     }
//     return 0;

// }

// #include <stdio.h>

// int main(){
//     int a,b,c,d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     if(a == 1 && b == 0 && c == 2 && d == 4){
//         printf("open");
//     }
//     else{
//         printf("closed");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if((a == 2 || a == 4 || a == 8) && (b == 2 || b ==4 || b ==8) && (c == 2 || c ==4 || c ==8)){
//         printf("open");
//     }
//     else{
//         printf("closed");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int minutes;
//     int result;
//     scanf("%d", &minutes);
//     if(500 > minutes || 500 == minutes){
//         printf("350");
//     }
//     else if(minutes > 500){
//         printf("%d", (minutes - 500) * 2 + 350);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int day, month;
//     scanf("%d %d",&day, &month);
//     if(((day>=1 && day<=29) && (month == 2)) || ((day>=1 && day<=30) && (month == 4 || month == 6 || month == 9 || month == 11)) || ((day >=1 && day <=31) &&(month == 1 ||month == 3 || month == 5 || month == 7 || month ==8 || month == 10 || month == 12))){
//         printf("correct");
//     }
//     else{
//         printf("error");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int age;
//     scanf("%d", &age);
//     if(age <= 6){
//         printf("дошкольник");
//     }
//     if(7<=age && age <=18){
//         printf("школьник");
//     }
//     if(19 <=age && age <=59){
//         printf("рабочий");
//     }
//     if(age >=60){
//         printf("пенсионер");
//     }
//     return 0;
// }

// for (инициализация счетчика; условие; изменение счетчика)
//   оператор;
// for (int i = 0; i <= 100; i = i + 1) // увеличиваем счётчик на единицу
// // или
// for (int j = 13; j > 0; j = j / 2) // уменьшаем вдвое
// // или
// for (int k = -100; k != 0; k = k - 1) // уменьшаем счётчик на единицу
// // или
// for (int m = 255; m >= 0; m = m - 5) // уменьшаем счётчик на 5
// // или
// for (int q = 1; q < 1000; q = q * 2) //увеличиваем счётчик в два раза

// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i ++){
//         printf("%d ", i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int k, m;
//     int count = 0;
//     scanf("%d %d", &k, &m);
//     for (int i = k; i <= m; i++)
//     {
//         if (i > 0)
//         count = count + i;
//         {
//             printf("%d ", i);
//         }
//     printf("%d", count);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int K, M;
//     int count = 0;  // Счетчик натуральных чисел

//     // Ввод чисел K и M
//     scanf("%d %d", &K, &M);

//     // Печать натуральных чисел из диапазона
//     for (int i = K; i <= M; i++) {
//         if (i > 0) {  // Проверка на натуральное число
//             printf("%d ", i);
//             count++;
//         }
//     }

//     if (count == 0) {
//         printf("0\n");  // Если натуральных чисел нет, сразу выводим 0
//     } else {
//         printf("\n%d\n", count);  // Печать количества чисел на новой строке
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int k,m;
//     scanf("%d %d", &k, &m);
//     for (int i = m; i  >= k;i--){
//         printf("%d ", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int k, factorial = 1;
//     scanf("%d", &k);
//     for(int i = 1; i <= k; i++){
//         factorial *= i;
//     }
//     printf("%d", factorial);
// return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N); // Ввод N-го числа Фибоначчи

//     long long a = 1, b = 1, next; // Используем long long для больших чисел
//     if (N == 1 || N == 2) {
//         printf("1\n"); // Первые два числа Фибоначчи равны 1
//         return 0;
//     }

//     for (int i = 3; i <= N; i++) { // Считаем от 3 до N
//         next = a + b; // Следующее число Фибоначчи
//         a = b;        // Сдвигаем a и b
//         b = next;
//     }

//     printf("%lld\n", b); // Выводим результат
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int A,B;
//     scanf("%d %d", &A, &B);
//     for (int i = A; i <= B; i++){
//         for(int j = 0; j <= i - A; j++){
//             printf("%5d", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int A,B;
//     scanf("%d %d", &A, &B);
//     for (int i = A; i <= B; i++){
//         for(int j = 0; j < i; j++){
//             printf("%4d", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number;
//     int counter = 0;
//     scanf("%d", &number);
//     for (int i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//         {
//             printf("%d ", i);
//             counter++;
//         }
//     }
//     printf("\n");
//     printf("%d",counter);
//     return 0;
// }

