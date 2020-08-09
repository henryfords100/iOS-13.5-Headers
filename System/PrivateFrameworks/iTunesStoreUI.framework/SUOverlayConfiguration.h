/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject {

	NSRegularExpression* _bagKeyPattern;
	long long _cornerRadius;
	BOOL _shouldShowNavigationBar;
	CGSize _size;
	NSString* _transitionName;
	NSRegularExpression* _urlPattern;

}

@property (nonatomic,readonly) long long cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNavigationBar;              //@synthesize shouldShowNavigationBar=_shouldShowNavigationBar - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * transitionName;                 //@synthesize transitionName=_transitionName - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)size;
-(BOOL)matchesURL:(id)arg1 ;
-(long long)cornerRadius;
-(BOOL)shouldShowNavigationBar;
-(NSString *)transitionName;
-(BOOL)matchesURLBagKey:(id)arg1 ;
@end
