#ifndef COMMON_HPP
#define COMMON_HPP

#include <vector>
#include <boost/shared_array.hpp>
#include "CPDYN.hpp"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#define name2str(name) (#name)

typedef std::vector< boost::shared_array< double > > DoubleArrayVector;
typedef std::vector< boost::shared_array< int > > IntArrayVector;

const double zc=0.7;
const double g=9.8;
const double omega=sqrt(g/zc);

#endif
