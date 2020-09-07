/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteMemberShareRelationship : FATObject {

	NSString* _displayName;
	NSNumber* _recipientUserId;
	NSNumber* _privilege;
	EDAMNoteShareRelationshipRestrictions* _restrictions;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * recipientUserId;                                        //@synthesize recipientUserId=_recipientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                              //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) EDAMNoteShareRelationshipRestrictions * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                                           //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(EDAMNoteShareRelationshipRestrictions *)restrictions;
-(void)setRestrictions:(EDAMNoteShareRelationshipRestrictions *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientUserId;
-(void)setRecipientUserId:(NSNumber *)arg1 ;
@end
