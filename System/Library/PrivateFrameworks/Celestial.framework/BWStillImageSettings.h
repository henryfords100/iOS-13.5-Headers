/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageProcessingSettings;

@interface BWStillImageSettings : NSObject {

	FigCaptureStillImageSettings* _requestedSettings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageProcessingSettings* _processingSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * requestedSettings;                 //@synthesize requestedSettings=_requestedSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings;                    //@synthesize captureSettings=_captureSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageProcessingSettings * processingSettings;              //@synthesize processingSettings=_processingSettings - In the implementation block
-(void)dealloc;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3 ;
-(FigCaptureStillImageSettings *)requestedSettings;
-(BWStillImageProcessingSettings *)processingSettings;
@end
