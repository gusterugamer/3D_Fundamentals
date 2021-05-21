#pragma once

#include <vector>
#include "Vec3.h"

struct IndexedLineList
{
	std::vector<Vec3> verts;
	std::vector<size_t> indices;
};