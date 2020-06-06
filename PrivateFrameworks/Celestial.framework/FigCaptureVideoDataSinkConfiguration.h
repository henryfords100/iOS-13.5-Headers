/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateVideoFrames;
	BOOL _derivedFromPreview;

}

@property (assign,nonatomic) BOOL discardsLateVideoFrames;              //@synthesize discardsLateVideoFrames=_discardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL derivedFromPreview;                   //@synthesize derivedFromPreview=_derivedFromPreview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setDerivedFromPreview:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)derivedFromPreview;
-(BOOL)discardsLateVideoFrames;
@end
