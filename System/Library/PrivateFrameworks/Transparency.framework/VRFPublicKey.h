/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface VRFPublicKey : GPBMessage

@property (assign) BOOL needsRefresh; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (assign,nonatomic) int type; 
+(id)descriptor;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
@end
