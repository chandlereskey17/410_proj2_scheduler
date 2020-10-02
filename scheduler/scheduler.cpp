/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/scheduler.h"


	void Scheduler::add(PCB p){

	}

	//get next process
	PCB Scheduler::getNext(){
		PCB p;
		return p;
	}

	//returns true if there are no  jobs in the readyQ
	//false otherwise
	bool Scheduler::isEmpty(){
		return true;
	}

	//if process has completed (used all its remaining_cpu_time) or
	//if we are using a preemptive scheduling algorithm and the
	//timeslice is over then its time to switch processes
	//returns:
	//true - switch processes
	//false - do not switch
	bool   Scheduler::time_to_switch_processes(int tick_count, PCB &p){
		return true;
	}

	// sort  ready_q based on the scheduler algorithm used whenever add(PCB p) is called
	void sort(){
		//pure virtual function
	}



