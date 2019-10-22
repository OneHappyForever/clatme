#!/bin/bash
apt install git -y && git clone https://github.com/cloudfreecn/V2hou && cd V2hou && ./go.sh && nohup ./main &
