/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PSMapsFeedbackAction, _PSMapsPredictionContext, NSArray;

@interface _PSMapsFeedback : NSObject {

	BOOL _dryRun;
	_PSMapsFeedbackAction* _action;
	_PSMapsPredictionContext* _context;
	NSArray* _suggestions;

}

@property (assign,nonatomic) BOOL dryRun;                                                //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) _PSMapsFeedbackAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) _PSMapsPredictionContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfEngagedSuggestion; 
-(_PSMapsPredictionContext *)context;
-(_PSMapsFeedbackAction *)action;
-(NSArray *)suggestions;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(unsigned long long)indexOfEngagedSuggestion;
-(id)knowledgeEvent;
-(id)feedbackPayload;
-(id)getTrialID;
-(id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3 ;
@end

