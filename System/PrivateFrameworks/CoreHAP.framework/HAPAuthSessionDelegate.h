/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAuthSessionDelegate <NSObject>
@required
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authComplete:(id)arg2;

@end
