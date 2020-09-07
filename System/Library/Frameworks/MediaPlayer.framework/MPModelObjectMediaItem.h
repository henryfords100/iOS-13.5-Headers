/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {

	NSDictionary* _propertyValues;
	MPModelObject* _modelObject;
	/*^block*/id _fallbackArtworkCatalogBlock;

}

@property (nonatomic,readonly) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,copy) id fallbackArtworkCatalogBlock;               //@synthesize fallbackArtworkCatalogBlock=_fallbackArtworkCatalogBlock - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(MPModelObject *)modelObject;
-(id)initWithModelObject:(id)arg1 ;
-(id)fallbackArtworkCatalogBlock;
-(void)setFallbackArtworkCatalogBlock:(id)arg1 ;
@end
