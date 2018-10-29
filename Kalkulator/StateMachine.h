#pragma once

class StateMachine
{
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
	StateMachine(States & sta);
	~StateMachine();
private:
	States CurrentState;
};

