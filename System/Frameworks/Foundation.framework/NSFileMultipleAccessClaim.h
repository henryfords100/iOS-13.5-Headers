/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

	NSMutableArray* _readingURLs;
	unsigned long long* _readingOptions;
	BOOL* _readingURLsDidChange;
	NSMutableArray* _writingURLs;
	unsigned long long* _writingOptions;
	BOOL* _writingURLsDidChange;
	NSMutableArray* _readingLocations;
	NSMutableArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	unsigned long long _currentlyLinkResolvingURLIndex;
	long long _readingLinkResolutionCount;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(/*^block*/id)arg3 ;
@end
