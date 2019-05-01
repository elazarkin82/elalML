/*
 * ITensor.hpp
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_NODE_TENSOR_ITENSOR_HPP_
#define INCLUDE_ELAL_ML_NODE_TENSOR_ITENSOR_HPP_

#include "../../node/IOp.hpp"

enum TensorType{INPUT_TENSOR, TENSOR_2D, TENSOR_3D, OUTPUT_TENSOR};

class ITensor:public IOp
{
public:

	ITensor(){}
};

#endif /* INCLUDE_ELAL_ML_NODE_TENSOR_ITENSOR_HPP_ */
