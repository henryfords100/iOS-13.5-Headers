/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWBoxedOutputDetectionTimingInfo : NSObject {

	SCD_Struct_BW2 _previousDetectionPTS;
	SCD_Struct_BW2 _previousDetectionDuration;
	SCD_Struct_BW2 _previousNoDetectionPTS;
	int _lastDetectionCount;

}

@property (assign,nonatomic) SCD_Struct_BW2 previousDetectionPTS;                   //@synthesize previousDetectionPTS=_previousDetectionPTS - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 previousDetectionDuration;              //@synthesize previousDetectionDuration=_previousDetectionDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 previousNoDetectionPTS;                 //@synthesize previousNoDetectionPTS=_previousNoDetectionPTS - In the implementation block
@property (assign,nonatomic) int lastDetectionCount;                                //@synthesize lastDetectionCount=_lastDetectionCount - In the implementation block
-(id)init;
-(SCD_Struct_BW2)previousDetectionPTS;
-(void)setPreviousDetectionPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)previousDetectionDuration;
-(void)setPreviousDetectionDuration:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)previousNoDetectionPTS;
-(void)setPreviousNoDetectionPTS:(SCD_Struct_BW2)arg1 ;
-(int)lastDetectionCount;
-(void)setLastDetectionCount:(int)arg1 ;
@end

