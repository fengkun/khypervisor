#ifndef KHYPERVISOR_CONFIG_H
#define KHYPERVISOR_CONFIG_H

/*
 *  BOARD param
 */
#define CFG_BOARD_RTSM_VE_CA15
#define CFG_GENERIC_CA15
#define CFG_CNTFRQ          100000000
/*#define CFG_UART2         0x1C0B0000
#define CFG_UART1         0x1C0A0000*/
#define CFG_UART0         0x1C020000

#define CFG_NUMBER_OF_CPUS  2

#define MON_SIZE            0x0F000000
#define MON_STACK_SIZE      0x00C00000
#define MON_CORE_STACK_SIZE      0x00100000

#define SEC_STACK_SIZE      0x00400000
#define GUEST_SIZE_MAX      0x0F000000

/*
 *  SOC param
 */
#define CFG_GIC_BASE_PA   0x78000000

#define CFG_MACHINE_NUMBER 2272

#define USEC 1000000
#ifdef _SMP_
#define NUM_GUESTS_STATIC       4
#else
#define NUM_GUESTS_STATIC       2
#endif
#define NUM_GUESTS_CPU0_STATIC       2
#define NUM_GUESTS_CPU1_STATIC       2
#define NUM_CPUS       8
#define COUNT_PER_USEC (CFG_CNTFRQ/USEC)
#define GUEST_SCHED_TICK 1000
#define MAX_IRQS 256
#define MAX_PPI_IRQS 32
#define MAX_SPI_IRQS (MAX_IRQS - 1024)

#define CFG_MEMMAP_PHYS_START      0x4000000000
#define CFG_MEMMAP_PHYS_SIZE       0x1ffffffff
#define CFG_MEMMAP_PHYS_END        (CFG_MEMMAP_PHYS_START+CFG_MEMMAP_PHYS_SIZE)
#define CFG_MEMMAP_MON_OFFSET      CFG_MEMMAP_PHYS_START + 0x1E0000000
#define CFG_MEMMAP_GUEST0_OFFSET   CFG_MEMMAP_PHYS_START
#define CFG_MEMMAP_GUEST1_OFFSET   CFG_MEMMAP_PHYS_START + 0x80000000
#define CFG_MEMMAP_GUEST2_OFFSET   CFG_MEMMAP_PHYS_START + 0x100000000
#define CFG_MEMMAP_GUEST3_OFFSET   CFG_MEMMAP_PHYS_START + 0x180000000
#define CFG_GUEST_START_ADDRESS    CFG_MEMMAP_PHYS_START

#define SHARED_ADDRESS (CFG_MEMMAP_GUEST1_OFFSET + 0xEC00000)
#define SHARED_VMID (CFG_MEMMAP_GUEST1_OFFSET + 0xEC000D0)
#define SHARED_DUMP_ADDRESS (CFG_MEMMAP_GUEST1_OFFSET + 0xEC00100)

#define MONITOR_GUEST_VMID 1
#define MONITOR_TARGET_VMID 0
#define MONITOR_VIRQ 20

#define SZ_1                0x00000001
#define SZ_2                0x00000002
#define SZ_4                0x00000004
#define SZ_8                0x00000008
#define SZ_16               0x00000010
#define SZ_32               0x00000020
#define SZ_64               0x00000040
#define SZ_128              0x00000080
#define SZ_256              0x00000100
#define SZ_512              0x00000200

#define SZ_1K               0x00000400
#define SZ_2K               0x00000800
#define SZ_4K               0x00001000
#define SZ_8K               0x00002000
#define SZ_16K              0x00004000
#define SZ_32K              0x00008000
#define SZ_64K              0x00010000
#define SZ_128K             0x00020000
#define SZ_256K             0x00040000
#define SZ_512K             0x00080000

#define SZ_1M               0x00100000
#define SZ_2M               0x00200000
#define SZ_4M               0x00400000
#define SZ_8M               0x00800000
#define SZ_16M              0x01000000
#define SZ_32M              0x02000000
#define SZ_64M              0x04000000
#define SZ_128M             0x08000000
#define SZ_256M             0x10000000
#define SZ_512M             0x20000000

#define SZ_1G               0x40000000
#define SZ_2G               0x80000000

#endif  /* KHYPERVISOR_CONFIG_H */
