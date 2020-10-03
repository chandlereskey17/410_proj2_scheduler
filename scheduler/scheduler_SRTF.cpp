/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

//TODO fill in content
#include "../includes/scheduler_SRTF.h"

	bool sort_by_cpu(PCB &a, PCB &b) {
		return a.remaining_cpu_time < b.remaining_cpu_time;
	}


	bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
		return Scheduler::time_to_switch_processes(tick_count, p);
	}

	//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p) or time_to_switch_processes is called
	void Scheduler_SRTF::sort(){
		//sort(ready_q->, ready_q.end(), sort_by_cpu);
	}
