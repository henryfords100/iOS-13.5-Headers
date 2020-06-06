/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1 ;
+(unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
-(id)_className;
-(id)valueForProperty:(id)arg1 ;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(MPMediaItem *)nativeItem;
@end
