/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect {

	float mBlurRadius;
	float mStartOpacity;
	float mStartPosition;
	float mEndOpacity;
	float mEndPosition;
	float mDistance;
	float mDirection;
	float mFadeDirection;
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(float)direction;
-(void)setDirection:(float)arg1 ;
-(void)setBlurRadius:(float)arg1 ;
-(float)blurRadius;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(float)startPosition;
-(void)setStartPosition:(float)arg1 ;
-(float)endPosition;
-(float)xScale;
-(float)yScale;
-(void)setXScale:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setEndPosition:(float)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)rotateWithShape;
-(float)xSkew;
-(void)setXSkew:(float)arg1 ;
-(float)ySkew;
-(void)setYSkew:(float)arg1 ;
-(float)startOpacity;
-(float)endOpacity;
-(float)fadeDirection;
-(void)setStartOpacity:(float)arg1 ;
-(void)setEndOpacity:(float)arg1 ;
-(void)setFadeDirection:(float)arg1 ;
@end

