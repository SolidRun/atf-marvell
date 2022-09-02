#ifndef __MEM_CONSOLE_H__
#define __MEM_CONSOLE_H__

#define FWLOG_BASE_OFF		0
#define	FWLOG_END_OFF		8
#define FWLOG_POINTER_OFF	16
#define FWLOG_WRAPAROUND_OFF	24

#ifndef __ASSEMBLER__
struct fw_logbuf_header {
	uint64_t fwlog_base;
	uint64_t fwlog_end;
	uint64_t fwlog_ptr;
	uint64_t wraparound;
} __attribute__((__packed__));
#endif

#endif
