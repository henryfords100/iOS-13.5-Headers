/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSURL, NSData;

@interface _WBSFaviconRecord : NSObject {

	BOOL _isPrivate;
	NSURL* _pageURL;
	NSURL* _originalPageURL;
	NSURL* _iconURL;
	NSData* _iconData;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * pageURL;                      //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,readonly) NSURL * originalPageURL;              //@synthesize originalPageURL=_originalPageURL - In the implementation block
@property (nonatomic,readonly) NSURL * iconURL;                      //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;               //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                       //@synthesize isPrivate=_isPrivate - In the implementation block
+(id)new;
-(id)init;
-(CGSize)size;
-(NSData *)iconData;
-(NSURL *)pageURL;
-(BOOL)isPrivate;
-(NSURL *)iconURL;
-(id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(CGSize)arg5 isPrivate:(BOOL)arg6 ;
-(NSURL *)originalPageURL;
@end
