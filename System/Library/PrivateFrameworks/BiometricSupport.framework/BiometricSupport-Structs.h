/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned usingAuthToken;
	unsigned tokenLength;
	unsigned char token[32];
} SCD_Struct_Bi1;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	unsigned field1;
	unsigned char field2[16];
} SCD_Struct_Bi3;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned long long field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
} SCD_Struct_Bi4;

typedef struct {
	unsigned long long field1;
	unsigned char field2;
} SCD_Struct_Bi5;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW6;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_AW7;
