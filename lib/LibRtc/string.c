_CA *strCpy(_CA *d,_CA *s);
_CA *strNcpy(_CA *d,_CA *s,int n);
_CA *strCat(_CA *d,_CA *s);
_CA *strNcat(_CA *d,_CA *s,int n);
int strCmp(_CA *s1,_CA *s2);
int strNcmp(_CA *s1,_CA *s2,int n);
int strLen(_CA *s);
int strChr(_CA *s,char c);
int strRchr(_CA *s,char c);
int strStr(_CA *s1,_CA *s2);
_CA *strCpy(_CA *d,_CA *s){
{
int i;
(i=0);
for(;(((*_CCA(d,i,"../SrcCmm/string.cmm",36))=(*_CCA(s,i,"../SrcCmm/string.cmm",36)))!=0);(i=(i+1)))
;
}
return d;
}
_CA *strNcpy(_CA *d,_CA *s,int n){
int i;
(i=0);
{
;
for(;((i<(n+-1))&&((*_CCA(s,i,"../SrcCmm/string.cmm",44))!=0));(i=(i+1)))
((*_CCA(d,i,"../SrcCmm/string.cmm",45))=(*_CCA(s,i,"../SrcCmm/string.cmm",45)));
}
{
;
for(;(i<n);(i=(i+1)))
((*_CCA(d,i,"../SrcCmm/string.cmm",47))=0);
}
return d;
}
_CA *strCat(_CA *d,_CA *s){
int i;
(i=0);
for(;((*_CCA(d,i,"../SrcCmm/string.cmm",54))!=0);)
(i=(i+1));
{
int j;
(j=i);
for(;(((*_CCA(d,i,"../SrcCmm/string.cmm",56))=(*_CCA(s,(i-j),"../SrcCmm/string.cmm",56)))!=0);(i=(i+1)))
;
}
return d;
}
_CA *strNcat(_CA *d,_CA *s,int n){
int i;
(i=0);
for(;((*_CCA(d,i,"../SrcCmm/string.cmm",64))!=0);)
(i=(i+1));
{
int j;
(j=0);
for(;((j<(n+-1))&&((*_CCA(s,j,"../SrcCmm/string.cmm",66))!=0));((i=(i+1)),(j=(j+1))))
((*_CCA(d,i,"../SrcCmm/string.cmm",67))=(*_CCA(s,j,"../SrcCmm/string.cmm",67)));
}
((*_CCA(d,i,"../SrcCmm/string.cmm",68))=0);
return d;
}
int strCmp(_CA *s1,_CA *s2){
int i;
{
(i=0);
for(;((*_CCA(s1,i,"../SrcCmm/string.cmm",75))==(*_CCA(s2,i,"../SrcCmm/string.cmm",75)));(i=(i+1)))
{if(((*_CCA(s1,i,"../SrcCmm/string.cmm",76))==0))return 0;
}}
return ((*_CCA(s1,i,"../SrcCmm/string.cmm",77))-(*_CCA(s2,i,"../SrcCmm/string.cmm",77)));
}
int strNcmp(_CA *s1,_CA *s2,int n){
int i;
{
(i=0);
for(;((i<n)&&((*_CCA(s1,i,"../SrcCmm/string.cmm",83))==(*_CCA(s2,i,"../SrcCmm/string.cmm",83))));(i=(i+1)))
{if(((*_CCA(s1,i,"../SrcCmm/string.cmm",84))==0))return 0;
}}
{if((i>=n))return 0;
}return ((*_CCA(s1,i,"../SrcCmm/string.cmm",86))-(*_CCA(s2,i,"../SrcCmm/string.cmm",86)));
}
int strLen(_CA *s){
int i;
(i=0);
for(;((*_CCA(s,i,"../SrcCmm/string.cmm",92))!=0);)
(i=(i+1));
return i;
}
int strChr(_CA *s,char c){
int i;
{
(i=0);
for(;((*_CCA(s,i,"../SrcCmm/string.cmm",101))!=0);(i=(i+1)))
{if(((*_CCA(s,i,"../SrcCmm/string.cmm",102))==c))return i;
}}
return -1;
}
int strRchr(_CA *s,char c){
int i;
int j;
(j=-1);
{
(i=0);
for(;((*_CCA(s,i,"../SrcCmm/string.cmm",109))!=0);(i=(i+1)))
{if(((*_CCA(s,i,"../SrcCmm/string.cmm",110))==c))(j=i);
}}
return j;
}
int strStr(_CA *s1,_CA *s2){
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
{if(((*_CCA(s1,(i+j),"../SrcCmm/string.cmm",121))!=(*_CCA(s2,j,"../SrcCmm/string.cmm",121))))break;
}}
{if((j==l))return i;
}}
}
return -1;
}
