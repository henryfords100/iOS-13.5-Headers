/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord {

	NSSet* _disabledOwnerIdentifiers;

}

@property (nonatomic,retain) NSSet * disabledOwnerIdentifiers;              //@synthesize disabledOwnerIdentifiers=_disabledOwnerIdentifiers - In the implementation block
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(BOOL)isMasterRecord:(id)arg1 ;
+(BOOL)isMasterRecordID:(id)arg1 ;
-(id)description;
-(id)initWithCKRecord:(id)arg1 disabledOwnerIdentifiers:(id)arg2 schemaVersion:(long long)arg3 ;
-(NSSet *)disabledOwnerIdentifiers;
-(id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2 ;
-(void)setDisabledOwnerIdentifiers:(NSSet *)arg1 ;
@end
