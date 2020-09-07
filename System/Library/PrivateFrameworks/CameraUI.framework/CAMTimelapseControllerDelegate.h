/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMTimelapseControllerDelegate <NSObject>
@required
-(void)timelapseController:(id)arg1 startedWithCaptureOrientation:(long long)arg2;
-(void)timelapseControllerStopped:(id)arg1;
-(void)timelapseController:(id)arg1 generatedPlaceholderResult:(id)arg2 withThumbnailImage:(id)arg3 forAssetUUID:(id)arg4 inCaptureSession:(unsigned short)arg5;
-(void)timelapseController:(id)arg1 persistedPlaceholderResult:(id)arg2 error:(id)arg3;

@end
