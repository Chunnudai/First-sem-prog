#include <stdio.h>
int main ()
{
    int pop,ti,lf,im,ife;
    float m,f,tl,lm;
    pop=80000;
    m=pop*0.52;
    f=pop-m;
    tl=pop*0.48; //total population
    lm=pop*0.35; //literate male population
    lf=tl-lm; //literate female population
    im=m-lm; //illitirate male population
    ife=f-lf; //illitirate female population
    printf("The population of the town is %d with %f literate, with %f male and %f female in which %f are literamte man and %d literate women\n",pop,tl,m,f,lm,lf);
    printf("The population of illitirate man is %d\nThe population of illitirate womain is %d",im,ife);
    return 0;
}