/*
 * Fload2dMatrixTensor.cpp
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#include <elal/ml/node/tensor/FloatTensor.h>

#include <stdlib.h>
#include <stdio.h>

FloatTensor::FloatTensor(int dx, int dy)
{
	m_data = (float *) malloc(dx*dy*sizeof(float));
}

FloatTensor::~FloatTensor()
{
	if(m_data != NULL)
	{
		free(m_data);
	}
}
