static int a;
static char b=1;
static char _cmm_0T[]={1,0};
static char *e=_cmm_0T;
typedef struct _X X;
struct _X {
int a;
char b;
char *c;
};
#define _cmm_0S "abc"
static X _cmm_1T={1,1,_cmm_0S};
static X *h=&_cmm_1T;
#define _cmm_1S "abc"
#define _cmm_2S "def"
static X _cmm_2T={1,1,_cmm_1S};
static X _cmm_3T={2,0,_cmm_2S};
static X *_cmm_4T[]={&_cmm_2T,&_cmm_3T};
static X **i=_cmm_4T;
static char f1(char t){
(b=((a<0)&&t));
(b=(t&&(a<0)));
(b=0);
(b=1);
for(;(b==1);)
(b=(!b));
{
int i;
(i=0);
for(;(i==10);(i=(i+1)))
;
}
return (b==0);
}
