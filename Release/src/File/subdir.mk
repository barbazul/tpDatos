################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/File/Abstract.cpp \
../src/File/FileBlocks.cpp 

OBJS += \
./src/File/Abstract.o \
./src/File/FileBlocks.o 

CPP_DEPS += \
./src/File/Abstract.d \
./src/File/FileBlocks.d 


# Each subdirectory must supply rules for building sources it contributes
src/File/%.o: ../src/File/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/saasbook/tpDatos/src" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

