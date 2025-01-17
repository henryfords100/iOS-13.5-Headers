/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientRegistrationDelegate <NSObject>
@optional
-(void)operatorNameChanged:(id)arg1 name:(id)arg2;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2;
-(void)voiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedVoiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
-(void)cellChanged:(id)arg1 cell:(id)arg2;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
-(void)networkListAvailable:(id)arg1 list:(id)arg2;
-(void)customerServiceProfileChanged:(id)arg1 visible:(BOOL)arg2;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3;
-(void)networkReselectionNeeded:(id)arg1;
-(void)encryptionStatusChanged:(id)arg1 info:(id)arg2;

@end

