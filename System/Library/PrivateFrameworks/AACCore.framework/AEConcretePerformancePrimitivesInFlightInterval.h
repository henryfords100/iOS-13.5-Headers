/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEPerformancePrimitivesInFlightInterval.h>

@protocol OS_os_log;
@class NSString, NSObject;

@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval> {

	BOOL _isEnded;
	NSString* _name;
	unsigned long long _signpostID;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) BOOL isEnded;                                 //@synthesize isEnded=_isEnded - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSObject*<OS_os_log>)log;
-(unsigned long long)signpostID;
-(void)endInterval;
-(id)initWithName:(id)arg1 signpostID:(unsigned long long)arg2 log:(id)arg3 ;
-(BOOL)isEnded;
-(void)setIsEnded:(BOOL)arg1 ;
@end

