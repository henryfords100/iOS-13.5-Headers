/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSNumber;

@interface VNImageScoreObservation : VNObservation {

	NSNumber* _blurScore;
	NSNumber* _exposureScore;

}

@property (nonatomic,retain) NSNumber * blurScore;                  //@synthesize blurScore=_blurScore - In the implementation block
@property (nonatomic,retain) NSNumber * exposureScore;              //@synthesize exposureScore=_exposureScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)blurScore;
-(void)setBlurScore:(NSNumber *)arg1 ;
-(NSNumber *)exposureScore;
-(void)setExposureScore:(NSNumber *)arg1 ;
@end

