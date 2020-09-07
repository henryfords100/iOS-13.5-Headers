/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFQuotedContentAttribution : NSObject {

	long long _type;
	NSString* _senderName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderName;              //@synthesize senderName=_senderName - In the implementation block
+(id)noAttribution;
+(id)unknownAttribution;
+(id)attributionWithSenderName:(id)arg1 ;
-(id)debugDescription;
-(long long)type;
-(NSString *)senderName;
-(id)initWithType:(long long)arg1 senderName:(id)arg2 ;
@end
