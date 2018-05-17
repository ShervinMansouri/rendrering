#pragma once
#ifndef CUBEREND_H
#define CUBEREND_H

#include "Geometry.h"
#include "stdafx.h"
#include <vector>
#include "vec\vec.h"
#include "vec\mat.h"
#include "ShaderBuffers.h"
#include "drawcall.h"
#include "mesh.h"

class CubeRend : public Geometry_t
{
	std::vector<vertex_t> vertices;
	std::vector<unsigned> indices;
	unsigned nbr_indices = 0;

public:

	CubeRend(ID3D11Device* dx3ddevice,
		ID3D11DeviceContext* dx3ddevice_context);

	virtual void render() const;

	~CubeRend();
};

#endif