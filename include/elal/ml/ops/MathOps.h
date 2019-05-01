/*
 * MathOps.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_OPS_MATHOPS_H_
#define INCLUDE_ELAL_ML_OPS_MATHOPS_H_

namespace elal {
namespace math {

#include "IOp.hpp"
#include <stdint.h>

elal::IOp *conv(elal::IOp *prev, elal::IOp *kernel, elal::IOp *bias);

elal::IOp *add(elal::IOp *prev, elal::IOp *constTensor);

elal::IOp *mul(elal::IOp *prev, elal::IOp *constTensor);

} /* namespace math */
} /* namespace elal */

#endif /* INCLUDE_ELAL_ML_OPS_MATHOPS_H_ */
