
/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/

#ifndef _KB_TYPEDEFS_H_
#define _KB_TYPEDEFS_H_

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef float FLOAT;
typedef unsigned short NORMTYPE;

// clang-format off

/*
Expected sensor column ordering for each model

#define X_S_DSPIC_33_CK_GESTURE_RANK_1 0
#define Y_S_DSPIC_33_CK_GESTURE_RANK_1 1
#define Z_S_DSPIC_33_CK_GESTURE_RANK_1 2

*/

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct
{
    int16_t *data; // Array to columns to use
    int size;  // Total number of columns
} int16_data_t;

typedef struct
{
    float *data; // Array to params to use
    int size;  // Total number of params
} float_data_t;

struct compx
{
    float real;
    float imag;
};

struct compx_int16_t
{
    int16_t real;
    int16_t imag;
};



/** @struct model_results
 *  @brief This structure is used to get the output of the classifier before the classification
 *  @var typeID: the type of data stored in the feature vector
 *  @var size: The size of the data
 *  @var data: pointer to the data array
 */
typedef struct{
    uint8_t typeID; // 0 uint8_t, 1 int8_t, 2 uint16_t, 3 int16_t, 4 uint32_t, 5 int32_t, 6 float
    uint16_t size; // number of elements in the feature vector
    void * data; // pointer to the feature vector
} feature_vector_t;




/** @struct model_results
 *  @brief This structure is used to get the output of the classifier before the classification
 *  @var model_type: the type of model that is putting the results
 *  @var result: the output of the model
 *  @var output_tensor: output array from the model that stores information about classification, such as class probabilities
 */
typedef struct model_results
{
	uint8_t model_type;
    float result;
    float_data_t *output_tensor; // the output tensor results
} model_results_t;



typedef struct
{
    uint16_t influence; //influence of a pattern
    uint16_t category;  //category of pattern
    uint8_t *vector;    // vector containing the features of a pattern
} pme_pattern_t;

typedef struct
{
    uint16_t number_patterns; //influence of a pattern
    uint16_t pattern_length;  //category of pattern
} pme_model_header_t;



#ifdef __cplusplus
}
#endif
// clang-format on

#endif //_KB_TYPEDEFS_H_
