/* Solidification of Matter_Plugin_3_OnOff_Power.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_Plugin_OnOff_Power' ktab size: 58, total: 86 (saved 224 bytes)
static const bvalue be_ktab_class_Matter_Plugin_OnOff_Power[58] = {
  /* K0   */  be_nested_str_weak(matter),
  /* K1   */  be_nested_str_weak(TLV),
  /* K2   */  be_nested_str_weak(Matter_TLV_array),
  /* K3   */  be_nested_str_weak(MT_RMS_VOLTAGE),
  /* K4   */  be_const_int(0),
  /* K5   */  be_const_int(300000),
  /* K6   */  be_nested_str_weak(MT_RMS_CURRENT),
  /* K7   */  be_nested_str_weak(MT_ACTIVE_POWER),
  /* K8   */  be_const_int(-50000000),
  /* K9   */  be_const_int(50000000),
  /* K10  */  be_nested_str_weak(MT_REACTIVE_POWER),
  /* K11  */  be_nested_str_weak(MT_APPARENT_POWER),
  /* K12  */  be_nested_str_weak(MT_RMS_POWER),
  /* K13  */  be_nested_str_weak(MT_FREQUENCY),
  /* K14  */  be_nested_str_weak(MT_POWER_FACTOR),
  /* K15  */  be_nested_str_weak(add_struct),
  /* K16  */  be_nested_str_weak(add_TLV),
  /* K17  */  be_const_int(1),
  /* K18  */  be_const_int(2),
  /* K19  */  be_const_int(3),
  /* K20  */  be_nested_str_weak(add_array),
  /* K21  */  be_nested_str_weak(stop_iteration),
  /* K22  */  be_nested_str_weak(cluster),
  /* K23  */  be_nested_str_weak(attribute),
  /* K24  */  be_nested_str_weak(set),
  /* K25  */  be_nested_str_weak(_build_accuracy_list),
  /* K26  */  be_nested_str_weak(set_or_nil),
  /* K27  */  be_nested_str_weak(shadow_active_power),
  /* K28  */  be_nested_str_weak(shadow_reactive_power),
  /* K29  */  be_nested_str_weak(shadow_apparent_power),
  /* K30  */  be_nested_str_weak(shadow_voltage),
  /* K31  */  be_nested_str_weak(shadow_current),
  /* K32  */  be_nested_str_weak(shadow_frequency),
  /* K33  */  be_nested_str_weak(shadow_power_factor),
  /* K34  */  be_nested_str_weak(read_attribute),
  /* K35  */  be_nested_str_weak(find),
  /* K36  */  be_nested_str_weak(ENERGY),
  /* K37  */  be_nested_str_weak(VIRTUAL),
  /* K38  */  be_nested_str_weak(BRIDGE),
  /* K39  */  be_nested_str_weak(_parse_energy_value),
  /* K40  */  be_nested_str_weak(Voltage),
  /* K41  */  be_nested_str_weak(Current),
  /* K42  */  be_nested_str_weak(Power),
  /* K43  */  be_nested_str_weak(ApparentPower),
  /* K44  */  be_nested_str_weak(ReactivePower),
  /* K45  */  be_nested_str_weak(Frequency),
  /* K46  */  be_nested_str_weak(Factor),
  /* K47  */  be_nested_str_weak(parse_sensors),
  /* K48  */  be_nested_str_weak(web_values),
  /* K49  */  be_nested_str_weak(webserver),
  /* K50  */  be_nested_str_weak(content_send),
  /* K51  */  be_nested_str_weak(_X20_X25_X2E1fW),
  /* K52  */  be_nested_str_weak(init),
  /* K53  */  be_nested_str_weak(add_read_sensors_schedule),
  /* K54  */  be_nested_str_weak(attribute_updated),
  /* K55  */  be_nested_str_weak(_parse_update_virtual),
  /* K56  */  be_nested_str_weak(ActivePower),
  /* K57  */  be_nested_str_weak(update_virtual),
};


extern const bclass be_class_Matter_Plugin_OnOff_Power;

