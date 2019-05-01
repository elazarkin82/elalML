/*
 * BasicInputTensor.cpp
 *
 *  Created on: 1 May 2019
 *      Author: elazarkin
 */

#include <elal/ml/node/tensor/BasicInputTensor.h>
#include <stdlib.h>
#include <stdexcept>

BasicInputTensor::BasicInputTensor(InputTensorGetDataCallback *callback)
{
	if(callback == NULL)
		throw std::runtime_error("InputTensorGetDataCallback must be function and not NULL!\n");

	m_callback = callback;
}

BasicInputTensor::~BasicInputTensor()
{
	m_callback = NULL;
}

