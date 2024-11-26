#include "EDA/DataAnalysis.h"
#ifndef Linear
#define Linear()
#include <stdio.h>
#include <stdbool.h>

typedef struct {
  float slope;
  float intercept;
} Beta;

typedef struct {
  float value;
  bool is_valid;
} metricResult;

Beta *Fit_Model(float[], float[], size_t, size_t);
float *Predict_Model(float[], size_t, Beta);
float Cost_Function(float[], float *, size_t, size_t);
metricResult RMSE(float *, float *, size_t);
metricResult MSE(float *, float *, size_t);
void Stochastic_Gradient_Descent(float[], float[], Beta *, size_t, int, float);
void Free_Model(Beta *);
void Free_Split_Data(SplitData*);

#endif
