#pragma once

#include <aEng.h>

class TestObject : public aEng::GameObject
{
public:
	TestObject();

	void Update(float deltaTime) override;

private:

};