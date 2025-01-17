/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMObject.h>

@class NSData, EMMessageObjectID;

@interface EMOutgoingMessage : EMObject {

	BOOL _shouldSign;
	BOOL _shouldEncrypt;
	NSData* _messageData;
	long long _action;
	EMMessageObjectID* _originalMessageID;

}

@property (assign,nonatomic) long long action;                                   //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL shouldSign;                                    //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                 //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,retain) EMMessageObjectID * originalMessageID;              //@synthesize originalMessageID=_originalMessageID - In the implementation block
@property (nonatomic,copy,readonly) NSData * messageData;                        //@synthesize messageData=_messageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(NSData *)messageData;
-(BOOL)shouldEncrypt;
-(BOOL)shouldSign;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(id)initWithMessageData:(id)arg1 action:(long long)arg2 originalMessageID:(id)arg3 shouldSign:(BOOL)arg4 shouldEncrypt:(BOOL)arg5 ;
-(EMMessageObjectID *)originalMessageID;
-(id)initWithMessageData:(id)arg1 ;
-(void)setOriginalMessageID:(EMMessageObjectID *)arg1 ;
@end

