#Include<Stdio.H> 
#Include<Conio.H> 
Int Main()
{
int i, j; 
printf("\tprint : I Love You \n\n\n"); 
For (i= 1; i <= 9; i++)
 { 
printf("\t");
For (j = 1; j <= 33; j++)
 { 
if (i == 1 && (j <= 7 || (j >= 11 && j <= 13) || (j >= 19 && j <= 21) || j == 25 || j == 33)) printf("+");
 else 
{ 
   if (i == 1) printf(" ");
} 
  if (i == 2 && (j == 4 || (j >= 10 && j <= 14) || (j >= 18 && j <= 22) || j == 26 || j == 32)) printf("+");
  Else 
{
 if (i == 2) printf(" "); 
} 
if (i == 3 && (j == 4 || (j >= 10 && j <= 15) || (j >= 17 && j <= 22) || j == 27 || j == 31)) printf("+");
else 
{ 
if (i == 3) Printf(" "); 
} if (i == 4 && (j == 4 || (j >= 11 && j <= 21) || j == 28 || j == 30)) printf("+");
 else 
{ 
if (i == 4) printf(" "); 
} 
if (i == 5 && (j == 4 || (j >= 12 && j <= 20) || j == 29)) printf("+");
 else 
{ 
if (i == 5) printf(" "); 
} if (i == 6 && (j == 4 || (j >= 13 && j <= 19) || j == 29)) printf("+");
 else 
{ 
if (i == 6) printf(" "); 
} 
if (i == 7 && (j == 4 || (j >= 14 && j <= 18) || j == 29)) printf("+");
 else 
{
 if (i == 7) printf(" "); 
} 
if (i == 8 && (j == 4 || (j >= 15 && j<= 17) || j == 29)) printf("+");
 else 
{ 
if (i == 8) printf(" ");
 } 
if (i == 9 && (j <= 7 || j == 16 || j == 29)) printf("+");
 else 
{
 if (i == 9) printf(" "); 
}
 } 
printf("\n"); 
}
 return 0; 
}