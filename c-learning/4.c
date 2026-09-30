#include <stdio.h>
#include <math.h>

// 处理 -0.00 的问题
double fix_zero(double x) {
    if (fabs(x) < 1e-6) return 0.0;
    return x;
}

int main() {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;

    // 1. 优先处理 a == 0 的情况（退化为一元一次方程或不是方程）
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Zero Equation\n");
            } else {
                printf("Not An Equation\n");
            }
        } else {
            // 变成一元一次方程 bx + c = 0
            double x = -c / b;
            printf("%.2f\n", fix_zero(x));
        }
        return 0;
    }

    // 2. 此时 a != 0，继续判断一元二次方程
    double de = b * b - 4 * a * c;
    double x1 = (-b + sqrt(de)) / (2 * a);
    double x2 = (-b - sqrt(de)) / (2 * a);

    if (de > 0) {
        // 两个不相等的实数根，先大后小
        if (x1 > x2) {
            printf("%.2f\n%.2f\n", fix_zero(x1), fix_zero(x2));
        } else {
            printf("%.2f\n%.2f\n", fix_zero(x2), fix_zero(x1));
        }
    } else if (de == 0) {
        // 只有一个根
        printf("%.2f\n", fix_zero(-b / (2 * a)));
    } else {
        // 两个复数根
        double real = fix_zero(-b / (2 * a));
        double imag = fabs(sqrt(-de) / (2 * a)); // 取绝对值保证虚部为正
        printf("%.2f+%.2fi\n", real, imag);
        printf("%.2f-%.2fi\n", real, imag);
    }

    return 0;
}