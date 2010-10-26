/*
 * UdfFunctions.h
 *
 *  Created on: 25/10/2010
 *      Author: Magno Machado
 */

#ifndef UDFFUNCTIONS_H_
#define UDFFUNCTIONS_H_

extern "C" {
    int begin_procedure(char *name);
    int begin_trigger(char *name);
    int begin_insert(char *name);
    int begin_update(char *name);
    int begin_delete(char *name);
    int end_operation(void);
    int begin_profile(void);
    int end_profile(char *logfile);
}

#endif /* UDFFUNCTIONS_H_ */
