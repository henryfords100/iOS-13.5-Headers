/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation {

	int _state;

}
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end
