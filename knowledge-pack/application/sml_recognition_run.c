#include "kb.h"
#include "kb_output.h"

#include <string.h>
#ifdef SML_USE_TEST_DATA
#include "testdata.h"
int32_t td_index = 0;
#endif // SML_USE_TEST_DATA

#define KB_MODEL_DSPIC_33_CK_GESTURE_RECOGNITION_RANK_3_INDEX 0

#define SERIAL_OUT_CHARS_MAX 512

static char serial_out_buf[SERIAL_OUT_CHARS_MAX];

void sml_output_results(uint16_t model, uint16_t classification)
{
    memset(serial_out_buf, 0, SERIAL_OUT_CHARS_MAX);
    kb_sprint_model_result(model, serial_out_buf, false, false, true);
    
    printf("%s\n", serial_out_buf);
}



   int32_t sml_recognition_run(int16_t *data, int32_t num_sensors)
{
	int32_t ret;
	//FILL_RUN_MODEL_CUSTOM
    ret = kb_run_model((int16_t *)data, num_sensors, KB_MODEL_DSPIC_33_CK_GESTURE_RECOGNITION_RANK_3_INDEX);
		if (ret >= 0){
			//sml_output_results(KB_MODEL_DSPIC_33_CK_GESTURE_RECOGNITION_RANK_3_INDEX, ret);  // Uncomment to see output sensor
			kb_reset_model(0);
		};
    
	return ret;
}

