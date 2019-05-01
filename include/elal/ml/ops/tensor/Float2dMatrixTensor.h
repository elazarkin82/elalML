/*
 * Fload2dMatrixTensor.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT2DMATRIXTENSOR_H_
#define INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT2DMATRIXTENSOR_H_

//namespace elal{

#include "ITensor.hpp"

class Float2dMatrixTensor: public ITensor
{
private:
	float *m_data;

public:
	Float2dMatrixTensor(int dx, int dy);

	virtual ~Float2dMatrixTensor();
};

//} /* namespace elal */

#endif /* INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT2DMATRIXTENSOR_H_ */
