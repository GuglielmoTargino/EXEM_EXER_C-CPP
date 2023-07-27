#include<stdio.h>
#define DELAY 128000

struct my_time{
	int hours;
	int minutes;
	int seconds;
};
void display(struct my_time *t);
void update(struct my_time *t);
void delay(void);

void main (void){
	struct my_time systime;//systime é uma variável criada e declarada da estrutura my_time
                           //e por isso recebe seus elementos.
	
	systime.hours=0;
	systime.minutes;
	systime.seconds;
	for(; ; ){
		update(&systime);
		display(&systime);
	}
	
}
void update(struct my_time *t){
	t->seconds++;
	if(t->seconds==60){
		t->seconds=0;
		t->minutes++;
	}
	if(t->minutes==60){
		t->minutes=0;
		t->hours++;
	}
	if(t->hours==24) t->hours=0;
	delay();
}

void display(struct my_time *t){
	printf("%02d:",t->hours);
	printf("%02d:",t->minutes);
	printf("%02d\n", t->seconds);
}
void delay(void){
	long int t;
	// mude isso como preferir
	for(t=1;t<DELAY;++t);
}


