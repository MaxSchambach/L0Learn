// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// L0LearnCV
Rcpp::List L0LearnCV(const arma::mat& X, const arma::vec& y, const std::string Loss, const std::string Penalty, const std::string Algorithm, const unsigned int NnzStopNum, const unsigned int G_ncols, const unsigned int G_nrows, const double Lambda2Max, const double Lambda2Min, const bool PartialSort, const unsigned int MaxIters, const double Tol, const bool ActiveSet, const unsigned int ActiveSetNum, const unsigned int MaxNumSwaps, const double ScaleDownFactor, unsigned int ScreenSize, const bool LambdaU, const std::vector< std::vector<double> > Lambdas, const unsigned int nfolds, const double seed);
RcppExport SEXP _L0Learn_L0LearnCV(SEXP XSEXP, SEXP ySEXP, SEXP LossSEXP, SEXP PenaltySEXP, SEXP AlgorithmSEXP, SEXP NnzStopNumSEXP, SEXP G_ncolsSEXP, SEXP G_nrowsSEXP, SEXP Lambda2MaxSEXP, SEXP Lambda2MinSEXP, SEXP PartialSortSEXP, SEXP MaxItersSEXP, SEXP TolSEXP, SEXP ActiveSetSEXP, SEXP ActiveSetNumSEXP, SEXP MaxNumSwapsSEXP, SEXP ScaleDownFactorSEXP, SEXP ScreenSizeSEXP, SEXP LambdaUSEXP, SEXP LambdasSEXP, SEXP nfoldsSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string >::type Loss(LossSEXP);
    Rcpp::traits::input_parameter< const std::string >::type Penalty(PenaltySEXP);
    Rcpp::traits::input_parameter< const std::string >::type Algorithm(AlgorithmSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type NnzStopNum(NnzStopNumSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type G_ncols(G_ncolsSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type G_nrows(G_nrowsSEXP);
    Rcpp::traits::input_parameter< const double >::type Lambda2Max(Lambda2MaxSEXP);
    Rcpp::traits::input_parameter< const double >::type Lambda2Min(Lambda2MinSEXP);
    Rcpp::traits::input_parameter< const bool >::type PartialSort(PartialSortSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type MaxIters(MaxItersSEXP);
    Rcpp::traits::input_parameter< const double >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const bool >::type ActiveSet(ActiveSetSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type ActiveSetNum(ActiveSetNumSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type MaxNumSwaps(MaxNumSwapsSEXP);
    Rcpp::traits::input_parameter< const double >::type ScaleDownFactor(ScaleDownFactorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ScreenSize(ScreenSizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type LambdaU(LambdaUSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector<double> > >::type Lambdas(LambdasSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type nfolds(nfoldsSEXP);
    Rcpp::traits::input_parameter< const double >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(L0LearnCV(X, y, Loss, Penalty, Algorithm, NnzStopNum, G_ncols, G_nrows, Lambda2Max, Lambda2Min, PartialSort, MaxIters, Tol, ActiveSet, ActiveSetNum, MaxNumSwaps, ScaleDownFactor, ScreenSize, LambdaU, Lambdas, nfolds, seed));
    return rcpp_result_gen;
END_RCPP
}
// L0LearnFit
Rcpp::List L0LearnFit(const arma::mat& X, const arma::vec& y, const std::string Loss, const std::string Penalty, const std::string Algorithm, const unsigned int NnzStopNum, const unsigned int G_ncols, const unsigned int G_nrows, const double Lambda2Max, const double Lambda2Min, const bool PartialSort, const unsigned int MaxIters, const double Tol, const bool ActiveSet, const unsigned int ActiveSetNum, const unsigned int MaxNumSwaps, const double ScaleDownFactor, unsigned int ScreenSize, const bool LambdaU, const std::vector< std::vector<double> > Lambdas);
RcppExport SEXP _L0Learn_L0LearnFit(SEXP XSEXP, SEXP ySEXP, SEXP LossSEXP, SEXP PenaltySEXP, SEXP AlgorithmSEXP, SEXP NnzStopNumSEXP, SEXP G_ncolsSEXP, SEXP G_nrowsSEXP, SEXP Lambda2MaxSEXP, SEXP Lambda2MinSEXP, SEXP PartialSortSEXP, SEXP MaxItersSEXP, SEXP TolSEXP, SEXP ActiveSetSEXP, SEXP ActiveSetNumSEXP, SEXP MaxNumSwapsSEXP, SEXP ScaleDownFactorSEXP, SEXP ScreenSizeSEXP, SEXP LambdaUSEXP, SEXP LambdasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string >::type Loss(LossSEXP);
    Rcpp::traits::input_parameter< const std::string >::type Penalty(PenaltySEXP);
    Rcpp::traits::input_parameter< const std::string >::type Algorithm(AlgorithmSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type NnzStopNum(NnzStopNumSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type G_ncols(G_ncolsSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type G_nrows(G_nrowsSEXP);
    Rcpp::traits::input_parameter< const double >::type Lambda2Max(Lambda2MaxSEXP);
    Rcpp::traits::input_parameter< const double >::type Lambda2Min(Lambda2MinSEXP);
    Rcpp::traits::input_parameter< const bool >::type PartialSort(PartialSortSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type MaxIters(MaxItersSEXP);
    Rcpp::traits::input_parameter< const double >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const bool >::type ActiveSet(ActiveSetSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type ActiveSetNum(ActiveSetNumSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type MaxNumSwaps(MaxNumSwapsSEXP);
    Rcpp::traits::input_parameter< const double >::type ScaleDownFactor(ScaleDownFactorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ScreenSize(ScreenSizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type LambdaU(LambdaUSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector<double> > >::type Lambdas(LambdasSEXP);
    rcpp_result_gen = Rcpp::wrap(L0LearnFit(X, y, Loss, Penalty, Algorithm, NnzStopNum, G_ncols, G_nrows, Lambda2Max, Lambda2Min, PartialSort, MaxIters, Tol, ActiveSet, ActiveSetNum, MaxNumSwaps, ScaleDownFactor, ScreenSize, LambdaU, Lambdas));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_L0Learn_L0LearnCV", (DL_FUNC) &_L0Learn_L0LearnCV, 22},
    {"_L0Learn_L0LearnFit", (DL_FUNC) &_L0Learn_L0LearnFit, 20},
    {NULL, NULL, 0}
};

RcppExport void R_init_L0Learn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
