/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCControlChannel.h>

@interface VCControlChannelFaceTime : VCControlChannel {

	unsigned _callID;
	tagHANDLE* _SIPHandle;

}
-(void)dealloc;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)sendReliableMessage:(id)arg1 ;
@end
