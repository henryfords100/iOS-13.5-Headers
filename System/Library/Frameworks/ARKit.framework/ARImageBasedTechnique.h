/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject;

@interface ARImageBasedTechnique : ARTechnique {

	NSMutableArray* _pendingResultData;
	NSMutableArray* _pendingFrameReferences;
	NSMutableArray* _pendingRequestContexts;
	NSObject*<OS_dispatch_semaphore> _pendingRequestsSemaphore;

}
-(id)init;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(BOOL)context:(id)arg1 matchesFrameReference:(id)arg2 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrameReference:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrame:(CVBufferRef)arg2 ;
-(void)pushResultData:(id)arg1 forTimestamp:(double)arg2 ;
@end

