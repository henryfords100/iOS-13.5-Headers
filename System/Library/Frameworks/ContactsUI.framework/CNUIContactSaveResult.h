/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNMutableContact, NSArray;

@interface CNUIContactSaveResult : NSObject {

	BOOL _success;
	CNMutableContact* _contact;
	NSArray* _identifiersOfIssuedSaveRequests;

}

@property (nonatomic,readonly) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) CNMutableContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSArray * identifiersOfIssuedSaveRequests;              //@synthesize identifiersOfIssuedSaveRequests=_identifiersOfIssuedSaveRequests - In the implementation block
-(CNMutableContact *)contact;
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3 ;
-(NSArray *)identifiersOfIssuedSaveRequests;
@end
