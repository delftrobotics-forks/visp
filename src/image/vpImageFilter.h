/****************************************************************************
 *
 * $Id$
 *
 * Copyright (C) 1998-2010 Inria. All rights reserved.
 *
 * This software was developed at:
 * IRISA/INRIA Rennes
 * Projet Lagadic
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * http://www.irisa.fr/lagadic
 *
 * This file is part of the ViSP toolkit
 *
 * This file may be distributed under the terms of the Q Public License
 * as defined by Trolltech AS of Norway and appearing in the file
 * LICENSE included in the packaging of this file.
 *
 * Licensees holding valid ViSP Professional Edition licenses may
 * use this file in accordance with the ViSP Commercial License
 * Agreement provided with the Software.
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Contact visp@irisa.fr if any conditions of this licensing are
 * not clear to you.
 *
 * Description:
 * Various image tools, convolution, ...
 *
 * Authors:
 * Eric Marchand
 *
 *****************************************************************************/



#ifndef vpImageFilter_H
#define vpImageFilter_H

/*!
  \file vpImageFilter.h
  \brief  Various image filter, convolution, etc...

*/

#include <fstream>
#include <iostream>
#include <math.h>
#include <string.h>

#include <visp/vpConfig.h>
#include <visp/vpImageException.h>
#include <visp/vpImage.h>
#include <visp/vpMatrix.h>
#include <visp/vpMath.h>

/*!
  \class vpImageFilter

  \ingroup ImageFiltering

  \brief  Various image filter, convolution, etc...

*/
class VISP_EXPORT vpImageFilter
{

public:
  static void filter(const vpImage<double> &I,
		     vpImage<double>& Iu,
		     vpImage<double>& Iv,
		     const vpMatrix& M) ;


  static void filter(const vpImage<unsigned char> &I,
		     vpImage<double>& If,
		     const vpMatrix& M) ;

  static double gaussianFilter(vpImage<unsigned char> &I, 
			       const int r, 
			       const int c) ;

  static double  derivativeFilterX(vpImage<unsigned char> &I,
				   const int r, int c) ;

  static double  derivativeFilterY(vpImage<unsigned char> &I,
				   const int r, int c) ;

  static void  coefficientGaussianDerivative(double *fg, const int t) ;


  static double derivativeFilterX(vpImage<unsigned char> &I, 
			   const int r, const int c, 
			   double *filter,   const int size)  ;
  
  static double  derivativeFilterY(vpImage<unsigned char> &I, 
				   const int r, const int c, 
				   double *filter, const int size) ;
} ;


#endif


/*
 * Local variables:
 * c-basic-offset: 2
 * End:
 */
