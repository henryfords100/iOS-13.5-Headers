/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLCompassDatabaseProtocol.h>

@class NSString;

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)getBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 ;
-(void)setBias:(SCD_Struct_CM1)arg1 withMagneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 ;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(int)syncgetPendingSetBiasCount;
-(BOOL)syncgetLookupBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 bias:(SCD_Struct_CM1*)arg3 level:(int*)arg4 noResults:(BOOL*)arg5 ;
-(CLCompassDatabase*)adaptee;
@end

