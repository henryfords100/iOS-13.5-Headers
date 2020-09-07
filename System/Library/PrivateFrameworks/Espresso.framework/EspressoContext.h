/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoContext : NSObject {

	shared_ptr<Espresso::abstract_context>* _ctx;

}

@property (readonly) shared_ptr<Espresso::abstract_context>* ctx;              //@synthesize ctx=_ctx - In the implementation block
@property (readonly) int platform; 
-(int)platform;
-(shared_ptr<Espresso::abstract_context>*)ctx;
-(id)initWithContext:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(id)initWithPlatform:(int)arg1 ;
-(void)set_priority:(BOOL)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2 ;
-(id)initWithNetworkContext:(id)arg1 ;
@end
