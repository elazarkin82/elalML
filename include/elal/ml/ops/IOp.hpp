/*
 * IOp.h
 *
 *  Created on: May 1, 2019
 *      Author: elazar
 */

#ifndef INCLUDE_ELAL_ML_OPS_IOP_HPP_
#define INCLUDE_ELAL_ML_OPS_IOP_HPP_

namespace elal
{

#include <stdio.h>
#include <stdlib.h>

class IOp
{
private:
	IOp *m_next;

public:
	IOp(){m_next = NULL;}
	IOp(IOp *next){m_next = next;}
	virtual ~IOp(){}
};

} /* namespace elal */

#endif /* INCLUDE_ELAL_ML_OPS_IOP_HPP_ */