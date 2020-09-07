/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface ISExportDestination : NSObject {

	NSURL* _photoURL;
	NSURL* _videoURL;

}

@property (readonly) NSURL * photoURL;              //@synthesize photoURL=_photoURL - In the implementation block
@property (readonly) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
+(id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2 ;
-(NSURL *)photoURL;
-(NSURL *)videoURL;
-(id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 ;
@end
