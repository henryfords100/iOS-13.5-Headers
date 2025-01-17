/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideo.h>

@protocol SVVideo <SVIdentifiable>
@property (nonatomic,readonly) unsigned long long videoType; 
@property (nonatomic,readonly) BOOL allowsCallToActionBar; 
@required
-(unsigned long long)videoType;
-(BOOL)allowsCallToActionBar;

@end


@class NSString;

@interface SVVideo : NSObject <SVVideo> {

	BOOL _allowsCallToActionBar;
	unsigned long long _videoType;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoType;              //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) BOOL allowsCallToActionBar;                //@synthesize allowsCallToActionBar=_allowsCallToActionBar - In the implementation block
-(NSString *)identifier;
-(unsigned long long)videoType;
-(BOOL)allowsCallToActionBar;
-(id)initWithVideoType:(unsigned long long)arg1 ;
@end

