################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
DMA_MemoryToMemory.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
DMA_MemoryToMemory.list \

OBJCOPY_BIN += \
DMA_MemoryToMemory.bin \


# All Target
all: DMA_MemoryToMemory.elf secondary-outputs

# Tool invocations
DMA_MemoryToMemory.elf: $(OBJS) $(USER_OBJS) C:\Users\Tsap\Documents\DevelopmentProjects\Learning_C\Embedded\ Devices\ Examples\STM32F407VGT6\4.\ DMA\DMA_MemoryToMemory\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "DMA_MemoryToMemory.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\Tsap\Documents\DevelopmentProjects\Learning_C\Embedded Devices Examples\STM32F407VGT6\4. DMA\DMA_MemoryToMemory\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="DMA_MemoryToMemory.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

DMA_MemoryToMemory.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "DMA_MemoryToMemory.list"
	@echo 'Finished building: $@'
	@echo ' '

DMA_MemoryToMemory.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "DMA_MemoryToMemory.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
