// 1. Hello World
#include <stdio.h>
int main() {
    // "Hello, World!" প্ৰিণ্ট কৰে
    printf("Hello, World!\n");
    return 0;
}

// 2. দুইটা সংখ্যা ইনপুট লৈ যোগফল প্ৰিণ্ট কৰা
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b); // দুইটা সংখ্যা লোৱা
    printf("%d\n", a + b); // যোগফল প্ৰিণ্ট
    return 0;
}

// 3. বৃত্তৰ এলাকা উলিওৱা
#include <stdio.h>
int main() {
    float r;
    scanf("%f", &r); // ৰেডিয়াছ লোৱা
    printf("%f\n", 3.14 * r * r); // এলাকা প্ৰিণ্ট
    return 0;
}

// 4. Temp variable ব্যৱহাৰ কৰি দুটা সংখ্যা অদল-বদল কৰা
#include <stdio.h>
int main() {
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = a; a = b; b = t; // অদল-বদল
    printf("%d %d\n", a, b);
    return 0;
}

// 5. দুটা সংখ্যাৰ ভিতৰত বৃহত্তমটো উলিওৱা
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) printf("%d\n", a);
    else printf("%d\n", b);
    return 0;
}

// 6. সংখ্যা Odd নে Even চোৱা
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    return 0;
}

// 7. Leap year চাবলৈ
#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);
    if((y%4==0 && y%100!=0) || y%400==0) printf("Leap\n");
    else printf("Not Leap\n");
    return 0;
}

// 8. সংখ্যা এটাৰ factorial উলিওৱা
#include <stdio.h>
int main() {
    int n, f=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) f *= i;
    printf("%d\n", f);
    return 0;
}

// 9. সংখ্যা এটাৰ গুণন তালিকা প্ৰিণ্ট কৰা
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=10; i++) printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}

// 10. সংখ্যা উল্টাই দৰ্শোৱা
#include <stdio.h>
int main() {
    int n, r=0;
    scanf("%d", &n);
    while(n>0) { r = r*10 + n%10; n /= 10; }
    printf("%d\n", r);
    return 0;
}

// 11. Prime সংখ্যা চোৱা
#include <stdio.h>
int main() {
    int n, f=1;
    scanf("%d", &n);
    if(n <= 1) f = 0;
    for(int i=2; i<n; i++) if(n%i==0) { f=0; break; }
    if(f) printf("Prime\n"); else printf("Not Prime\n");
    return 0;
}

// 12. সংখ্যা এটাৰ digit সমূহৰ যোগফল
#include <stdio.h>
int main() {
    int n, s=0;
    scanf("%d", &n);
    while(n>0) { s += n%10; n /= 10; }
    printf("%d\n", s);
    return 0;
}

// 13. Fibonacci Series প্ৰিন্ট কৰা
#include <stdio.h>
int main() {
    int n, a=0, b=1, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("%d ", a);
        c = a + b; a = b; b = c;
    }
    return 0;
}

// 14. Character এটা vowel নে consonant চোৱা
#include <stdio.h>
int main() {
    char c;
    scanf(" %c", &c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Vowel\n");
    else printf("Consonant\n");
    return 0;
}

// 15. Celsius to Fahrenheit পৰিৱর্তন কৰা
#include <stdio.h>
int main() {
    float c;
    scanf("%f", &c);
    printf("%f\n", (c*9/5)+32);
    return 0;
}