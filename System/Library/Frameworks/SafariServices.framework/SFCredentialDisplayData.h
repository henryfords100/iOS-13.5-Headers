/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSCredentialMatch, NSString, NSDate;

@interface SFCredentialDisplayData : NSObject {

	WBSCredentialMatch* _match;
	NSString* _detail;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) WBSCredentialMatch * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,copy,readonly) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
+(id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2 ;
-(NSDate *)creationDate;
-(NSString *)detail;
-(WBSCredentialMatch *)match;
-(id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3 ;
@end

