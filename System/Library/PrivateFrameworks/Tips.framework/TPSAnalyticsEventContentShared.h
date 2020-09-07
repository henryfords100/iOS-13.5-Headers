/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _collectionID;
	NSString* _shareMethod;

}

@property (nonatomic,retain) NSString * contentID;                 //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,retain) NSString * shareMethod;               //@synthesize shareMethod=_shareMethod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(NSString *)shareMethod;
-(void)setShareMethod:(NSString *)arg1 ;
-(id)analyticsEventRepresentation;
-(id)initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3 ;
@end
