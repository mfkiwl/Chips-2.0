#include <stdio.h>
void main(){
    unsigned a = input("a");
	assert(fget_double(a)==1);
	assert(fget_double(a)==2);
	assert(fget_double(a)==3);
	assert(fget_double(a)==4);
	assert(fget_double(a)==5);
	assert(fget_double(a)==6);
	assert(fget_double(a)==7);
	assert(fget_double(a)==8);
	assert(fget_double(a)==9);
	assert(fget_double(a)==10);
	report(1);
}
