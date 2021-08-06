#!/bin/bash
for PID in $(ps -ef | grep 'qemu' | awk '{print $2}')
do

	if [ -z ${PID} ]; then
		echo "No process is running"
	else
		echo "kill ${PID}"
		kill ${PID}
	fi
done

