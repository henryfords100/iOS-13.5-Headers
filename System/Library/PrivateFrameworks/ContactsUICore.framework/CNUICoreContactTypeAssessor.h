/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject {

	CNFuture* _familyInfoFuture;

}

@property (nonatomic,readonly) CNFuture * familyInfoFuture;              //@synthesize familyInfoFuture=_familyInfoFuture - In the implementation block
+(id)keysToFetch;
-(id)init;
-(id)initWithFamilyInfoFuture:(id)arg1 ;
-(long long)estiamtedTypeOfContact:(id)arg1 ;
-(id)initWithFamilyInfo:(id)arg1 ;
-(CNFuture *)familyInfoFuture;
@end

