char isSpace(char c){
return ((((((9==c)||(10==c))||(11==c))||(12==c))||(13==c))||(32==c));
}
char isDigit(char c){
return ((48<=c)&&(c<=57));
}
char isXdigit(char c){
return ((isDigit(c)||((65<=c)&&(c<=70)))||((97<=c)&&(c<=102)));
}
char isPrint(char c){
return (32<=c);
}
char isLower(char c){
return ((97<=c)&&(c<=122));
}
char isUpper(char c){
return ((65<=c)&&(c<=90));
}
char isAlpha(char c){
return (isUpper(c)||isLower(c));
}
char isAlnum(char c){
return (isDigit(c)||isAlpha(c));
}
char toLower(char c){
{if(isUpper(c))(c=(0xff&(c+32)));
}return c;
}
char toUpper(char c){
{if(isLower(c))(c=(0xff&(c+-32)));
}return c;
}
