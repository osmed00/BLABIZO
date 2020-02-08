
#ifndef STD_TYPES_H_
#define STD_TYPES_H_


  
typedef unsigned char         uint8;
typedef unsigned short        uint16;
typedef unsigned long         uint32;
typedef unsigned long long    uint64;
typedef          char         sint8;
typedef          short        sint16;
typedef          long         sint32;
typedef          long long    sint64;
typedef uint8 Std_ReturnType;
struct Std_VersionInfoType
{
	uint16 vendorID;
	uint16 moduleID;
	uint8 sw_patch_version;
	
	};
	#ifndef STATUSTYPEDEFINED
	#define STATUSTYPEDEFINED
	#define E_OK 0x00u
	typedef unsigned char StatusType; /* OSEK compliance */
	#endif
	#define E_NOT_OK 0x01u
#define STD_HIGH 0x01u /* Physical state 5V or 3.3V */
#define STD_LOW 0x00u /* Physical state 0V */
#define STD_ACTIVE 0x01u /* Logical state active */
#define STD_IDLE 0x00u /* Logical state idle */
#define STD_ON 0x01u
#define STD_OFF 0x00u

#endif /* STD_TYPES_H_ */
