/*
 * BasicInputTensor.h
 *
 *  Created on: 1 May 2019
 *      Author: elazarkin
 */

#ifndef INCLUDE_ELAL_ML_NODE_TENSOR_BASICINPUTTENSOR_H_
#define INCLUDE_ELAL_ML_NODE_TENSOR_BASICINPUTTENSOR_H_

typedef void (InputTensorGetDataCallback)(float *);

class BasicInputTensor
{
private:
	InputTensorGetDataCallback *m_callback;
public:
	BasicInputTensor(InputTensorGetDataCallback *callback);
	virtual ~BasicInputTensor();
};

#endif /* INCLUDE_ELAL_ML_NODE_TENSOR_BASICINPUTTENSOR_H_ */
