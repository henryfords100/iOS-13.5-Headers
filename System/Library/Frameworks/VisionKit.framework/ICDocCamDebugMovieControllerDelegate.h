/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamDebugMovieControllerDelegate <NSObject>
@required
-(long long)statusBarOrientation;
-(id)videoPreviewLayer;
-(void)enableUIElementsForMovieRecording:(BOOL)arg1;
-(void)showErrorForMovieRecording:(id)arg1;
-(void)pauseCaptureSessionForMovieRecording;
-(void)resumeCaptureSessionForMovieRecording;
-(void)enableRecordButton:(BOOL)arg1;
-(void)changeRecordButtonTitle:(id)arg1;

@end
