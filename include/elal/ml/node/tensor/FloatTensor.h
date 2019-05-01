/*
 * Fload2dMatrixTensor.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_NODE_TENSOR_FLOATTENSOR_H_
#define INCLUDE_ELAL_ML_NODE_TENSOR_FLOATTENSOR_H_

//namespace elal{

#include "../../node/tensor/ITensor.hpp"

class FloatTensor: public ITensor
{
private:
	float *m_data;

public:
	FloatTensor(int dx, int dy);

	virtual ~FloatTensor();
};

//} /* namespace elal */

#endif /* INCLUDE_ELAL_ML_NODE_TENSOR_FLOATTENSOR_H_ */
