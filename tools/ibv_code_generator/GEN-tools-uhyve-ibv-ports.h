typedef enum {
	UHYVE_PORT_IBV_OPEN_DEVICE = 0x510,
	UHYVE_PORT_IBV_GET_DEVICE_LIST = 0x511,
	UHYVE_PORT_IBV_GET_DEVICE_NAME = 0x512,
	UHYVE_PORT_IBV_QUERY_PORT = 0x513,
	UHYVE_PORT_IBV_CREATE_COMP_CHANNEL = 0x514,
	UHYVE_PORT_IBV_ALLOC_PD = 0x515,
	UHYVE_PORT_IBV_REG_MR = 0x516,
	UHYVE_PORT_IBV_CREATE_CQ = 0x517,
	UHYVE_PORT_IBV_CREATE_QP = 0x518,
	UHYVE_PORT_IBV_QUERY_QP = 0x519,
	UHYVE_PORT_IBV_MODIFY_QP = 0x51A,
	UHYVE_PORT_IBV_DESTROY_QP = 0x51B,
	UHYVE_PORT_IBV_DESTROY_CQ = 0x51C,
	UHYVE_PORT_IBV_DEREG_MR = 0x51D,
	UHYVE_PORT_IBV_DEALLOC_PD = 0x51E,
	UHYVE_PORT_IBV_DESTROY_COMP_CHANNEL = 0x51F,
	UHYVE_PORT_IBV_CLOSE_DEVICE = 0x520,
} uhyve_ibv_t;