/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCVirtualTTYDeviceDelegate <NSObject>
@required
-(void)device:(id)arg1 didReceiveText:(id)arg2;
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)deviceDidStop:(id)arg1;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;

@end
