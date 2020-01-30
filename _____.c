  
    void main() {
//4×4 keypad
#define KP_R1   RC4 // ROW 1

 #define KP_R2   RC5 // ROW 2
 
    #define KP_R3   RC6 // ROW 3
    
    #define KP_R4  RC7 // ROW 4
    
    
    
#define KP_c1   RC3 // colomn 1
#define KP_c2   RC2 //  colomn 2
#define KP_c3   RC1 //  colomn 3
 #define KP_c4   RC0 //  colomn 4
unsigned  char  keypad_read (void)




 {


//start  the  scanning process



KP_R1 = 0; //  scan keypress  on 1st  raw: 1, 2 3, A

KP_R2 = 1;

KP_R3= 1;

KP_R4 = 1;

__delay_us(30);

if (KP_Cl =  0)   return  "1";   //  Key   '1'   is  pressed

if (KP_C2 =  0)  return   "2";    //  Key   '2'   is  pressed

if  KP_C3 =  0)   return   "3";  //  Key   '3'   is  pressed

if (KP_C4 =  0)   return   "A"; //  Key   'A'   is  pressed, we will store as A



 KP_R1 = 1;    //  scan keypress on  2nd row: 4, 5, 6,B

KP_R2 = 0;

KP_R3 = 1;

KP_R4 = 1;

delay_us 30); 


if  (KP_C1 =  0)   return  "4"; //  Key   '4'   is  pressed

if  (KP_C2 =  0)  return  "5"; //  Key   '5'   is  pressed

if (KP_C3 =  0)     return  "6";//  Key   '6'   is  pressed

if (KP_C4 =  0)    return  "B";//  Key   'B'   is  pressed, we will store as B



 KP_R1 = 1;         //  scan keypress  on 3rd  row: 7,8, 9, C,

KP_R2 = 1;

KP_R3 = 0;

KP_R4 =0;

delay_us 30);


if  (KP_C1 =  0)     return  "7";     //  Key   '7'   is  pressed
if  (KP_C2 =  0)     return  "8";   //  Key   '8'   is  pressed
                    
if (KP_C3 =  0)   return  "9";     //  Key   '9'   is  pressed

if (KP_C4 =  0)  return  "C"; //  Key   'C'   is  pressed, we will store as  C
































return   ' 1'; return   ' 2';

return   ' 3';



r _

return



//  scan keypr'









return   re'; return   'Sr; return   'C'; return   ' 3';



//  Key   '1'   is  pressed //  Key   '2'   is  pressed //  Key   '3'   is  pressed

//  Key   'A'   is  pressed,   we



an  2nd maw: 4, 5, 6, B









//  Key   '4'   is  pressed //  Key   '5'   is  pressed //  Key   '6'   is  pressed //  Key   'B'   is  pressed, we









will store as A



























will stare as B





Kr 111 = 1; //  scan keypress  on 3rd  row: 7, a, 9,

Kr 112 = 1;

Kr  RS = 0;

Kr 14 = 1;

delay_us 30);

if Kr  Cl =  0) return   ' 7'; //  Key   '7'   is  pressed

if Kr  C2 =  0) return   ' 8'; //  Key   '8'   is  pressed

if :KP C3 =  0) return   'ar; //  Key   '9'   is  pressed

if :KIP C4 =  0) return   'C'; //  Key   'C'   is  pressed,



Kr  R1 = 1; I,  scan keypress  an 4th  raw: ?F 0,

KP  R2 = 1;

KP  R3 = 1;

Kr 114 = 0;

delay_us 30);










  }