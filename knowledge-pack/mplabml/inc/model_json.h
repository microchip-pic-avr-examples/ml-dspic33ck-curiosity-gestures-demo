#ifndef __MODEL_JSON_H__
#define __MODEL_JSON_H__

const char recognition_model_string_json[] = {"{\"NumModels\":1,\"ModelIndexes\":{\"0\":\"DSPIC_33_CK_GESTURE_RANK_1\"},\"ModelDescriptions\":[{\"Name\":\"DSPIC_33_CK_GESTURE_RANK_1\",\"ClassMaps\":{\"1\":\"Horizontal\",\"2\":\"Stationary\",\"3\":\"Vertical\",\"0\":\"Unknown\"},\"ModelType\":\"DecisionTreeEnsemble\",\"FeatureFunctions\":[\"Maximum\",\"Maximum\",\"ZeroCrossings\",\"ZeroCrossings\",\"MeanDifference\",\"75thPercentile\",\"75thPercentile\",\"Variance\",\"Variance\",\"Variance\",\"TwoColumnPeakToPeakDifference\",\"TwoColumnPeakToPeakDifference\",\"25thPercentile\",\"AbsoluteAreaofLowFrequency\",\"AbsoluteAreaofHighFrequency\",\"AbsoluteAreaofHighFrequency\",\"LinearRegressionStats\",\"LinearRegressionStats\",\"LinearRegressionStats\",\"LinearRegressionStats\",\"LinearRegressionStats\",\"Minimum\",\"Minimum\",\"InterquartileRange\",\"GlobalPeaktoPeakofHighFrequency\",\"AbsoluteAreaofSpectrum\",\"GlobalPeaktoPeak\",\"GlobalPeaktoPeak\"]}]}"};

int32_t recognition_model_string_json_len = sizeof(recognition_model_string_json);

#endif /* __MODEL_JSON_H__ */
