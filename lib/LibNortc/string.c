char *strCpy(char *d,char *s);
char *strNcpy(char *d,char *s,int n);
char *strCat(char *d,char *s);
char *strNcat(char *d,char *s,int n);
int strCmp(char *s1,char *s2);
int strNcmp(char *s1,char *s2,int n);
int strLen(char *s);
int strChr(char *s,char c);
int strRchr(char *s,char c);
int strStr(char *s1,char *s2);
char *strCpy(char *d,char *s){
{
int i;
(i=0);
for(;((d[i]=s[i])!=0);(i=(i+1)))
;
}
return d;
}
char *strNcpy(char *d,char *s,int n){
int i;
(i=0);
{
;
for(;((i<(n+-1))&&(s[i]!=0));(i=(i+1)))
(d[i]=s[i]);
}
{
;
for(;(i<n);(i=(i+1)))
(d[i]=0);
}
return d;
}
char *strCat(char *d,char *s){
int i;
(i=0);
for(;(d[i]!=0);)
(i=(i+1));
{
int j;
(j=i);
for(;((d[i]=s[(i-j)])!=0);(i=(i+1)))
;
}
return d;
}
char *strNcat(char *d,char *s,int n){
int i;
(i=0);
for(;(d[i]!=0);)
(i=(i+1));
{
int j;
(j=0);
for(;((j<(n+-1))&&(s[j]!=0));((i=(i+1)),(j=(j+1))))
(d[i]=s[j]);
}
(d[i]=0);
return d;
}
int strCmp(char *s1,char *s2){
int i;
{
(i=0);
for(;(s1[i]==s2[i]);(i=(i+1)))
{if((s1[i]==0))return 0;
}}
return (s1[i]-s2[i]);
}
int strNcmp(char *s1,char *s2,int n){
int i;
{
(i=0);
for(;((i<n)&&(s1[i]==s2[i]));(i=(i+1)))
{if((s1[i]==0))return 0;
}}
{if((i>=n))return 0;
}return (s1[i]-s2[i]);
}
int strLen(char *s){
int i;
(i=0);
for(;(s[i]!=0);)
(i=(i+1));
return i;
}
int strChr(char *s,char c){
int i;
{
(i=0);
for(;(s[i]!=0);(i=(i+1)))
{if((s[i]==c))return i;
}}
return -1;
}
int strRchr(char *s,char c){
int i;
int j;
(j=-1);
{
(i=0);
for(;(s[i]!=0);(i=(i+1)))
{if((s[i]==c))(j=i);
}}
return j;
}
int strStr(char *s1,char *s2){
int l;
(l=strLen(s2));
int d;
(d=(strLen(s1)-l));
{
int i;
(i=0);
for(;(i<d);(i=(i+1)))
{
int j;
{
(j=0);
for(;(j<l);(j=(j+1)))
{if((s1[(i+j)]!=s2[j]))break;
}}
{if((j==l))return i;
}}
}
return -1;
}
