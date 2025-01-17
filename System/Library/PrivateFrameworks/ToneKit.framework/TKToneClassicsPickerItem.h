/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKTonePickerItem.h>

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem {

	long long _classicToneIndex;

}

@property (assign,setter=_setClassicToneIndex:,nonatomic) long long classicToneIndex;              //@synthesize classicToneIndex=_classicToneIndex - In the implementation block
@property (nonatomic,readonly) TKTonePickerItem * parentItem; 
-(id)childItemAtIndex:(long long)arg1 ;
-(TKTonePickerItem *)parentItem;
-(void)_setClassicToneIndex:(long long)arg1 ;
-(long long)classicToneIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

