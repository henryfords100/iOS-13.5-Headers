/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableArray, NSData, NSString;

@interface CLSContactHistoryCollector : NSObject <CNChangeHistoryEventVisitor> {

	BOOL _didDropEverything;
	NSMutableArray* _insertedContactIdentifiers;
	NSMutableArray* _updatedContactIdentifiers;
	NSMutableArray* _deletedContactIdentifiers;
	NSData* _contactHistoryToken;

}

@property (assign) BOOL didDropEverything;                                             //@synthesize didDropEverything=_didDropEverything - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertedContactIdentifiers;              //@synthesize insertedContactIdentifiers=_insertedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedContactIdentifiers;               //@synthesize updatedContactIdentifiers=_updatedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedContactIdentifiers;               //@synthesize deletedContactIdentifiers=_deletedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSData * contactHistoryToken;                             //@synthesize contactHistoryToken=_contactHistoryToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(NSMutableArray *)deletedContactIdentifiers;
-(void)setDeletedContactIdentifiers:(NSMutableArray *)arg1 ;
-(NSData *)contactHistoryToken;
-(NSMutableArray *)updatedContactIdentifiers;
-(BOOL)didDropEverything;
-(void)setDidDropEverything:(BOOL)arg1 ;
-(NSMutableArray *)insertedContactIdentifiers;
-(void)setInsertedContactIdentifiers:(NSMutableArray *)arg1 ;
-(void)setUpdatedContactIdentifiers:(NSMutableArray *)arg1 ;
-(void)setContactHistoryToken:(NSData *)arg1 ;
@end

