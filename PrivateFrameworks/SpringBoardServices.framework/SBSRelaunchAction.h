/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,retain,readonly) NSURL * targetURL; 
+(id)actionWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(unsigned long long)options;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(NSURL *)targetURL;
@end
