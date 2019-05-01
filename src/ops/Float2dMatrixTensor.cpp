/*
 * Fload2dMatrixTensor.cpp
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#include <elal/ml/ops/tensor/Float2dMatrixTensor.h>
#include <stdlib.h>
#include <stdio.h>

namespace elal {

Float2dMatrixTensor::Float2dMatrixTensor(int dx, int dy)
{
	m_data = (float *) malloc(dx*dy*sizeof(float));
}

Float2dMatrixTensor::~Float2dMatrixTensor()
{
	if(m_data != NULL)
	{
		free(m_data);
	}
}

} /* namespace elal */
