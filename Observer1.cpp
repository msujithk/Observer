#include "Observer1.h"
#include "ISubject.h"
Observer1::Observer1(ISubject &Subject)
{
	Subject.Subscribe(this);
}

Observer1::~Observer1(void)
{
}

void Observer1::Update()
{

}
