/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata {

	NSDictionary* _incompleteReminderCounts;
	long long _scheduledCount;

}

@property (nonatomic,readonly) NSDictionary * incompleteReminderCounts;              //@synthesize incompleteReminderCounts=_incompleteReminderCounts - In the implementation block
@property (nonatomic,readonly) long long scheduledCount;                             //@synthesize scheduledCount=_scheduledCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)incompleteReminderCounts;
-(long long)scheduledCount;
-(id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2 ;
@end
