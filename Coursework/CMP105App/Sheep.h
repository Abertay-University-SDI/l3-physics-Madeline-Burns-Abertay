#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Sheep :
	public GameObject
{

public:
	Sheep();
	~Sheep();

	void handleInput(float dt) override;
	void update(float dt) override;
	void setWorldSize(sf::Vector2f);

private:
	void checkWallAndBounce();
	const float ACCELERATION = 30.0f;
	const float DRAG_FACTOR = 0.95f;
	const float RESTITUTION_COEFF = -0.8f;
	sf::Vector2f m_acceleration, m_worldSize;

	Animation m_walkDown;
	Animation m_walkUp;
	Animation m_walkUpRight;
	Animation m_walkRight;
	Animation m_walkDownRight;

	Animation* m_currentAnimation;
};

