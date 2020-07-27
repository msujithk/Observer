#pragma once
#include "Iobserver.h"
class Observer1: public Iobserver
{
public:
	Observer1(ISubject &Subject);
	void Update();
public:
	~Observer1(void);

};
