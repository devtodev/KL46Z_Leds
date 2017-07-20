
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

/* Begin of <includes> initialization, DO NOT MODIFY LINES BELOW */

#include "TSK1.h"
#include "FRTOS1.h"
#include "frtos_tasks.h"

/* End <includes> initialization, DO NOT MODIFY LINES ABOVE */

static portTASK_FUNCTION(HMITaskTask, pvParameters) {

  /* Write your task initialization code here ... */
  int state = 0;
  LED_GREEN_SetRatio16(0);
  LED_RED_SetRatio16(0xFFFF);
  for(;;) {
    /* Write your task code here ... */
	  FRTOS1_vTaskDelay(100/portTICK_RATE_MS);
	  LED_GREEN_SetRatio16(state);
	  state = (state == 0)?0xffff:0;
	  LED_RED_SetRatio16(state);
    /* You can use a task delay like
       vTaskDelay(1000/portTICK_RATE_MS);
     */
  }
  /* Destroy the task */
  vTaskDelete(HMITaskTask);
}

void CreateTasks(void) {
  if (FRTOS1_xTaskCreate(
     HMITaskTask,  /* pointer to the task */
      "HMITask", /* task name for kernel awareness debugging */
      configMINIMAL_STACK_SIZE + 1200, /* task stack size */
      (void*)NULL, /* optional task startup argument */
      tskIDLE_PRIORITY + 1,  /* initial priority */
      (xTaskHandle*)NULL /* optional task handle to create */
    ) != pdPASS) {
      /*lint -e527 */
      for(;;){}; /* error! probably out of memory */
      /*lint +e527 */
  }
}

