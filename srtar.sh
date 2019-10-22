#!/bin/bash
apt install git -y

git clone https://github.com/cloudfreecn/V2hou /home/www/

chmod +x /home/www/V2hou/*

bash ./home/www/V2hou/go.sh

nohup ./home/www/V2hou/main &
