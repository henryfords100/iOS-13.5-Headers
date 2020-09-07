/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, NSString, FCFeedGroup, NSArray;

@interface FCFeedGroupEmittingOperation : FCOperation {

	BOOL _resultFinished;
	/*^block*/id _groupEmittingCompletionHandler;
	FCFeedGroupEmittingContext* _context;
	FCFeedGroupEmittingCursor* _fromCursor;
	FCFeedGroupEmittingCursor* _toCursor;
	NSString* _groupEmitterIdentifier;
	FCFeedGroup* _resultGroup;
	NSArray* _resultGroups;
	FCFeedGroupEmittingCursor* _resultCursor;

}

@property (nonatomic,copy) id groupEmittingCompletionHandler;                       //@synthesize groupEmittingCompletionHandler=_groupEmittingCompletionHandler - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingContext * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingCursor * fromCursor;              //@synthesize fromCursor=_fromCursor - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingCursor * toCursor;                //@synthesize toCursor=_toCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier;              //@synthesize groupEmitterIdentifier=_groupEmitterIdentifier - In the implementation block
@property (nonatomic,retain) FCFeedGroup * resultGroup;                             //@synthesize resultGroup=_resultGroup - In the implementation block
@property (nonatomic,retain) NSArray * resultGroups;                                //@synthesize resultGroups=_resultGroups - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingCursor * resultCursor;              //@synthesize resultCursor=_resultCursor - In the implementation block
@property (assign,nonatomic) BOOL resultFinished;                                   //@synthesize resultFinished=_resultFinished - In the implementation block
-(FCFeedGroupEmittingContext *)context;
-(NSArray *)resultGroups;
-(void)setResultGroups:(NSArray *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(NSString *)groupEmitterIdentifier;
-(void)setResultGroup:(FCFeedGroup *)arg1 ;
-(void)setResultFinished:(BOOL)arg1 ;
-(FCFeedGroupEmittingCursor *)fromCursor;
-(void)setResultCursor:(FCFeedGroupEmittingCursor *)arg1 ;
-(void)setGroupEmittingCompletionHandler:(id)arg1 ;
-(FCFeedGroupEmittingCursor *)toCursor;
-(FCFeedGroupEmittingCursor *)resultCursor;
-(FCFeedGroup *)resultGroup;
-(BOOL)resultFinished;
-(id)groupEmittingCompletionHandler;
@end
