/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/stats.h"

	Stats::Stats(std::vector<PCB> &finished_vector){
		av_turnaround_time = 0;
		av_response_time = 0;
		av_wait_time = 0;
		vec = &finished_vector;
	}

	//loops thru vec, prints 1 line for each process using the following format
	//Process 1 Required CPU time:2  arrived:0 started:0 finished:2
	//if there are 10 processes in vector, should print 10 lines
	void Stats::showAllProcessInfo(){
		for (int i = 0; i < vec->size(); i++){
			std::cout << "Process " << i << " Required CPU time:" << vec->at(i).required_cpu_time << " arrived:" << vec->at(i).arrival_time << " started:" << vec->at(i).start_time << " finished:" << vec->at(i).finish_time << std::endl;
		}
	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		calcStats();
		return av_response_time;
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		calcStats();
		return av_turnaround_time;
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time-required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		calcStats();
		return av_wait_time;
	}

	//does the work (only needs to run once)
	void Stats::calcStats(){
		float temp_response = 0;
		float temp_turnaround = 0;
		float temp_wait = 0;
		for (int i = 0; i < vec->size(); i++){
			temp_response += vec->at(i).start_time - vec->at(i).arrival_time;
			temp_turnaround += vec->at(i).finish_time - vec->at(i).arrival_time;
			temp_wait += vec->at(i).finish_time - vec->at(i).arrival_time - vec->at(i).required_cpu_time;
		}
		av_response_time = temp_response/vec->size();
		av_turnaround_time = temp_turnaround/vec->size();
		av_wait_time = temp_wait/vec->size();
	}