/********************************************************************
** Solidified function: _build_accuracy_list
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power__build_accuracy_list,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(_build_accuracy_list),
    &be_const_str_solidified,
    ( &(const binstruction[119]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x8C080302,  //  0002  GETMET	R2	R1	K2
      0x7C080200,  //  0003  CALL	R2	1
      0x600C0012,  //  0004  GETGBL	R3	G18
      0x7C0C0000,  //  0005  CALL	R3	0
      0x60100012,  //  0006  GETGBL	R4	G18
      0x7C100000,  //  0007  CALL	R4	0
      0x88140103,  //  0008  GETMBR	R5	R0	K3
      0x40140805,  //  0009  CONNECT	R5	R4	R5
      0x40140904,  //  000A  CONNECT	R5	R4	K4
      0x40140905,  //  000B  CONNECT	R5	R4	K5
      0x40100604,  //  000C  CONNECT	R4	R3	R4
      0x60100012,  //  000D  GETGBL	R4	G18
      0x7C100000,  //  000E  CALL	R4	0
      0x88140106,  //  000F  GETMBR	R5	R0	K6
      0x40140805,  //  0010  CONNECT	R5	R4	R5
      0x40140904,  //  0011  CONNECT	R5	R4	K4
      0x5417869F,  //  0012  LDINT	R5	100000
      0x40140805,  //  0013  CONNECT	R5	R4	R5
      0x40100604,  //  0014  CONNECT	R4	R3	R4
      0x60100012,  //  0015  GETGBL	R4	G18
      0x7C100000,  //  0016  CALL	R4	0
      0x88140107,  //  0017  GETMBR	R5	R0	K7
      0x40140805,  //  0018  CONNECT	R5	R4	R5
      0x40140908,  //  0019  CONNECT	R5	R4	K8
      0x40140909,  //  001A  CONNECT	R5	R4	K9
      0x40100604,  //  001B  CONNECT	R4	R3	R4
      0x60100012,  //  001C  GETGBL	R4	G18
      0x7C100000,  //  001D  CALL	R4	0
      0x8814010A,  //  001E  GETMBR	R5	R0	K10
      0x40140805,  //  001F  CONNECT	R5	R4	R5
      0x40140908,  //  0020  CONNECT	R5	R4	K8
      0x40140909,  //  0021  CONNECT	R5	R4	K9
      0x40100604,  //  0022  CONNECT	R4	R3	R4
      0x60100012,  //  0023  GETGBL	R4	G18
      0x7C100000,  //  0024  CALL	R4	0
      0x8814010B,  //  0025  GETMBR	R5	R0	K11
      0x40140805,  //  0026  CONNECT	R5	R4	R5
      0x40140904,  //  0027  CONNECT	R5	R4	K4
      0x40140909,  //  0028  CONNECT	R5	R4	K9
      0x40100604,  //  0029  CONNECT	R4	R3	R4
      0x60100012,  //  002A  GETGBL	R4	G18
      0x7C100000,  //  002B  CALL	R4	0
      0x8814010C,  //  002C  GETMBR	R5	R0	K12
      0x40140805,  //  002D  CONNECT	R5	R4	R5
      0x40140908,  //  002E  CONNECT	R5	R4	K8
      0x40140909,  //  002F  CONNECT	R5	R4	K9
      0x40100604,  //  0030  CONNECT	R4	R3	R4
      0x60100012,  //  0031  GETGBL	R4	G18
      0x7C100000,  //  0032  CALL	R4	0
      0x8814010D,  //  0033  GETMBR	R5	R0	K13
      0x40140805,  //  0034  CONNECT	R5	R4	R5
      0x40140904,  //  0035  CONNECT	R5	R4	K4
      0x5417869F,  //  0036  LDINT	R5	100000
      0x40140805,  //  0037  CONNECT	R5	R4	R5
      0x40100604,  //  0038  CONNECT	R4	R3	R4
      0x60100012,  //  0039  GETGBL	R4	G18
      0x7C100000,  //  003A  CALL	R4	0
      0x8814010E,  //  003B  GETMBR	R5	R0	K14
      0x40140805,  //  003C  CONNECT	R5	R4	R5
      0x5415D8EF,  //  003D  LDINT	R5	-10000
      0x40140805,  //  003E  CONNECT	R5	R4	R5
      0x5416270F,  //  003F  LDINT	R5	10000
      0x40140805,  //  0040  CONNECT	R5	R4	R5
      0x40100604,  //  0041  CONNECT	R4	R3	R4
      0x60100010,  //  0042  GETGBL	R4	G16
      0x5C140600,  //  0043  MOVE	R5	R3
      0x7C100200,  //  0044  CALL	R4	1
      0xA802002C,  //  0045  EXBLK	0	#0073
      0x5C140800,  //  0046  MOVE	R5	R4
      0x7C140000,  //  0047  CALL	R5	0
      0x8C18050F,  //  0048  GETMET	R6	R2	K15
      0x7C180200,  //  0049  CALL	R6	1
      0x8C1C0D10,  //  004A  GETMET	R7	R6	K16
      0x58240004,  //  004B  LDCONST	R9	K4
      0x542A0003,  //  004C  LDINT	R10	4
      0x942C0B04,  //  004D  GETIDX	R11	R5	K4
      0x7C1C0800,  //  004E  CALL	R7	4
      0x8C1C0D10,  //  004F  GETMET	R7	R6	K16
      0x58240011,  //  0050  LDCONST	R9	K17
      0x542A0007,  //  0051  LDINT	R10	8
      0x502C0200,  //  0052  LDBOOL	R11	1	0
      0x7C1C0800,  //  0053  CALL	R7	4
      0x8C1C0D10,  //  0054  GETMET	R7	R6	K16
      0x58240012,  //  0055  LDCONST	R9	K18
      0x58280013,  //  0056  LDCONST	R10	K19
      0x942C0B11,  //  0057  GETIDX	R11	R5	K17
      0x7C1C0800,  //  0058  CALL	R7	4
      0x8C1C0D10,  //  0059  GETMET	R7	R6	K16
      0x58240013,  //  005A  LDCONST	R9	K19
      0x58280013,  //  005B  LDCONST	R10	K19
      0x942C0B12,  //  005C  GETIDX	R11	R5	K18
      0x7C1C0800,  //  005D  CALL	R7	4
      0x8C1C0D14,  //  005E  GETMET	R7	R6	K20
      0x54260003,  //  005F  LDINT	R9	4
      0x7C1C0400,  //  0060  CALL	R7	2
      0x8C200F0F,  //  0061  GETMET	R8	R7	K15
      0x7C200200,  //  0062  CALL	R8	1
      0x8C241110,  //  0063  GETMET	R9	R8	K16
      0x582C0004,  //  0064  LDCONST	R11	K4
      0x58300013,  //  0065  LDCONST	R12	K19
      0x94340B11,  //  0066  GETIDX	R13	R5	K17
      0x7C240800,  //  0067  CALL	R9	4
      0x8C241110,  //  0068  GETMET	R9	R8	K16
      0x582C0011,  //  0069  LDCONST	R11	K17
      0x58300013,  //  006A  LDCONST	R12	K19
      0x94340B12,  //  006B  GETIDX	R13	R5	K18
      0x7C240800,  //  006C  CALL	R9	4
      0x8C241110,  //  006D  GETMET	R9	R8	K16
      0x582C0012,  //  006E  LDCONST	R11	K18
      0x54320004,  //  006F  LDINT	R12	5
      0x543601F3,  //  0070  LDINT	R13	500
      0x7C240800,  //  0071  CALL	R9	4
      0x7001FFD2,  //  0072  JMP		#0046
      0x58100015,  //  0073  LDCONST	R4	K21
      0xAC100200,  //  0074  CATCH	R4	1	0
      0xB0080000,  //  0075  RAISE	2	R0	R0
      0x80040400,  //  0076  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[187]) {  /* code */
      0x88100516,  //  0000  GETMBR	R4	R2	K22
      0x88140517,  //  0001  GETMBR	R5	R2	K23
      0x541A008F,  //  0002  LDINT	R6	144
      0x1C180806,  //  0003  EQ	R6	R4	R6
      0x781A00AC,  //  0004  JMPF	R6	#00B2
      0x1C180B04,  //  0005  EQ	R6	R5	K4
      0x781A0005,  //  0006  JMPF	R6	#000D
      0x8C180718,  //  0007  GETMET	R6	R3	K24
      0x54220003,  //  0008  LDINT	R8	4
      0x58240012,  //  0009  LDCONST	R9	K18
      0x7C180600,  //  000A  CALL	R6	3
      0x80040C00,  //  000B  RET	1	R6
      0x700200A4,  //  000C  JMP		#00B2
      0x1C180B11,  //  000D  EQ	R6	R5	K17
      0x781A0005,  //  000E  JMPF	R6	#0015
      0x8C180718,  //  000F  GETMET	R6	R3	K24
      0x54220003,  //  0010  LDINT	R8	4
      0x54260007,  //  0011  LDINT	R9	8
      0x7C180600,  //  0012  CALL	R6	3
      0x80040C00,  //  0013  RET	1	R6
      0x7002009C,  //  0014  JMP		#00B2
      0x1C180B12,  //  0015  EQ	R6	R5	K18
      0x781A0003,  //  0016  JMPF	R6	#001B
      0x8C180119,  //  0017  GETMET	R6	R0	K25
      0x7C180200,  //  0018  CALL	R6	1
      0x80040C00,  //  0019  RET	1	R6
      0x70020096,  //  001A  JMP		#00B2
      0x541A0007,  //  001B  LDINT	R6	8
      0x1C180A06,  //  001C  EQ	R6	R5	R6
      0x781A000F,  //  001D  JMPF	R6	#002E
      0x8C18071A,  //  001E  GETMET	R6	R3	K26
      0x58200013,  //  001F  LDCONST	R8	K19
      0x8824011B,  //  0020  GETMBR	R9	R0	K27
      0x4C280000,  //  0021  LDNIL	R10
      0x2024120A,  //  0022  NE	R9	R9	R10
      0x78260005,  //  0023  JMPF	R9	#002A
      0x60240009,  //  0024  GETGBL	R9	G9
      0x8828011B,  //  0025  GETMBR	R10	R0	K27
      0x542E03E7,  //  0026  LDINT	R11	1000
      0x0828140B,  //  0027  MUL	R10	R10	R11
      0x7C240200,  //  0028  CALL	R9	1
      0x70020000,  //  0029  JMP		#002B
      0x4C240000,  //  002A  LDNIL	R9
      0x7C180600,  //  002B  CALL	R6	3
      0x80040C00,  //  002C  RET	1	R6
      0x70020083,  //  002D  JMP		#00B2
      0x541A0008,  //  002E  LDINT	R6	9
      0x1C180A06,  //  002F  EQ	R6	R5	R6
      0x781A000F,  //  0030  JMPF	R6	#0041
      0x8C18071A,  //  0031  GETMET	R6	R3	K26
      0x58200013,  //  0032  LDCONST	R8	K19
      0x8824011C,  //  0033  GETMBR	R9	R0	K28
      0x4C280000,  //  0034  LDNIL	R10
      0x2024120A,  //  0035  NE	R9	R9	R10
      0x78260005,  //  0036  JMPF	R9	#003D
      0x60240009,  //  0037  GETGBL	R9	G9
      0x8828011C,  //  0038  GETMBR	R10	R0	K28
      0x542E03E7,  //  0039  LDINT	R11	1000
      0x0828140B,  //  003A  MUL	R10	R10	R11
      0x7C240200,  //  003B  CALL	R9	1
      0x70020000,  //  003C  JMP		#003E
      0x4C240000,  //  003D  LDNIL	R9
      0x7C180600,  //  003E  CALL	R6	3
      0x80040C00,  //  003F  RET	1	R6
      0x70020070,  //  0040  JMP		#00B2
      0x541A0009,  //  0041  LDINT	R6	10
      0x1C180A06,  //  0042  EQ	R6	R5	R6
      0x781A000F,  //  0043  JMPF	R6	#0054
      0x8C18071A,  //  0044  GETMET	R6	R3	K26
      0x58200013,  //  0045  LDCONST	R8	K19
      0x8824011D,  //  0046  GETMBR	R9	R0	K29
      0x4C280000,  //  0047  LDNIL	R10
      0x2024120A,  //  0048  NE	R9	R9	R10
      0x78260005,  //  0049  JMPF	R9	#0050
      0x60240009,  //  004A  GETGBL	R9	G9
      0x8828011D,  //  004B  GETMBR	R10	R0	K29
      0x542E03E7,  //  004C  LDINT	R11	1000
      0x0828140B,  //  004D  MUL	R10	R10	R11
      0x7C240200,  //  004E  CALL	R9	1
      0x70020000,  //  004F  JMP		#0051
      0x4C240000,  //  0050  LDNIL	R9
      0x7C180600,  //  0051  CALL	R6	3
      0x80040C00,  //  0052  RET	1	R6
      0x7002005D,  //  0053  JMP		#00B2
      0x541A000A,  //  0054  LDINT	R6	11
      0x1C180A06,  //  0055  EQ	R6	R5	R6
      0x781A000F,  //  0056  JMPF	R6	#0067
      0x8C18071A,  //  0057  GETMET	R6	R3	K26
      0x58200013,  //  0058  LDCONST	R8	K19
      0x8824011E,  //  0059  GETMBR	R9	R0	K30
      0x4C280000,  //  005A  LDNIL	R10
      0x2024120A,  //  005B  NE	R9	R9	R10
      0x78260005,  //  005C  JMPF	R9	#0063
      0x60240009,  //  005D  GETGBL	R9	G9
      0x8828011E,  //  005E  GETMBR	R10	R0	K30
      0x542E03E7,  //  005F  LDINT	R11	1000
      0x0828140B,  //  0060  MUL	R10	R10	R11
      0x7C240200,  //  0061  CALL	R9	1
      0x70020000,  //  0062  JMP		#0064
      0x4C240000,  //  0063  LDNIL	R9
      0x7C180600,  //  0064  CALL	R6	3
      0x80040C00,  //  0065  RET	1	R6
      0x7002004A,  //  0066  JMP		#00B2
      0x541A000B,  //  0067  LDINT	R6	12
      0x1C180A06,  //  0068  EQ	R6	R5	R6
      0x781A000F,  //  0069  JMPF	R6	#007A
      0x8C18071A,  //  006A  GETMET	R6	R3	K26
      0x58200013,  //  006B  LDCONST	R8	K19
      0x8824011F,  //  006C  GETMBR	R9	R0	K31
      0x4C280000,  //  006D  LDNIL	R10
      0x2024120A,  //  006E  NE	R9	R9	R10
      0x78260005,  //  006F  JMPF	R9	#0076
      0x60240009,  //  0070  GETGBL	R9	G9
      0x8828011F,  //  0071  GETMBR	R10	R0	K31
      0x542E03E7,  //  0072  LDINT	R11	1000
      0x0828140B,  //  0073  MUL	R10	R10	R11
      0x7C240200,  //  0074  CALL	R9	1
      0x70020000,  //  0075  JMP		#0077
      0x4C240000,  //  0076  LDNIL	R9
      0x7C180600,  //  0077  CALL	R6	3
      0x80040C00,  //  0078  RET	1	R6
      0x70020037,  //  0079  JMP		#00B2
      0x541A000C,  //  007A  LDINT	R6	13
      0x1C180A06,  //  007B  EQ	R6	R5	R6
      0x781A000F,  //  007C  JMPF	R6	#008D
      0x8C18071A,  //  007D  GETMET	R6	R3	K26
      0x58200013,  //  007E  LDCONST	R8	K19
      0x8824011B,  //  007F  GETMBR	R9	R0	K27
      0x4C280000,  //  0080  LDNIL	R10
      0x2024120A,  //  0081  NE	R9	R9	R10
      0x78260005,  //  0082  JMPF	R9	#0089
      0x60240009,  //  0083  GETGBL	R9	G9
      0x8828011B,  //  0084  GETMBR	R10	R0	K27
      0x542E03E7,  //  0085  LDINT	R11	1000
      0x0828140B,  //  0086  MUL	R10	R10	R11
      0x7C240200,  //  0087  CALL	R9	1
      0x70020000,  //  0088  JMP		#008A
      0x4C240000,  //  0089  LDNIL	R9
      0x7C180600,  //  008A  CALL	R6	3
      0x80040C00,  //  008B  RET	1	R6
      0x70020024,  //  008C  JMP		#00B2
      0x541A000D,  //  008D  LDINT	R6	14
      0x1C180A06,  //  008E  EQ	R6	R5	R6
      0x781A000F,  //  008F  JMPF	R6	#00A0
      0x8C18071A,  //  0090  GETMET	R6	R3	K26
      0x58200013,  //  0091  LDCONST	R8	K19
      0x88240120,  //  0092  GETMBR	R9	R0	K32
      0x4C280000,  //  0093  LDNIL	R10
      0x2024120A,  //  0094  NE	R9	R9	R10
      0x78260005,  //  0095  JMPF	R9	#009C
      0x60240009,  //  0096  GETGBL	R9	G9
      0x88280120,  //  0097  GETMBR	R10	R0	K32
      0x542E03E7,  //  0098  LDINT	R11	1000
      0x0828140B,  //  0099  MUL	R10	R10	R11
      0x7C240200,  //  009A  CALL	R9	1
      0x70020000,  //  009B  JMP		#009D
      0x4C240000,  //  009C  LDNIL	R9
      0x7C180600,  //  009D  CALL	R6	3
      0x80040C00,  //  009E  RET	1	R6
      0x70020011,  //  009F  JMP		#00B2
      0x541A0010,  //  00A0  LDINT	R6	17
      0x1C180A06,  //  00A1  EQ	R6	R5	R6
      0x781A000E,  //  00A2  JMPF	R6	#00B2
      0x8C18071A,  //  00A3  GETMET	R6	R3	K26
      0x58200013,  //  00A4  LDCONST	R8	K19
      0x88240121,  //  00A5  GETMBR	R9	R0	K33
      0x4C280000,  //  00A6  LDNIL	R10
      0x2024120A,  //  00A7  NE	R9	R9	R10
      0x78260005,  //  00A8  JMPF	R9	#00AF
      0x60240009,  //  00A9  GETGBL	R9	G9
      0x88280121,  //  00AA  GETMBR	R10	R0	K33
      0x542E270F,  //  00AB  LDINT	R11	10000
      0x0828140B,  //  00AC  MUL	R10	R10	R11
      0x7C240200,  //  00AD  CALL	R9	1
      0x70020000,  //  00AE  JMP		#00B0
      0x4C240000,  //  00AF  LDNIL	R9
      0x7C180600,  //  00B0  CALL	R6	3
      0x80040C00,  //  00B1  RET	1	R6
      0x60180003,  //  00B2  GETGBL	R6	G3
      0x5C1C0000,  //  00B3  MOVE	R7	R0
      0x7C180200,  //  00B4  CALL	R6	1
      0x8C180D22,  //  00B5  GETMET	R6	R6	K34
      0x5C200200,  //  00B6  MOVE	R8	R1
      0x5C240400,  //  00B7  MOVE	R9	R2
      0x5C280600,  //  00B8  MOVE	R10	R3
      0x7C180800,  //  00B9  CALL	R6	4
      0x80040C00,  //  00BA  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_sensors
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power_parse_sensors,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(parse_sensors),
    &be_const_str_solidified,
    ( &(const binstruction[67]) {  /* code */
      0x8C080323,  //  0000  GETMET	R2	R1	K35
      0x58100024,  //  0001  LDCONST	R4	K36
      0x7C080400,  //  0002  CALL	R2	2
      0x880C0125,  //  0003  GETMBR	R3	R0	K37
      0x740E0036,  //  0004  JMPT	R3	#003C
      0x880C0126,  //  0005  GETMBR	R3	R0	K38
      0x740E0034,  //  0006  JMPT	R3	#003C
      0x4C0C0000,  //  0007  LDNIL	R3
      0x200C0403,  //  0008  NE	R3	R2	R3
      0x780E0031,  //  0009  JMPF	R3	#003C
      0x8C0C0127,  //  000A  GETMET	R3	R0	K39
      0x5C140400,  //  000B  MOVE	R5	R2
      0x58180028,  //  000C  LDCONST	R6	K40
      0x881C011E,  //  000D  GETMBR	R7	R0	K30
      0x5422000A,  //  000E  LDINT	R8	11
      0x7C0C0A00,  //  000F  CALL	R3	5
      0x90023C03,  //  0010  SETMBR	R0	K30	R3
      0x8C0C0127,  //  0011  GETMET	R3	R0	K39
      0x5C140400,  //  0012  MOVE	R5	R2
      0x58180029,  //  0013  LDCONST	R6	K41
      0x881C011F,  //  0014  GETMBR	R7	R0	K31
      0x5422000B,  //  0015  LDINT	R8	12
      0x7C0C0A00,  //  0016  CALL	R3	5
      0x90023E03,  //  0017  SETMBR	R0	K31	R3
      0x8C0C0127,  //  0018  GETMET	R3	R0	K39
      0x5C140400,  //  0019  MOVE	R5	R2
      0x5818002A,  //  001A  LDCONST	R6	K42
      0x881C011B,  //  001B  GETMBR	R7	R0	K27
      0x54220007,  //  001C  LDINT	R8	8
      0x5426000C,  //  001D  LDINT	R9	13
      0x7C0C0C00,  //  001E  CALL	R3	6
      0x90023603,  //  001F  SETMBR	R0	K27	R3
      0x8C0C0127,  //  0020  GETMET	R3	R0	K39
      0x5C140400,  //  0021  MOVE	R5	R2
      0x5818002B,  //  0022  LDCONST	R6	K43
      0x881C011D,  //  0023  GETMBR	R7	R0	K29
      0x54220009,  //  0024  LDINT	R8	10
      0x7C0C0A00,  //  0025  CALL	R3	5
      0x90023A03,  //  0026  SETMBR	R0	K29	R3
      0x8C0C0127,  //  0027  GETMET	R3	R0	K39
      0x5C140400,  //  0028  MOVE	R5	R2
      0x5818002C,  //  0029  LDCONST	R6	K44
      0x881C011C,  //  002A  GETMBR	R7	R0	K28
      0x54220008,  //  002B  LDINT	R8	9
      0x7C0C0A00,  //  002C  CALL	R3	5
      0x90023803,  //  002D  SETMBR	R0	K28	R3
      0x8C0C0127,  //  002E  GETMET	R3	R0	K39
      0x5C140400,  //  002F  MOVE	R5	R2
      0x5818002D,  //  0030  LDCONST	R6	K45
      0x881C0120,  //  0031  GETMBR	R7	R0	K32
      0x5422000D,  //  0032  LDINT	R8	14
      0x7C0C0A00,  //  0033  CALL	R3	5
      0x90024003,  //  0034  SETMBR	R0	K32	R3
      0x8C0C0127,  //  0035  GETMET	R3	R0	K39
      0x5C140400,  //  0036  MOVE	R5	R2
      0x5818002E,  //  0037  LDCONST	R6	K46
      0x881C0121,  //  0038  GETMBR	R7	R0	K33
      0x54220010,  //  0039  LDINT	R8	17
      0x7C0C0A00,  //  003A  CALL	R3	5
      0x90024203,  //  003B  SETMBR	R0	K33	R3
      0x600C0003,  //  003C  GETGBL	R3	G3
      0x5C100000,  //  003D  MOVE	R4	R0
      0x7C0C0200,  //  003E  CALL	R3	1
      0x8C0C072F,  //  003F  GETMET	R3	R3	K47
      0x5C140200,  //  0040  MOVE	R5	R1
      0x7C0C0400,  //  0041  CALL	R3	2
      0x80000000,  //  0042  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power_web_values,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(web_values),
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x60040003,  //  0000  GETGBL	R1	G3
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x8C040330,  //  0003  GETMET	R1	R1	K48
      0x7C040200,  //  0004  CALL	R1	1
      0x8804011B,  //  0005  GETMBR	R1	R0	K27
      0x4C080000,  //  0006  LDNIL	R2
      0x20040202,  //  0007  NE	R1	R1	R2
      0x78060006,  //  0008  JMPF	R1	#0010
      0xA4066200,  //  0009  IMPORT	R1	K49
      0x8C080332,  //  000A  GETMET	R2	R1	K50
      0x60100018,  //  000B  GETGBL	R4	G24
      0x58140033,  //  000C  LDCONST	R5	K51
      0x8818011B,  //  000D  GETMBR	R6	R0	K27
      0x7C100400,  //  000E  CALL	R4	2
      0x7C080400,  //  000F  CALL	R2	2
      0x80000000,  //  0010  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[14]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100934,  //  0003  GETMET	R4	R4	K52
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x88100125,  //  0008  GETMBR	R4	R0	K37
      0x74120002,  //  0009  JMPT	R4	#000D
      0x8C100335,  //  000A  GETMET	R4	R1	K53
      0x541A1387,  //  000B  LDINT	R6	5000
      0x7C100400,  //  000C  CALL	R4	2
      0x80000000,  //  000D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: _parse_energy_value
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power__parse_energy_value,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    6,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(_parse_energy_value),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0x8C180323,  //  0000  GETMET	R6	R1	K35
      0x5C200400,  //  0001  MOVE	R8	R2
      0x7C180400,  //  0002  CALL	R6	2
      0x4C1C0000,  //  0003  LDNIL	R7
      0x201C0C07,  //  0004  NE	R7	R6	R7
      0x781E0011,  //  0005  JMPF	R7	#0018
      0x601C000A,  //  0006  GETGBL	R7	G10
      0x5C200C00,  //  0007  MOVE	R8	R6
      0x7C1C0200,  //  0008  CALL	R7	1
      0x5C180E00,  //  0009  MOVE	R6	R7
      0x201C0C03,  //  000A  NE	R7	R6	R3
      0x781E000A,  //  000B  JMPF	R7	#0017
      0x8C1C0136,  //  000C  GETMET	R7	R0	K54
      0x5426008F,  //  000D  LDINT	R9	144
      0x5C280800,  //  000E  MOVE	R10	R4
      0x7C1C0600,  //  000F  CALL	R7	3
      0x4C1C0000,  //  0010  LDNIL	R7
      0x201C0A07,  //  0011  NE	R7	R5	R7
      0x781E0003,  //  0012  JMPF	R7	#0017
      0x8C1C0136,  //  0013  GETMET	R7	R0	K54
      0x5426008F,  //  0014  LDINT	R9	144
      0x5C280A00,  //  0015  MOVE	R10	R5
      0x7C1C0600,  //  0016  CALL	R7	3
      0x80040C00,  //  0017  RET	1	R6
      0x80040600,  //  0018  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_virtual
********************************************************************/
be_local_closure(class_Matter_Plugin_OnOff_Power_update_virtual,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_OnOff_Power,     /* shared constants */
    be_str_weak(update_virtual),
    &be_const_str_solidified,
    ( &(const binstruction[78]) {  /* code */
      0x8C080137,  //  0000  GETMET	R2	R0	K55
      0x5C100200,  //  0001  MOVE	R4	R1
      0x58140028,  //  0002  LDCONST	R5	K40
      0x8818011E,  //  0003  GETMBR	R6	R0	K30
      0x601C000A,  //  0004  GETGBL	R7	G10
      0x5422008F,  //  0005  LDINT	R8	144
      0x5426000A,  //  0006  LDINT	R9	11
      0x7C080E00,  //  0007  CALL	R2	7
      0x90023C02,  //  0008  SETMBR	R0	K30	R2
      0x8C080137,  //  0009  GETMET	R2	R0	K55
      0x5C100200,  //  000A  MOVE	R4	R1
      0x58140029,  //  000B  LDCONST	R5	K41
      0x8818011F,  //  000C  GETMBR	R6	R0	K31
      0x601C000A,  //  000D  GETGBL	R7	G10
      0x5422008F,  //  000E  LDINT	R8	144
      0x5426000B,  //  000F  LDINT	R9	12
      0x7C080E00,  //  0010  CALL	R2	7
      0x90023E02,  //  0011  SETMBR	R0	K31	R2
      0x8808011B,  //  0012  GETMBR	R2	R0	K27
      0x8C0C0137,  //  0013  GETMET	R3	R0	K55
      0x5C140200,  //  0014  MOVE	R5	R1
      0x58180038,  //  0015  LDCONST	R6	K56
      0x881C011B,  //  0016  GETMBR	R7	R0	K27
      0x6020000A,  //  0017  GETGBL	R8	G10
      0x5426008F,  //  0018  LDINT	R9	144
      0x542A0007,  //  0019  LDINT	R10	8
      0x7C0C0E00,  //  001A  CALL	R3	7
      0x90023603,  //  001B  SETMBR	R0	K27	R3
      0x880C011B,  //  001C  GETMBR	R3	R0	K27
      0x200C0602,  //  001D  NE	R3	R3	R2
      0x780E0003,  //  001E  JMPF	R3	#0023
      0x8C0C0136,  //  001F  GETMET	R3	R0	K54
      0x5416008F,  //  0020  LDINT	R5	144
      0x541A000C,  //  0021  LDINT	R6	13
      0x7C0C0600,  //  0022  CALL	R3	3
      0x8C0C0137,  //  0023  GETMET	R3	R0	K55
      0x5C140200,  //  0024  MOVE	R5	R1
      0x5818002B,  //  0025  LDCONST	R6	K43
      0x881C011D,  //  0026  GETMBR	R7	R0	K29
      0x6020000A,  //  0027  GETGBL	R8	G10
      0x5426008F,  //  0028  LDINT	R9	144
      0x542A0009,  //  0029  LDINT	R10	10
      0x7C0C0E00,  //  002A  CALL	R3	7
      0x90023A03,  //  002B  SETMBR	R0	K29	R3
      0x8C0C0137,  //  002C  GETMET	R3	R0	K55
      0x5C140200,  //  002D  MOVE	R5	R1
      0x5818002C,  //  002E  LDCONST	R6	K44
      0x881C011C,  //  002F  GETMBR	R7	R0	K28
      0x6020000A,  //  0030  GETGBL	R8	G10
      0x5426008F,  //  0031  LDINT	R9	144
      0x542A0008,  //  0032  LDINT	R10	9
      0x7C0C0E00,  //  0033  CALL	R3	7
      0x90023803,  //  0034  SETMBR	R0	K28	R3
      0x8C0C0137,  //  0035  GETMET	R3	R0	K55
      0x5C140200,  //  0036  MOVE	R5	R1
      0x5818002D,  //  0037  LDCONST	R6	K45
      0x881C0120,  //  0038  GETMBR	R7	R0	K32
      0x6020000A,  //  0039  GETGBL	R8	G10
      0x5426008F,  //  003A  LDINT	R9	144
      0x542A000D,  //  003B  LDINT	R10	14
      0x7C0C0E00,  //  003C  CALL	R3	7
      0x90024003,  //  003D  SETMBR	R0	K32	R3
      0x8C0C0137,  //  003E  GETMET	R3	R0	K55
      0x5C140200,  //  003F  MOVE	R5	R1
      0x5818002E,  //  0040  LDCONST	R6	K46
      0x881C0121,  //  0041  GETMBR	R7	R0	K33
      0x6020000A,  //  0042  GETGBL	R8	G10
      0x5426008F,  //  0043  LDINT	R9	144
      0x542A0010,  //  0044  LDINT	R10	17
      0x7C0C0E00,  //  0045  CALL	R3	7
      0x90024203,  //  0046  SETMBR	R0	K33	R3
      0x600C0003,  //  0047  GETGBL	R3	G3
      0x5C100000,  //  0048  MOVE	R4	R0
      0x7C0C0200,  //  0049  CALL	R3	1
      0x8C0C0739,  //  004A  GETMET	R3	R3	K57
      0x5C140200,  //  004B  MOVE	R5	R1
      0x7C0C0400,  //  004C  CALL	R3	2
      0x80000000,  //  004D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_OnOff_Power
********************************************************************/
extern const bclass be_class_Matter_Plugin_OnOff;
be_local_class(Matter_Plugin_OnOff_Power,
    7,
    &be_class_Matter_Plugin_OnOff,
    be_nested_map(27,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(update_virtual, -1), be_const_closure(class_Matter_Plugin_OnOff_Power_update_virtual_closure) },
        { be_const_key_weak(shadow_apparent_power, 4), be_const_var(3) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(2,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(266, 1), be_const_int(2) },
        { be_const_key_int(1296, -1), be_const_int(1) },
    }))    ) } )) },
        { be_const_key_weak(MT_RMS_POWER, -1), be_const_int(10) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(relay_power) },
        { be_const_key_weak(MT_REACTIVE_POWER, -1), be_const_int(6) },
        { be_const_key_weak(shadow_frequency, -1), be_const_var(5) },
        { be_const_key_weak(MT_POWER_FACTOR, 13), be_const_int(12) },
        { be_const_key_weak(_build_accuracy_list, -1), be_const_closure(class_Matter_Plugin_OnOff_Power__build_accuracy_list_closure) },
        { be_const_key_weak(DISPLAY_NAME, -1), be_nested_str_weak(Relay_X20_X2B_X20Power) },
        { be_const_key_weak(MT_RMS_VOLTAGE, -1), be_const_int(8) },
        { be_const_key_weak(shadow_voltage, -1), be_const_var(0) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(class_Matter_Plugin_OnOff_Power_read_attribute_closure) },
        { be_const_key_weak(shadow_reactive_power, -1), be_const_var(4) },
        { be_const_key_weak(MT_FREQUENCY, 19), be_const_int(11) },
        { be_const_key_weak(MT_RMS_CURRENT, 20), be_const_int(9) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(144, -1), be_const_bytes_instance(00000001000200080009000A000B000C000D000E0011FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(57, -1), be_const_bytes_instance(00030005000A000F00110012FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(5, -1), be_const_bytes_instance(000000010002000300040005FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(3, -1), be_const_bytes_instance(00000001FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(156, 7), be_const_bytes_instance(FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(29, 2), be_const_bytes_instance(0000000100020003FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(6, -1), be_const_bytes_instance(0000FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(4, -1), be_const_bytes_instance(0000FFF8FFF9FFFAFFFBFFFCFFFD) },
    }))    ) } )) },
        { be_const_key_weak(shadow_current, -1), be_const_var(1) },
        { be_const_key_weak(UPDATE_COMMANDS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_nested_str_weak(Power),
        be_nested_str_weak(Voltage),
        be_nested_str_weak(Current),
        be_nested_str_weak(ActivePower),
        be_nested_str_weak(ApparentPower),
        be_nested_str_weak(ReactivePower),
        be_nested_str_weak(Factor),
        be_nested_str_weak(Frequency),
    }))    ) } )) },
        { be_const_key_weak(web_values, -1), be_const_closure(class_Matter_Plugin_OnOff_Power_web_values_closure) },
        { be_const_key_weak(parse_sensors, 12), be_const_closure(class_Matter_Plugin_OnOff_Power_parse_sensors_closure) },
        { be_const_key_weak(shadow_power_factor, 18), be_const_var(6) },
        { be_const_key_weak(shadow_active_power, 16), be_const_var(2) },
        { be_const_key_weak(MT_ACTIVE_POWER, -1), be_const_int(5) },
        { be_const_key_weak(init, -1), be_const_closure(class_Matter_Plugin_OnOff_Power_init_closure) },
        { be_const_key_weak(_parse_energy_value, -1), be_const_closure(class_Matter_Plugin_OnOff_Power__parse_energy_value_closure) },
        { be_const_key_weak(MT_APPARENT_POWER, 0), be_const_int(7) },
    })),
    be_str_weak(Matter_Plugin_OnOff_Power)
);
/********************************************************************/
/* End of solidification */
