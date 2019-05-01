/*
 * Fload3dMatrixTensor.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT3DMATRIXTENSOR_H_
#define INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT3DMATRIXTENSOR_H_

namespace elal {

class Float3dMatrixTensor
{
public:
	Float3dMatrixTensor(int dx, int dy, int dz);
	virtual ~Float3dMatrixTensor();
};

} /* namespace elal */

#endif /* INCLUDE_ELAL_ML_OPS_TENSOR_FLOAT3DMATRIXTENSOR_H_ */
