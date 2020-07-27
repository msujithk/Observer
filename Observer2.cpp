#include "Observer2.h"

Observer2::Observer2(ISubject &Subject)
{
	Subject.Subscribe(this);
}

Observer2::~Observer2(void)
{
}

void Observer1::Update()
{

}