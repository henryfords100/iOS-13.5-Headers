/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSArray;

@interface BWDroppedSample : NSObject {

	NSString* _reason;
	SCD_Struct_BW2 _pts;
	NSArray* _backPressureSemaphoresToIgnore;

}

@property (readonly) NSString * reason; 
@property (readonly) SCD_Struct_BW2 pts; 
@property (readonly) NSArray * backPressureSemaphoresToIgnore; 
+(id)newDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
+(id)newDroppedSampleFromDroppedSample:(id)arg1 backPressureSemaphoresToIgnore:(id)arg2 ;
-(void)dealloc;
-(NSString *)reason;
-(SCD_Struct_BW2)pts;
-(NSArray *)backPressureSemaphoresToIgnore;
-(id)_initDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 backPressureSemaphoresToIgnore:(id)arg3 ;
@end
