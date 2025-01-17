/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject {

	NSNumber* _sessions;
	NSString* _subjectConsumerKey;
	NSString* _subjectConsumerSecret;

}

@property (nonatomic,retain) NSNumber * sessions;                           //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerKey;                 //@synthesize subjectConsumerKey=_subjectConsumerKey - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerSecret;              //@synthesize subjectConsumerSecret=_subjectConsumerSecret - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)sessions;
-(void)setSessions:(NSNumber *)arg1 ;
-(NSString *)subjectConsumerKey;
-(void)setSubjectConsumerKey:(NSString *)arg1 ;
-(NSString *)subjectConsumerSecret;
-(void)setSubjectConsumerSecret:(NSString *)arg1 ;
@end

