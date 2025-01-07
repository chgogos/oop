# Build a linux C++ development environment based on docker/vscode

<https://www.ddhigh.com/en/2023/10/20/build-a-linux-c-development-environment-based-on-docker-vscode/>


1. HOST: Launch an ubuntu:22.04 image (HOST)
```
$ docker run -itd --name LinuxDevelop ubuntu:22.04
```

2. HOST: Attach in the ubuntu container
```
$ docker exec -it LinuxDevelop /bin/bash
```

3. CONTAINER: Install g++ and other software in container "LinuxDevelop"
```
# apt update
# apt install build-essential cmake git vim -y
# g++ --version
# exit
```

4. HOST: Create a new docker image "linux_develop:1.0" based on the contents of the container "LinuxDevelop"  
```
$ docker commit LinuxDevelop linux_develop:1.0
```