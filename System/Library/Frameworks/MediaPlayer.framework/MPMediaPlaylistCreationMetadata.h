/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject {

	NSString* _defaultAuthorDisplayName;
	NSString* _name;
	NSString* _authorDisplayName;
	NSString* _descriptionText;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * authorDisplayName;              //@synthesize authorDisplayName=_authorDisplayName - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                //@synthesize descriptionText=_descriptionText - In the implementation block
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)authorDisplayName;
-(void)setAuthorDisplayName:(NSString *)arg1 ;
@end

