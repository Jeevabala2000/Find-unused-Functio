#include <stdio.h>

static void firstStatic_1(void);

static void secondStatic_1(void);

void firstExtern_1(void);

void secondExtern_1(void);

extern void firstExtern(void);

void secondExtern(void);

void foo1(void);

void foo2(void);

void bar1(void);

void bar2(void);

int main() {
  int view_1(void)
{
printf("view_1\n");
}
int view_2(void)
{
printf("view_2\n");
}
view_2();

void (*functions[])(void) = { foo1, foo2, bar1, bar2 };

static void firstStatic_1(void) 

 {

 }

static void secondStatic_1(void)
 
{ 

}

void firstExtern_1(void)  
{ 

}

void secondExtern_1(void) 
{ 

}


void
thirdExtern(void)

{

firstExtern();

secondExtern();

}

}