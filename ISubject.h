#pragma once

class ISubject
{
	virtual void Subscribe(IObserver observer) = 0;
	virtual void Unsubscribe(IObserver observer) = 0;
};
