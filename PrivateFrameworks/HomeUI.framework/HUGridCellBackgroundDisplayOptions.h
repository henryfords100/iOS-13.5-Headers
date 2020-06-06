/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIVisualEffect, NSString;

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	unsigned long long _contentColorStyle;
	unsigned long long _displayStyle;
	UIVisualEffect* _backgroundVisualEffect;

}

@property (assign,nonatomic) unsigned long long displayStyle;                      //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) UIVisualEffect * backgroundVisualEffect;              //@synthesize backgroundVisualEffect=_backgroundVisualEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long contentColorStyle;                 //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
+(id)defaultOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(unsigned long long)contentColorStyle;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(UIVisualEffect *)backgroundVisualEffect;
-(void)setBackgroundVisualEffect:(UIVisualEffect *)arg1 ;
@end
