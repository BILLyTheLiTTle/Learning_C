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
Timers_GeneralPurposeTimerInterruptDMAMode.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Timers_GeneralPurposeTimerInterruptDMAMode.list \

OBJCOPY_BIN += \
Timers_GeneralPurposeTimerInterruptDMAMode.bin \


# All Target
all: Timers_GeneralPurposeTimerInterruptDMAMode.elf secondary-outputs

# Tool invocations
Timers_GeneralPurposeTimerInterruptDMAMode.elf: $(OBJS) $(USER_OBJS) C:\Users\Tsap\Documents\DevelopmentProjects\Learning_C\Embedded\ Devices\ Examples\STM32F407VGT6\6.\ Timers\Timers_GeneralPurposeTimerInterruptDMAMode\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "Timers_GeneralPurposeTimerInterruptDMAMode.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\Tsap\Documents\DevelopmentProjects\Learning_C\Embedded Devices Examples\STM32F407VGT6\6. Timers\Timers_GeneralPurposeTimerInterruptDMAMode\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Timers_GeneralPurposeTimerInterruptDMAMode.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Timers_GeneralPurposeTimerInterruptDMAMode.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Timers_GeneralPurposeTimerInterruptDMAMode.list"
	@echo 'Finished building: $@'
	@echo ' '

Timers_GeneralPurposeTimerInterruptDMAMode.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Timers_GeneralPurposeTimerInterruptDMAMode.bin"
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
