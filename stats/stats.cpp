/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/stats.h"

	void Stats::showAllProcessInfo(){

	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		return 0.0;
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		return 0.0;
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time-required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		return 0.0;
	}




