#pragma once
#include "Iobserver.h"
class Observer2: public Iobserver
{
public:
	Observer2(ISubject &Subject);
	void Update();
public:
	~Observer2(void);
};
