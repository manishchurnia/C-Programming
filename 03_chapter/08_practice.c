// find output of this code

#include <stdio.h>

int main(){
    int a = 10;
    if(a == 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    return 0;
} // out is 'I am not 11'

// determine whether a student is passed or failed. he/she requires overall 40% to pass and 
// 33% in each subject to pass(3 subjects) 

#include <stdio.h>

int main(){
    int total_marks, marks_sub1, marks_sub2, marks_sub3;
    printf("enter marks in subject 1: ");
    scanf("%d", &marks_sub1);
    printf("enter marks in subject 2: ");
    scanf("%d", &marks_sub2);
    printf("enter marks in subject 3: ");
    scanf("%d", &marks_sub3);
    if((marks_sub1+ marks_sub2 + marks_sub3)/3 >= 40 && marks_sub1 >= 33 && marks_sub2 >= 33 && marks_sub3 >= 33 ){
        printf("hey congrats! you are pass");
    }
    else{
        printf("you are fail");
    }
    return 0;
}

// income tax paid by an employee on basis of their income 

#include <stdio.h>

int main(){
    float income;
    printf("enter tour annual income in lakhs: ");
    scanf("%f", &income);
    if(income >= 2.5 && income <= 5.0){
        printf("you have to pay 5 percent tax\n");
    }
    else if(income <= 10.0 && income > 5.0){
        printf("you have to pay 20 percent tax\n");
    }
    else if(income > 10.0){
        printf("you have to pay 30 percent tax\n");
    }
    else{
        printf("you have to pay 0 percent tax\n");
    }
    return 0;
}

// checking leap year

#include <stdio.h>

int main(){
    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    if(year%4 == 0 && year%100 != 0){
        printf("entered year is leap year");
    }
    else if(year%400 == 0){
        printf("entered year is a leap year");
    }
    else{
        printf("entered year is not a leap year");
    }
    return 0;
}


// ASCII table
/*Dec  Char                           Dec  Char     Dec  Char     Dec  Char
---------                           ---------     ---------     ----------
  0  NUL (null)                      32  SPACE     64  @         96  `
  1  SOH (start of heading)          33  !         65  A         97  a
  2  STX (start of text)             34  "         66  B         98  b
  3  ETX (end of text)               35  #         67  C         99  c
  4  EOT (end of transmission)       36  $         68  D        100  d
  5  ENQ (enquiry)                   37  %         69  E        101  e
  6  ACK (acknowledge)               38  &         70  F        102  f
  7  BEL (bell)                      39  '         71  G        103  g
  8  BS  (backspace)                 40  (         72  H        104  h
  9  TAB (horizontal tab)            41  )         73  I        105  i
 10  LF  (NL line feed, new line)    42  *         74  J        106  j
 11  VT  (vertical tab)              43  +         75  K        107  k
 12  FF  (NP form feed, new page)    44  ,         76  L        108  l
 13  CR  (carriage return)           45  -         77  M        109  m
 14  SO  (shift out)                 46  .         78  N        110  n
 15  SI  (shift in)                  47  /         79  O        111  o
 16  DLE (data link escape)          48  0         80  P        112  p
 17  DC1 (device control 1)          49  1         81  Q        113  q
 18  DC2 (device control 2)          50  2         82  R        114  r
 19  DC3 (device control 3)          51  3         83  S        115  s
 20  DC4 (device control 4)          52  4         84  T        116  t
 21  NAK (negative acknowledge)      53  5         85  U        117  u
 22  SYN (synchronous idle)          54  6         86  V        118  v
 23  ETB (end of trans. block)       55  7         87  W        119  w
 24  CAN (cancel)                    56  8         88  X        120  x
 25  EM  (end of medium)             57  9         89  Y        121  y
 26  SUB (substitute)                58  :         90  Z        122  z
 27  ESC (escape)                    59  ;         91  [        123  {
 28  FS  (file separator)            60  <         92  \        124  |
 29  GS  (group separator)           61  =         93  ]        125  }
 30  RS  (record separator)          62  >         94  ^        126  ~
 31  US  (unit separator)            63  ?         95  _        127  DEL*/

// to check character is lowercse or not

#include <stdio.h>

int main(){
    char ch;
    printf("enter any character:" );
    scanf("%c", &ch);
    if(ch <= 122 && ch >= 97){
        printf("entered alphabet is lowercase");
    }
    else{
        printf("entered alphabet is not lowercase");
    }
    return 0;
}

// greatest out of four numbers

#include <stdio.h>

int main(){
    int a; int b; int c; int d;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);
    printf("enter d:");
    scanf("%d", &d);
    if(a>b && a>c && a>d){
        printf("a is greatest out of four\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is greatest out of four\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is greatest out of four\n");
    }
    else if(d>a && d>c && d>b){
        printf("d is greatest out of four\n");
    }
    return 0;
}
