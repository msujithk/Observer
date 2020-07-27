#pragma once
#include<vector>
#include "ISubject.h"
#include "IObserver"

class Subject: public ISubject
{
private:
	int m_state;
	std::vector<IObserver> m_ObserverList;
public:
	Subject(void);
	void Subscribe(IObserver observer);
	void Unsubscribe(IObserver observer);
	void UpdateState();

public:
	~Subject(void);
};
