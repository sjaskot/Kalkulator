#pragma once

class StateMachine
{
public:;
	enum States
	{
		StateFirstNumber,
		StateSign,
		StateSecondNumber,
		StateResult
	};
public:
	void SetState(States state);
	States GetState();
public:
	StateMachine();
	~StateMachine();
	StateMachine(States sta);
private:
	States CurrentState;
};

