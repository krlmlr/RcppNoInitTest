#include <Rcpp.h>

using namespace Rcpp;

//' @importFrom Rcpp compileAttributes
//' @useDynLib RcppNoInitTest, .registration = TRUE
// [[Rcpp::export]]
IntegerVector test() {
  IntegerVector ret(no_init(1));
  return ret;
}
