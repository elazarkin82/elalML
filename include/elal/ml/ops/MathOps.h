/*
 * MathOps.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_OPS_MATHOPS_H_
#define INCLUDE_ELAL_ML_OPS_MATHOPS_H_

#include "IOp.hpp"
#include <stdint.h>

IOp *conv(IOp *prev, IOp *kernel, IOp *bias);

IOp *add(IOp *prev, IOp *constTensor);

IOp *mul(IOp *prev, IOp *constTensor);

#endif /* INCLUDE_ELAL_ML_OPS_MATHOPS_H_ */
