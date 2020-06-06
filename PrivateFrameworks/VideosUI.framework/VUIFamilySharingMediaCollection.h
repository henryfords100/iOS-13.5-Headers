/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>

@class NSString, NSArray, VUIFamilySharingEntity;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection {

	NSString* _artworkURL;
	NSString* _amsShowIdentifier;
	NSString* _amsSeasonIdentifier;
	NSArray* _seasonNumbers;
	VUIFamilySharingEntity* _entity;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                        //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * amsShowIdentifier;                 //@synthesize amsShowIdentifier=_amsShowIdentifier - In the implementation block
@property (nonatomic,retain) NSString * amsSeasonIdentifier;               //@synthesize amsSeasonIdentifier=_amsSeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * seasonNumbers;                      //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
-(id)title;
-(id)duration;
-(id)contentDescription;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(VUIFamilySharingEntity *)entity;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)genreTitle;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)contentRating;
-(id)releaseYear;
-(NSArray *)seasonNumbers;
-(id)seasonCount;
-(void)setSeasonNumbers:(NSArray *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3 ;
-(NSString *)amsSeasonIdentifier;
-(NSString *)amsShowIdentifier;
-(void)setAmsShowIdentifier:(NSString *)arg1 ;
-(void)setAmsSeasonIdentifier:(NSString *)arg1 ;
@end
