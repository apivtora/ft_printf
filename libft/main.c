/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:31:56 by pkolomiy          #+#    #+#             */
/*   Updated: 2016/12/07 20:34:13 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>



void ri1(char *c){*c='1';}
void rit(unsigned int a, char *c){if(a<5)*c='1';else return;}
char rm(char c){return(c='1');}
char rmi(unsigned int a, char c){return(c=a+97);}
void lsdn(void *d, size_t n){free(d);(void)n;}
void lsi(t_list *a){a->content=ft_strdup("123");a->content_size=4;}
t_list *lsm(t_list *a){t_list *b=ft_lstnew("123", 4);(void)a;return (b);}


int main (){
int a=0;int b=0;int c=0;int d=0;int e=0;int f=0;int g=0;int h=0;int i=0;int j=0;
int k=0;int l=0;int m=0;int n=0;int o=0;int p=0;int q=0;int r=0;int t=0;int u=0;
int v=0;int w=0;int x=0;int y=9;
char s[10]="a1b2c3d4e";char s1[10]="a1b2c3d4e";char s2[10]="1a2b3c4d5";
char s3[10]="1a2b3c4d5";char *str;char *fstr;
//putnbr
printf("\e[30;1m                         -----ft_putnbr_fd-----\e[0m\n");
write(1,"1. ft_putnbr:\n\t[-2147483648] = [",32);
ft_putnbr(-2147483648);write(1,"]\n",2);write(1,"\t[2147483647] = [",17);
ft_putnbr(2147483647);write(1, "]\n", 2);write(1,"\t[0] = [",8);
ft_putnbr(0);write(1,"]\n",2);write(1,"\t[-1] = [",9);
ft_putnbr(-1);write(1,"]\n",2);
//putnbr_fd
printf("\e[30;1m                         -----ft_putnbr_fd-----\e[0m\n");
write(1,"2. ft_putnbr_fd:\n\t[-2147483648] = [",35);
ft_putnbr_fd(-2147483648,1);write(1,"]\n",2);write(1,"\t[2147483647] = [",17);
ft_putnbr_fd(2147483647,1);write(1, "]\n", 2);write(1,"\t[0] = [",8);
ft_putnbr_fd(0,1);write(1,"]\n",2);write(1,"\t[-1] = [",9);
ft_putnbr_fd(-1,1);write(1,"]\n",2);
//putchar
printf("\e[30;1m                         -----ft_putchar-----\e[0m\n");
ft_putchar(51);ft_putchar(46);ft_putchar(32);ft_putchar(102);ft_putchar(116);
ft_putchar(95);ft_putchar(112);ft_putchar(117);ft_putchar(116);ft_putchar(99);
ft_putchar(104);ft_putchar(97);ft_putchar(114);ft_putchar(32);ft_putchar(45);
ft_putchar(32);ft_putchar(27);ft_putchar(91);ft_putchar(49);ft_putchar(59);
ft_putchar(51);ft_putchar(50);ft_putchar(109);ft_putchar(79);ft_putchar(75);
ft_putchar(27);ft_putchar(91);ft_putchar(48);ft_putchar(109);ft_putchar(10);
//putchar_fd
printf("\e[30;1m                         -----ft_putchar_fd-----\e[0m\n");
ft_putchar_fd(52,1);ft_putchar_fd(46,1);ft_putchar_fd(32,1);
ft_putchar_fd(102,1);ft_putchar_fd(116,1);ft_putchar_fd(95,1);
ft_putchar_fd(112,1);ft_putchar_fd(117,1);ft_putchar_fd(116,1);
ft_putchar_fd(99,1);ft_putchar_fd(104,1);ft_putchar_fd(97,1);
ft_putchar_fd(114,1);ft_putchar_fd(95,1);ft_putchar_fd(102,1);
ft_putchar_fd(100,1);ft_putchar_fd(32,1);ft_putchar_fd(45,1);
ft_putchar_fd(32,1);ft_putchar_fd(27,1);ft_putchar_fd(91,1);
ft_putchar_fd(49,1);ft_putchar_fd(59,1);ft_putchar_fd(51,1);
ft_putchar_fd(50,1);ft_putchar_fd(109,1);ft_putchar_fd(79,1);
ft_putchar_fd(75,1);ft_putchar_fd(27,1);ft_putchar_fd(91,1);
ft_putchar_fd(48,1);ft_putchar_fd(109,1);ft_putchar_fd(10,1);
//putstr
printf("\e[30;1m                         -----ft_putstr-----\e[0m\n");
char fts[29]="5. ft_putstr - \e[1;32mOK\e[0m";ft_putstr(fts);printf("\n");
//putstr_fd
printf("\e[30;1m                         -----ft_putstr_fd-----\e[0m\n");
char sfd[32]="6. ft_putstr_fd - \e[1;32mOK\e[0m";ft_putstr_fd(sfd,1);
printf("\n");
//putendl
printf("\e[30;1m                         -----ft_putendl-----\e[0m\n");
char fte[30]="7. ft_putendl - \e[1;32mOK\e[0m";ft_putendl(fte);
//putendl_fd
printf("\e[30;1m                         -----ft_putendl_fd-----\e[0m\n");
char efd[33]="8. ft_putendl_fd - \e[1;32mOK\e[0m";ft_putendl_fd(efd,1);
//strlen
printf("\e[30;1m                         -----ft_strlen-----\e[0m\n");
printf("%d. ",y);y++;if(strlen("a1b2c3d4e")==ft_strlen("a1b2c3d4e"))
printf("ft_strlen - \e[1;32mOK\e[0m\n");
else printf("ft_strlen - \e[1;31mError\e[0m\n");
//atoi
printf("\e[30;1m                         -----ft_atoi-----\e[0m\n");
printf("%d. ",y);y++;if(atoi(" -34d4e")==ft_atoi(" -34d4e"))
printf("ft_atoi - \e[1;32mOK\e[0m\n");
else printf("ft_atoi - \e[1;31mError\e[0m\n");
//strcmp
printf("\e[30;1m                         -----ft_strcmp-----\e[0m\n");
printf("%d. ",y);y++;if(strcmp("a","ab")==ft_strcmp("a","ab")&&
(strcmp("\0","\200")==ft_strcmp("\0","\200")))
printf("ft_strcmp - \e[1;32mOK\e[0m\n");
else printf("ft_strcmp - \e[1;31mError\e[0m\n");
//strncmp
printf("\e[30;1m                         -----ft_strncmp-----\e[0m\n");
printf("%d. ",y);y++;if(strncmp("a","ab",3)==ft_strncmp("a","ab",3))
printf("ft_strncmp - \e[1;32mOK\e[0m\n");
else printf("ft_strncmp - \e[1;31mError\e[0m\n");
//strdup
printf("\e[30;1m                         -----ft_strdup-----\e[0m\n");
printf("%d. ",y);y++;str=strdup(s);fstr=ft_strdup(s1);
while(f!=9&&str!=fstr){if(fstr[f]==str[f])f++;else break;}
if(f==9||str==fstr)printf("ft_strdup - \e[1;32mOK\e[0m\n");
else printf("ft_strdup - \e[1;31mError\e[0m\n");
//strstr
printf("\e[30;1m                         -----ft_strstr-----\e[0m\n");
printf("%d. ",y);y++;str=strstr(s2,"b3c");fstr=ft_strstr(s3,"b3c");
while(e!=6&&str!=fstr){if(fstr[e]==str[e])e++;else break;}
if(e==6||str==fstr)printf("ft_strstr - \e[1;32mOK\e[0m\n");
else printf("ft_strstr - \e[1;31mError\e[0m\n");
//strnstr
printf("\e[30;1m                         -----ft_strnstr-----\e[0m\n");
printf("%d. ",y);y++;char *strn;char *fstrn;char *strn2;char *fstrn2;
strn=strnstr(s2,"b3c",5);fstrn=ft_strnstr(s3, "b3c", 5);
strn2=strnstr(s2,"b3c",9);fstrn2=ft_strnstr(s3,"b3c", 9);
while(k!=6&&strn2!=fstrn2){if(fstrn2[k]==strn2[k])k++;else break;}
if(k==6&&strn==fstrn)printf("ft_strnstr - \e[1;32mOK\e[0m\n");
else printf("ft_strnstr - \e[1;31mError\e[0m\n");
//strncpy
printf("\e[30;1m                         -----ft_strncpy-----\e[0m\n");
printf("%d. ",y);y++;strncpy(s,s2,4);ft_strncpy(s1,s3,4);
while(d!=9){if(s1[d]==s[d])d++;else break;}
if(d==9)printf("ft_strncpy - \e[1;32mOK\e[0m\n");
else printf("ft_strncpy - \e[1;31mError\e[0m\n");
//memset
printf("\e[30;1m                         -----ft_memset-----\e[0m\n");
printf("%d. ",y);y++;memset(s,'0',6);ft_memset(s1,'0',6);
while(a!=9){if(s1[a]==s[a])a++;else break;}
if(a==9)printf("ft_memset - \e[1;32mOK\e[0m\n");
else printf("ft_memset - \e[1;31mError\e[0m\n");
//bzero
printf("\e[30;1m                         -----ft_bzero-----\e[0m\n");
printf("%d. ",y);y++;bzero(s2,3);ft_bzero(s3,3);while(b!=9){
if(s2[b]==s3[b])b++;else break;}if(b==9)printf("ft_bzero - \e[1;32mOK\e[0m\n");
else printf("ft_bzero - \e[1;31mError\e[0m\n");
//strcpy
printf("\e[30;1m                         -----ft_strcpy-----\e[0m\n");
printf("%d. ",y);y++;strcpy(s,s2);ft_strcpy(s1,s3);while(c!=9){
if(s1[c]==s[c])c++;else break;}if(c==9)printf("ft_strcpy - \e[1;32mOK\e[0m\n");
else printf("ft_strcpy - \e[1;31mError\e[0m\n");
//memcpy
printf("\e[30;1m                         -----ft_memcpy-----\e[0m\n");
printf("%d. ",y);y++;const char src[10]="123456789";char dst[10]="abc---123";
memcpy(dst,src,10);const char src1[10]="123456789";char dst1[10]="abc---123";
ft_memcpy(dst1,src1,10);while(g!=9){if(dst1[g]==dst[g])g++;else break;}
if(g==9)printf("ft_memcpy - \e[1;32mOK\e[0m\n");
else printf("ft_memcpy - \e[1;31mError\e[0m\n");
//memccpy
printf("\e[30;1m                         -----ft_memccpy-----\e[0m\n");
printf("%d. ",y);y++;const char srcc[10]="123456789";char dstc[10]="abc---123";
memccpy(dstc,srcc,51,4);const char srcc1[10]="123456789";
char dstc1[10]="abc---123";ft_memccpy(dstc1,srcc1,51,4);while(h!=9){
if(dstc1[h]==dstc[h])h++;else break;}
if(h==9)printf("ft_memccpy - \e[1;32mOK\e[0m\n");
else printf("ft_memccpy - \e[1;31mError\e[0m\n");
//memmove
printf("\e[30;1m                         -----ft_memmove-----\e[0m\n");
printf("%d. ",y);y++;char lib[]="123456789abcd";char ft[]="123456789abcd";
memmove(lib+3,lib,7);ft_memmove(ft+3,ft,7);char *ft3=ft+3;char *lib3=lib+3;
while(i!=13){if(ft3[i]==lib3[i])i++;else break;}
if(i==13)printf("ft_memmove - \e[1;32mOK\e[0m\n");
else printf("ft_memmove - \e[1;31mError\e[0m\n");
//memchr
printf("\e[30;1m                         -----ft_memchr-----\e[0m\n");
printf("%d. ",y);y++;char mchr[]="123456789abc";char mchr1[]="123456789abc";
char *chr=memchr(mchr,53,6);char *chr1=memchr(mchr1,97,9);
char *fchr=ft_memchr(mchr,53,5);char *fchr1=ft_memchr(mchr1,97,2);
if(chr==fchr&&fchr1==chr1)printf("ft_memchr - \e[1;32mOK\e[0m\n");
else printf("ft_memchr - \e[1;31mError\e[0m\n");
//memcmp
printf("\e[30;1m                         -----ft_memcmp-----\e[0m\n");
printf("%d. ",y);y++;char mp[]="123Ωabcdefg";char mp1[]="123aBCDEFG";
int mpl=memcmp(mp,mp1,6);int mpf=ft_memcmp(mp,mp1,6);
if(mpf==mpl)printf("ft_memcmp - \e[1;32mOK\e[0m\n");
else printf("ft_memcmp - \e[1;31mError\e[0m\n");
//strcat
printf("\e[30;1m                         -----ft_strcat-----\e[0m\n");
printf("%d. ",y);y++;char cat[17]="123456789";char cat1[8]="abcdefg";
char fcat[17]="123456789";char fcat1[8]="abcdefg";strcat(cat,cat1);
ft_strcat(fcat,fcat1);while(j!=16){if(fcat[j]==cat[j])j++;else break;}
if(j==16)printf("ft_strcat - \e[1;32mOK\e[0m\n");
else printf("ft_strcat - \e[1;31mError\e[0m\n");
//strncat
printf("\e[30;1m                         -----ft_strncat-----\e[0m\n");
printf("%d. ",y);y++;char catn[17]="123456789";char catn1[8]="abcdefg";
strncat(catn,catn1,3);char fcatn[17]="123456789";char fcatn1[8]="abcdefg";
ft_strncat(fcatn,fcatn1,3);while(l!=12){if(fcatn[l]==catn[l])l++;else break;}
if(l==12)printf("ft_strncat - \e[1;32mOK\e[0m\n");
else printf("ft_strncat - \e[1;31mError\e[0m\n");
//strlcat
printf("\e[30;1m                         -----ft_strlcat-----\e[0m\n");
printf("%d. ",y);y++;char catl[6]="123";char catl1[3]="45";char fcatl[6]="123";
char fcatl1[3]="45";size_t lc1=ft_strlcat(fcatl,fcatl1,6);
size_t lc2=strlcat(catl,catl1,6);int lc=0;while(lc<6){if(catl[lc]==fcatl[lc])
lc++;else break;}if(lc1==lc2&&lc==6)printf("ft_strlcat - \e[1;32mOK\e[0m\n");
else printf("ft_strlcat - \e[1;31mError\e[0m\n");
//srtchr
printf("\e[30;1m                         -----ft_strchr-----\e[0m\n");
printf("%d. ",y);y++;char schr[]="123456789abc";char schr1[]="123456789abc";
char *hr;char *hr1;char *hr2;char *hr3;char *hr4;char *hr5;hr=strchr(schr,'0');
hr1=ft_strchr(schr1,'0');hr2=strchr(schr,'\0');hr3=ft_strchr(schr1,'\0');
hr4=strchr(schr,'8');hr5=ft_strchr(schr1,'8');while(m!=5){if(hr5[m]==hr4[m])m++;
else break;}if(m==5&&hr3!=NULL&&hr1==NULL){
if(strlen(hr3)==0)printf("ft_strchr - \e[1;32mOK\e[0m\n");}
else printf("ft_strchr - \e[1;31mError\e[0m\n");
//strrchr
printf("\e[30;1m                         -----ft_strrchr-----\e[0m\n");
printf("%d. ",y);y++;char chrr[]="1239459678abc";char chrr1[]="1239459678abc";
char *ch1;char *ch2;char *ch3;char *ch4;char *ch5;char *ch6;char *ch7;char *ch8;
char *ch9;char *ch10;int m1=0;int m2=0;int m3=0;ch1=strrchr(chrr,'\0');
ch2=strrchr(chrr,'0');ch3=strrchr(chrr,'1');ch4=strrchr(chrr,'9');
ch5=strrchr(chrr,'c');ch6=ft_strrchr(chrr1,'\0');ch7=ft_strrchr(chrr1,'0');
ch8=ft_strrchr(chrr1,'1');ch9=ft_strrchr(chrr1,'9');ch10=ft_strrchr(chrr1,'c');
while(m1!=13){if(ch8[m1]==ch3[m1]){m1++;while(m2!=7){if(ch9[m2]==ch4[m2]){m2++;
while(m3!=1){if(ch10[m3]==ch5[m3])m3++;}}}}else break;}
if(m1==13&&m2==7&&m3==1&&ch7==NULL&&ch6!=NULL){if(strlen(ch6)==0)printf
("ft_strrchr - \e[1;32mOK\e[0m\n");}
else printf("ft_strrchr - \e[1;31mError\e[0m\n");
//isalpha
printf("\e[30;1m                         -----ft_isalpha-----\e[0m\n");
printf("%d. ",y);y++;int is=0;int is1=0;while(is!=130){is++;
if(ft_isalpha(is)==1)is1++;}if(is1==52)printf("ft_isalpha - \e[1;32mOK\e[0m\n");
else printf("ft_isalpha - \e[1;31mError\e[0m\n");
//isdigit
printf("\e[30;1m                         -----ft_isdigit-----\e[0m\n");
printf("%d. ",y);y++;int id=0;int id1=0;while(id!=130){id++;
if(ft_isdigit(id)==1)id1++;}if(id1==10)printf("ft_isdigit - \e[1;32mOK\e[0m\n");
else printf("ft_isdigit - \e[1;31mError\e[0m\n");
//isalnum
printf("\e[30;1m                         -----ft_isalnum-----\e[0m\n");
printf("%d. ",y);y++;int an=0;int an1=0;while(an!=130){an++;
if(ft_isalnum(an)==1)an1++;}if(an1==62)printf("ft_isalnum - \e[1;32mOK\e[0m\n");
else printf("ft_isalnum - \e[1;31mError\e[0m\n");
//isascii
printf("\e[30;1m                         -----ft_isascii-----\e[0m\n");
printf("%d. ",y);y++;int as=0;int as1=0;while(as!=130){as++;
if(ft_isascii(as)==1)as1++;}
if(as1==127)printf("ft_isascii - \e[1;32mOK\e[0m\n");
else printf("ft_isascii - \e[1;31mError\e[0m\n");
//isprint
printf("\e[30;1m                         -----ft_isprint-----\e[0m\n");
printf("%d. ",y);y++;int sp=0;int sp1=0;while(sp!=999){sp++;
if(ft_isprint(sp)==1)sp1++;}if(sp1==95)printf("ft_isprint - \e[1;32mOK\e[0m\n");
else printf("ft_isprint - \e[1;31mError\e[0m\n");
//toupper
printf("\e[30;1m                         -----ft_toupper-----\e[0m\n");
printf("%d. ",y);y++;int tu=91;int tu1=0;
while(tu!=129){if(ft_toupper(tu)==toupper(tu))tu1++;tu++;}
if(tu1==38)printf("ft_toupper - \e[1;32mOK\e[0m\n");
else printf("ft_toupper - \e[1;31mError\e[0m\n");
//tolower
printf("\e[30;1m                         -----ft_tolower-----\e[0m\n");
printf("%d. ",y);y++;int tl=60;int tl1=0;
while(tl!=100){if(ft_tolower(tl)==tolower(tl))tl1++;tl++;}
if(tl1==40)printf("ft_tolower - \e[1;32mOK\e[0m\n");
else printf("ft_tolower - \e[1;31mError\e[0m\n");
//memalloc
printf("\e[30;1m                         -----ft_memalloc-----\e[0m\n");
printf("%d. ",y);y++;int *ma;char *ma1;char *ma2;ma=ft_memalloc(8);
ma1=ft_memalloc(8);ma2=ft_memalloc(-1);while(n!=8){if(ma1[n]=='\0')n++;
}if(ma[0]==0&&ma[1]==0&&ma[2]==0&&n==8&&ma2==NULL){
if(strlen(ma1)==0)printf("ft_memalloc - \e[1;32mOK\e[0m\n");}
else printf("ft_memalloc - \e[1;31mError\e[0m\n");
//memdel
printf("\e[30;1m                         -----ft_memdel-----\e[0m\n");
printf("%d. ",y);y++;void *del;del = ft_memalloc(4);ft_memdel(&del);
if(del==NULL)printf("ft_memdel - \e[1;32mOK\e[0m\n");
else printf("ft_memdel - \e[1;31mError\e[0m\n");
//strnew
printf("\e[30;1m                         -----ft_strnew-----\e[0m\n");
printf("%d. ",y);y++;char *rn1;char *rn2;rn1=ft_strnew(8);rn2=ft_strnew(-8);
while(o!=9){if(rn1[o]=='\0')o++;}
if(o==9&&rn2==NULL){if(strlen(rn1)==0)printf("ft_strnew - \e[1;32mOK\e[0m\n");}
else printf("ft_strnew - \e[1;31mError\e[0m\n");
//strdel
printf("\e[30;1m                         -----ft_strdel-----\e[0m\n");
printf("%d. ",y);y++;char *rd;rd=malloc(4);ft_strdel(&rd);
if(rd==NULL)printf("ft_strdel - \e[1;32mOK\e[0m\n");
else printf("ft_strdel - \e[1;31mError\e[0m\n");
//srtclr
printf("\e[30;1m                         -----ft_srtclr-----\e[0m\n");
printf("%d. ",y);y++;char td[]="123456789";ft_strclr(td);
while(p!=9){if(td[p]=='\0')p++;}if(p==9)
{if(strlen(td)==0)printf("ft_strclr - \e[1;32mOK\e[0m\n");}
else printf("ft_strclr - \e[1;31mError\e[0m\n");
//striter
printf("\e[30;1m                         -----ft_striter-----\e[0m\n");
printf("%d. ",y);y++;char ri[]="123456789";ft_striter(ri,ri1);
while(ri[q]){if(ri[q]=='1')q++;else break;}
if(q==9)printf("ft_striter - \e[1;32mOK\e[0m\n");
else printf("ft_striter - \e[1;31mError\e[0m\n");
//striteri
printf("\e[30;1m                         -----ft_striteri-----\e[0m\n");
printf("%d. ",y);y++;char rt[]="123456789";ft_striteri(rt,rit);
while(rt[r]){if(rt[r]=='1')r++;else break;}
if(r==5)printf("ft_striteri - \e[1;32mOK\e[0m\n");
else printf("ft_striteri - \e[1;31mError\e[0m\n");
//strmap
printf("\e[30;1m                         -----ft_strmap-----\e[0m\n");
printf("%d. ",y);y++;char rm1[]="123456789";char *rm2;rm2=ft_strmap(rm1,rm);
while(rm2[t]){if(rm2[t]=='1')t++;else break;}
if(t==9)printf("ft_strmap - \e[1;32mOK\e[0m\n");
else printf("ft_strmap - \e[1;31mError\e[0m\n");
//strmapi
printf("\e[30;1m                         -----ft_strmapi-----\e[0m\n");
printf("%d. ",y);y++;char rmi1[]="123456789";char *rmi2;
rmi2=ft_strmapi(rmi1,rmi);while(rmi2[u]){if(rmi2[u]==u+97)u++;else break;}
if(u==9)printf("ft_strmapi - \e[1;32mOK\e[0m\n");
else printf("ft_strmapi - \e[1;31mError\e[0m\n");
//strequ
printf("\e[30;1m                         -----ft_strequ-----\e[0m\n");
printf("%d. ",y);y++;if(ft_strequ("a","ab")==0&&ft_strequ("a","a")==1&&
ft_strequ("ab","a")==0)printf("ft_strequ - \e[1;32mOK\e[0m\n");
else printf("ft_strequ - \e[1;31mError\e[0m\n");
//strnequ
printf("\e[30;1m                         -----ft_strnequ-----\e[0m\n");
printf("%d. ",y);y++;if(ft_strnequ("a","abc1", 2)==0&&
ft_strnequ("1abcd","abc1",3)==0&&ft_strnequ("abcd","abcd",5)==1&&
ft_strnequ("abcde","abcd",4)==1)printf("ft_strnequ - \e[1;32mOK\e[0m\n");
else printf("ft_strnequ - \e[1;31mError\e[0m\n");
//strsub
printf("\e[30;1m                         -----ft_strsub-----\e[0m\n");
printf("%d. ",y);y++;char rs[]="123456789";char *rs1;rs1=ft_strsub(rs,3,5);
while(rs1[v])v++;if(v==5)printf("ft_strsub - \e[1;32mOK\e[0m\n");
else printf("ft_strsub - \e[1;31mError\e[0m\n");
//strjoin
printf("\e[30;1m                         -----ft_strjoin-----\e[0m\n");
printf("%d. ",y);y++;char jn[]="1234567";char jn1[]="123";char *jn2;int jn3=0;
int jn4=0;jn2=ft_strjoin(jn,jn1);while(w!=10){while(jn[jn3]){
if(jn2[w]==jn[jn3])w++;jn3++;}while(jn1[jn4]){if(jn2[w]==jn1[jn4])w++;jn4++;}}
if(w==10)printf("ft_strjoin - \e[1;32mOK\e[0m\n");
else printf("ft_strjoin - \e[1;31mError\e[0m\n");
//strtrim
printf("\e[30;1m                         -----ft_strtrim-----\e[0m\n");
printf("%d. ",y);y++;char tr[]="\n \t 123 4\t567  ";char *tr1;
tr1=ft_strtrim(tr);while(tr1[x])x++;
if(x==9)printf("ft_strtrim - \e[1;32mOK\e[0m\n");
else printf("ft_strtrim - \e[1;31mError\e[0m\n");
//strsplit
printf("\e[30;1m                         -----ft_strsplit-----\e[0m\n");
printf("%d. ",y);y++;char lt[]="**1234*56789abc";
char lt1[]="**1234*56789*abc***";int aa=-1;int aa1=0;
char lt2[]="123*4*5*6789abc";char lt3[]="1234*5678*9abc***";
char lt9[]="123456789";char lt4='*';char **lt5;char **lt6;char **lt7;
char **lt8;char **lt10;int aa2=0;lt5=ft_strsplit(lt,lt4);
lt6=ft_strsplit(lt1,lt4);lt7=ft_strsplit(lt2,lt4);
lt8=ft_strsplit(lt3,lt4);lt10=ft_strsplit(lt9,lt4);int aa3=0;int ab=-1;
int ab1=0;int ab2=0;int ab3=0;int ab4=0;int ac=-1;int ac1=0;int ac2=0;
int ac3=0;int ac4=0;int ac5=0;int ad=-1;int ad1=0;int ad2=0;int ad3=0;
int ad4=0;int ae=-1;int ae1=0;while(lt5[++aa]){char *lt11=lt5[aa];
while(lt11[aa1])aa1++;if(aa==0)aa2=aa1;if(aa==1)aa3=aa1;aa1=0;}
while(lt6[++ab]){char *lt12=lt6[ab];while(lt12[ab1])ab1++;if(ab==0)
ab2=ab1;if(ab==1)ab3=ab1;if(ab==2)ab4=ab1;ab1=0;}while(lt7[++ac])
{char *lt13=lt7[ac];while(lt13[ac1])ac1++;if(ac==0)ac2=ac1;if(ac==1)ac3=ac1;
if(ac==2)ac4=ac1;if(ac==3)ac5=ac1;ac1=0;}while(lt8[++ad]){char *lt14=lt8[ad];
while(lt14[ad1])ad1++;if(ad==0)ad2=ad1;if(ad==1)ad3=ad1;if(ad==2)ad4=ad1;ad1=0;
}while(lt10[++ae]){char *lt15=lt10[ae];while(lt15[ae1])ae1++;}
if(aa2==4&&aa3==8&&ab2==4&&ab3==5&&ab4==3&&ac2==3&&ac3==1&&ac4==1&&ac5==7&&
ad2==4&&ad3==4&&ad4==4&&ae1==9)printf("ft_strsplit - \e[1;32mOK\e[0m\n");
else printf("ft_strtrim - \e[1;31mError\e[0m\n");
//itoa
printf("\e[30;1m                         -----ft_itoa-----\e[0m\n");
printf("%d. ",y);y++;char *it=ft_itoa(-2147483647);int it6=0;
char *it1=ft_itoa(-2147483648);int it7=0;char *it2=ft_itoa(-2);int it8=0;
char *it3=ft_itoa(2147483647);int it9=0;int it10=0;char *it4=ft_itoa(2);
char *it5=ft_itoa(0);int it11=0;while(it[it6])it6++;while(it1[it7])it7++;
while(it2[it8])it8++;while(it3[it9])it9++;while(it4[it10])it10++;
while(it5[it11])it11++;if(it6==11&&it7==11&&it8==2&&it9==10&&it10==1&&it11==1)
printf("ft_itoa - \e[1;32mOK\e[0m\n");
else printf("ft_itoa - \e[1;31mError\e[0m\n");
//lstnew
printf("\e[30;1m                         -----ft_lstnew-----\e[0m\n");
printf("%d. ",y);y++;
char *lsn="123456789";t_list *tls=ft_lstnew(lsn,strlen(lsn)+1);
if(!strcmp(lsn,tls->content)){free(tls->content);free(tls);
printf("ft_lstnew - \e[1;32mOK\e[0m\n");}
else printf("ft_lstnew - \e[1;31mError\e[0m\n");
//lstdelone
printf("\e[30;1m                         -----ft_lstdelone-----\e[0m\n");
printf("%d. ",y);y++;
t_list *tdn=ft_lstnew(malloc(10),10);ft_lstdelone(&tdn,lsdn);
if(!tdn)printf("ft_lstdelone - \e[1;32mOK\e[0m\n");
else printf("ft_lstdelone - \e[1;31mError\e[0m\n");
//lstdel
printf("\e[30;1m                         -----ft_lstdel-----\e[0m\n");
printf("%d. ",y);y++;
t_list *tdl=ft_lstnew(ft_strdup("123456789"),10);
tdl->next=ft_lstnew(ft_strdup("abcdefg"),8);
ft_lstdel(&tdl,lsdn);
if(!tdl)printf("ft_lstdel - \e[1;32mOK\e[0m\n");
else printf("ft_lstdel - \e[1;31mError\e[0m\n");
//lstadd
printf("\e[30;1m                         -----ft_lstadd-----\e[0m\n");
printf("%d. ",y);y++;
t_list *tdd=ft_lstnew(ft_strdup("123456789"),10);
t_list *tdd1=ft_lstnew(ft_strdup("abcdefg"),8);
ft_lstadd(&tdd,tdd1);
if(tdd==tdd1&&!ft_strcmp(tdd->content,"abcdefg")&&tdd->content_size==8)
printf("ft_lstadd - \e[1;32mOK\e[0m\n");
else printf("ft_lstadd - \e[1;31mError\e[0m\n");
//lstiter
printf("\e[30;1m                         -----ft_lstiter-----\e[0m\n");
printf("%d. ",y);y++;
t_list *tdi=ft_lstnew(ft_strdup("abcd"),5);tdi->next=ft_lstnew(ft_strdup("qw"),3);
tdi->next->next=ft_lstnew(ft_strdup("098765"),7);ft_lstiter(tdi,lsi);
if(!ft_strcmp(tdi->content,"123")&&!ft_strcmp(tdi->next->content,"123")&&
!ft_strcmp(tdi->next->next->content,"123"))printf("ft_lstiter - \e[1;32mOK\e[0m\n");
else printf("ft_lstiter - \e[1;31mError\e[0m\n");
//lstmap
printf("\e[30;1m                         -----ft_lstmap-----\e[0m\n");
printf("%d. ",y);y++;t_list *tdm=ft_lstnew(ft_strdup("abcde"),6);
tdm->next=ft_lstnew(ft_strdup("qwe"),4);
tdm->next->next=ft_lstnew(ft_strdup("8765"),5);t_list *tdm1=ft_lstmap(tdm,lsm);
if(!ft_strcmp(tdm1->content,"123")&&!ft_strcmp(tdm1->next->content,"123")&&
!ft_strcmp(tdm1->next->next->content,"123")&&!ft_strcmp(tdm->content,"abcde")&&
!ft_strcmp(tdm->next->content,"qwe")&&!ft_strcmp(tdm->next->next->content,"8765"))
printf("ft_lstmap - \e[1;32mOK\e[0m\n");
else printf("ft_lstmap - \e[1;31mError\e[0m\n");
return(0);
}
