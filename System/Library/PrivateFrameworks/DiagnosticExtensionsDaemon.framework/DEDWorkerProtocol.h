/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DEDWorkerProtocol <NSObject>
@required
-(long long)transportType;
-(void)cancelSession:(id)arg1;
-(void)pingSession:(id)arg1;
-(void)listAvailableExtensionsForSession:(id)arg1;
-(void)getSessionStatusWithSession:(id)arg1;
-(void)syncSessionStatusWithSession:(id)arg1;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
-(void)scheduleNotificationForSession:(id)arg1;
-(void)cancelNotificationForSession:(id)arg1;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2;
-(void)commitSession:(id)arg1;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;

@end

