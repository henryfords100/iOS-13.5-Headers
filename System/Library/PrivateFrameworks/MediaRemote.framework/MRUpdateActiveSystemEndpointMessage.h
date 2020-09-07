/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) NSString * reason; 
-(unsigned long long)type;
-(NSString *)reason;
-(long long)changeType;
-(long long)operation;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 operation:(long long)arg2 changeType:(long long)arg3 reason:(id)arg4 ;
@end
