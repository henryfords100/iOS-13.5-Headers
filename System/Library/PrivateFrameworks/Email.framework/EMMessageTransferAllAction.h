/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageTransferAction.h>

@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction {

	NSArray* _mailboxObjectIDs;

}

@property (nonatomic,copy,readonly) NSArray * mailboxObjectIDs;              //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(NSArray *)mailboxObjectIDs;
-(id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 destinationMailbox:(id)arg3 copyMessages:(BOOL)arg4 ;
-(id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 specialDestinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
@end
