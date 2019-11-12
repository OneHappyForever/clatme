#!/bin/bash

timedatectl set-timezone Asia/Shanghai

apt install git -y 

git clone https://github.com/cloudfreecn/cf.git

cd cf

chmod +x *

bash go.sh


