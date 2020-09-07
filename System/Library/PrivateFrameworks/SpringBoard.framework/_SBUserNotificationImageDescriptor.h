/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface _SBUserNotificationImageDescriptor : NSObject {

	NSString* _imagePath;
	NSString* _catalogPath;
	NSString* _catalogKey;
	UIImage* _lazy_image;

}

@property (nonatomic,readonly) UIImage * image; 
-(UIImage *)image;
-(id)initWithImagePath:(id)arg1 ;
-(id)initWithImageCatalogPath:(id)arg1 catalogKey:(id)arg2 ;
@end
