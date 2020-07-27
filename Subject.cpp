#include "Subject.h"

Subject::Subject(void)
{
}

Subject::~Subject(void)
{
}

void Subject::Subscribe(IObserver observer)
{
	m_ObserverList.push_back(observer);
}

void Subject::Unsubscribe(IObserver observer)
{
	m_ObserverList.remove(observer);
}

void Subject::UpdateState()
{
	for (auto observer = m_ObserverList.begin(); observer != m_ObserverList.end(); ++observer) 
		observer.Update();
}
