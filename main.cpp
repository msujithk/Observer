#include "main.h"
#include "Subject.h"
#include "Iobserver.h"
#include "Observer1.h"
#include "Observer2.h"
main::main(void)
{
	ISubject *subject = new Subject();
	Iobserver *observer1 = new Observer1(subject);
	Iobserver *observer2 = new Observer2(subject);


}

main::~main(void)
{
}
