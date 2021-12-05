
#include <common/bl_common.h>
#include <common/debug.h>
#include <arch_helpers.h>

#define CN10K_SERROR_SYNDROME		0xbe000011

void plat_ea_handler(unsigned int ea_reason, uint64_t syndrome, void *cookie,
		void *handle, uint64_t flags)
{
	if (syndrome != CN10K_SERROR_SYNDROME) {
		ERROR("Unhandled External Abort received on 0x%lx at EL3!\n",
			read_mpidr_el1());
		ERROR(" exception reason=%u syndrome=0x%llx\n", ea_reason,
				syndrome);
		panic();
	}
}
