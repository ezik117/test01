
FROM gcr.io/oss-fuzz-base/base-builder
# Install the packages needed for building the project
RUN apt-get update && apt-get install -y make autoconf automake libtool

# Clone the relevant project
RUN git clone --depth 1 https://github.com/AdaLogics/test01 test01
WORKDIR test01
COPY build.sh $SRC/
