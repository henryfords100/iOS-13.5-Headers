/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netServiceWillResolve:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;

@end

