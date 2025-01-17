/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {

	NSString* _statusText;
	NSArray* _imageData;
	NSArray* _imageAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _inReplyToStatusID;

}

@property (nonatomic,retain) NSString * statusText;                       //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) NSArray * imageData;                         //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSArray * imageAssetURLs;                    //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,retain) NSString * maskedApplicationID;              //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (nonatomic,retain) NSString * inReplyToStatusID;                //@synthesize inReplyToStatusID=_inReplyToStatusID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)imageData;
-(void)setImageData:(NSArray *)arg1 ;
-(NSString *)statusText;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(NSString *)maskedApplicationID;
-(NSString *)inReplyToStatusID;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setInReplyToStatusID:(NSString *)arg1 ;
-(void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

