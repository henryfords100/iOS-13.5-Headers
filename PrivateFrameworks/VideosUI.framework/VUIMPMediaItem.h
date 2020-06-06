/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	NSString* _previewFrameImageIdentifier;
	MPMediaItem* _mediaItem;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)isLocal;
-(id)assetType;
-(id)resolution;
-(id)isPlayable;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)contentRating;
-(id)credits;
-(id)extrasURL;
-(id)studio;
-(id)rentalExpirationDate;
-(id)assetController;
-(id)mediaPlayerMediaItem;
-(id)HLSResolution;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)HLSAudioCapability;
-(id)audioCapability;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
@end
