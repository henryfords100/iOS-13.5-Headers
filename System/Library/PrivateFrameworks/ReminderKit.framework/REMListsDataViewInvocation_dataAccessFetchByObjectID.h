/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMListsDataViewInvocation_dataAccessFetchByObjectID : REMStoreInvocation <NSSecureCoding> {

	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * objectIDs;              //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjectIDs:(id)arg1 ;
-(NSArray *)objectIDs;
@end

