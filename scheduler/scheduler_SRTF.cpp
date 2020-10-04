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
#include <algorithm>
#include <vector>

	bool sort_by_cpu(PCB &a, PCB &b) {
		return a.remaining_cpu_time > b.remaining_cpu_time;
	}

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
		sort();
		return Scheduler::time_to_switch_processes(tick_count, p);
	}

	//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p) or time_to_switch_processes is called
	void Scheduler_SRTF::sort(){
		std::vector<PCB> temp_vec;
		while (!ready_q->empty()){
			temp_vec.push_back(ready_q->front());
			ready_q->pop();
		}
		std::sort(temp_vec.begin(), temp_vec.end(), sort_by_cpu);

		for (int i = 0; i < temp_vec.size(); i++){
			ready_q->push(temp_vec.at(i));
		}
	}
