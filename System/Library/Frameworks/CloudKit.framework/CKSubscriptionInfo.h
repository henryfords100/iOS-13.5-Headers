/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKSubscription, CKDatabase, CKContainer;

@interface CKSubscriptionInfo : NSObject {

	CKSubscription* _subscription;
	CKDatabase* _database;
	CKContainer* _container;
	/*^block*/id _handler;

}

@property (nonatomic,retain) CKSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)handler;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(CKSubscription *)subscription;
-(void)setSubscription:(CKSubscription *)arg1 ;
@end

