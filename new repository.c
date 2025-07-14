#// 16. দুটা সংখ্যাৰ GCD আৰু LCM উলিওৱা
#include <stdio.h>
int main() {
    int a, b, gcd, lcm;
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
// 17. সংখ্যা এটাত কিমানটা digit আছে চোৱা
#include <stdio.h>
int main() {
    int n, count=0;
    scanf("%d", &n);
    while(n != 0) { count++; n /= 10; }
    printf("%d\n", count);
    return 0;
}
// 18. 1 ৰ পৰা 100 লৈ prime সংখ্যা প্ৰকাশ কৰা
#include <stdio.h>
int main() {
    for(int i=2; i<=100; i++) {
        int f = 1;
        for(int j=2; j<i; j++) {
            if(i % j == 0) { f = 0; break; }
        }
        if(f) printf("%d ", i);
    }
    return 0;
}
// 19. এটাৰেৰ ভিতৰত আটাইতকৈ ডাঙৰ সংখ্যা উলিওৱা
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int max = a[0];
    for(int i=1; i<n; i++) if(a[i] > max) max = a[i];
    printf("%d\n", max);
    return 0;
}
// 19. এটাৰেৰ ভিতৰত আটাইতকৈ ডাঙৰ সংখ্যা উলিওৱা
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int max = a[0];
    for(int i=1; i<n; i++) if(a[i] > max) max = a[i];
    printf("%d\n", max);
    return 0;
}
// 20. এটাৰেৰ উপাদান ascending order ত সাজোৱা
#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
        }
    }
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
// 21. দুটা মেট্ৰিক্স যোগ কৰা
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2];
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &b[i][j]);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 22. দুটা মেট্ৰিক্স গুণ কৰা
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2] = {0};
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &b[i][j]);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 23. মেট্ৰিক্সৰ transpose উলিওৱা
#include <stdio.h>
int main() 
{
    int a[2][2];
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
// 24. এটাৰেৰ ভিতৰত এটা উপাদান insert কৰা
#include <stdio.h>
int main() {
    int a[100], n, pos, val;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &pos, &val);
    for(int i=n; i>pos; i--) a[i] = a[i-1];
    a[pos] = val;
    for(int i=0; i<=n; i++) printf("%d ", a[i]);
    return 0;
}
// 25. এটাৰেৰ পৰা এটা উপাদান delete কৰা
#include <stdio.h>
int main() {
    int a[100], n, pos;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &pos);
    for(int i=pos; i<n-1; i++) a[i] = a[i+1];
    for(int i=0; i<n-1; i++) printf("%d ", a[i]);
    return 0;
}
/ /26. Linear search ব্যৱহাৰ কৰি এটা উপাদান search কৰা
#include <stdio.h>
int main() {
    int a[100], n, key, found=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if(a[i] == key) { found = 1; break; }
    }
    if(found) printf("Found\n");
    else printf("Not Found\n");
    return 0;
}
// 27. এখন string কopy কৰা
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    int i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("%s\n", str2);
    return 0;
}
// 28. Library function নব্যৱহাৰ কৰি string ৰ length উলিওৱা
#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    scanf("%s", str); // string ইনপুট লোৱা
    while(str[len] != '\0') len++; // শেষলৈকে count কৰা
    printf("%d\n", len); // দৈৰ্ঘ্য প্ৰকাশ
    return 0;
}
// 29. String palindrome নে নহয় চোৱা
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str); // string ইনপুট লোৱা
    int len = strlen(str);
    int f = 1;
    for(int i=0; i<len/2; i++) {
        if(str[i] != str[len-i-1]) { f = 0; break; } // উলটা মিল নাহিলে Not Palindrome
    }
    if(f) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
// 30. String ৰ ভিতৰত vowel, consonant, digit, space count কৰা
#include <stdio.h>
int main() {
    char str[100];
    int v=0, c=0, d=0, s=0;
    fgets(str, sizeof(str), stdin); // পূৰ্ণ string ইনপুট লোৱা
    for(int i=0; str[i] != '\0'; i++) {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
            char ch = str[i] | 32; // lowercase ত convert কৰা
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++; // vowel count
            else c++; // consonant count
        }
        else if(str[i]>='0' && str[i]<='9') d++; // digit count
        else if(str[i]==' ') s++; // space count
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", v, c, d, s);
    return 0;
}
// 31. switch-case ব্যৱহাৰ কৰি simple calculator
#include <stdio.h>
int main() {
    char op;
    int a, b;
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': if(b != 0) printf("%d\n", a / b); else printf("Divide by zero\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
// 32. Recursion ব্যৱহাৰ কৰি factorial উলিওৱা
#include <stdio.h>
int fact(int n) {
    if(n==0) return 1;
    return n * fact(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}
// 33. Recursion ব্যৱহাৰ কৰি nth Fibonacci উলিওৱা
#include <stdio.h>
int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
// 34. Pointer arithmetic দেখুওৱা
#include <stdio.h>
int main() {
    int a[] = {10, 20, 30};
    int *p = a;
    printf("%d %d %d\n", *p, *(p+1), *(p+2));
    return 0;
}
// 35. Pointer ব্যৱহাৰ কৰি দুটা সংখ্যা swap কৰা
#include <stdio.h>
void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
// 36. Function ব্যৱহাৰ কৰি bubble sort কৰা
#include <stdio.h>
void bubble(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    bubble(a, n);
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
/ 37. Structure ব্যৱহাৰ কৰি student info store আৰু print কৰা
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}
// 38. File ত data read/write কৰা
#include <stdio.h>
int main() {
    FILE *f;
    f = fopen("data.txt", "w");
    fprintf(f, "Hello File\n");
    fclose(f);
    f = fopen("data.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) putchar(c);
    fclose(f);
    return 0;
}
// 39. দুটা file merge কৰি তৃতীয় file ত save কৰা
#include <stdio.h>
int main() {
    FILE *f1, *f2, *f3;
    char ch;
    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "r");
    f3 = fopen("f3.txt", "w");
    while((ch = fgetc(f1)) != EOF) fputc(ch, f3);
    while((ch = fgetc(f2)) != EOF) fputc(ch, f3);
    fclose(f1); fclose(f2); fclose(f3);
    return 0;
}
// 40. malloc() আৰু free() ব্যৱহাৰ কৰি dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p, n;
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", &p[i]);
    for(int i=0; i<n; i++) printf("%d ", p[i]);
    free(p);
    return 0;
}