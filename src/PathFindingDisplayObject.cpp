#include "PathFindingDisplayObject.h"

PathFindingDisplayObject::PathFindingDisplayObject(): m_currentTile(nullptr)
{
}

PathFindingDisplayObject::~PathFindingDisplayObject()
= default;

Tile* PathFindingDisplayObject::getTile()
{
	return m_currentTile;
}

void PathFindingDisplayObject::setTile(Tile* newTile)
{
	m_currentTile = newTile;
}
