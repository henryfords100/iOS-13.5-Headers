/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFace, NSString;

@interface VCPCallerIdentificationResult : NSObject {

	float _confidence;
	PHFace* _face;
	NSString* _callerIdentifier;

}

@property (nonatomic,readonly) PHFace * face;                            //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) NSString * callerIdentifier;              //@synthesize callerIdentifier=_callerIdentifier - In the implementation block
@property (nonatomic,readonly) float confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(PHFace *)face;
-(id)initWithCallerIdentifier:(id)arg1 face:(id)arg2 andConfidence:(float)arg3 ;
-(NSString *)callerIdentifier;
@end
