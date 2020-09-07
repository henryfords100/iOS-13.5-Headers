/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNAnimationAttributes.h>

@interface KNTransitionAttributes : KNAnimationAttributes
+(id)defaultAttributesForEffect:(id)arg1 ;
+(id)supportedCustomAttributes;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
+(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(id)p_readDeprecatedAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(void)p_readTransitionAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(id)initFromTransitionAttributesArchive:(const TransitionAttributesArchive*)arg1 ;
-(void)encodeToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeSharedAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeTransitionAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
@end
