/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TILanguageModelOfflineLearningHandle, NSString, NSMutableDictionary, NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTask : NSObject {

	TILanguageModelOfflineLearningHandle* _handleForLanguageLikelihood;
	BOOL _cancelled;
	BOOL _oneTimeTask;
	NSString* _clientIdentifier;
	NSMutableDictionary* _handles;

}

@property (nonatomic,readonly) NSMutableDictionary * handles;                                                   //@synthesize handles=_handles - In the implementation block
@property (nonatomic,readonly) TILanguageModelOfflineLearningHandle * handleForLanguageLikelihood; 
@property (nonatomic,readonly) NSString * clientIdentifier;                                                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) id<TILinguisticDataSource> dataSource; 
@property (nonatomic,readonly) NSCharacterSet * linePaddingCharacters; 
@property (nonatomic,readonly) NSSet * forwardedMessageSeparators; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                 //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL oneTimeTask;                                                                //@synthesize oneTimeTask=_oneTimeTask - In the implementation block
+(id)dataSourceForTask;
+(id)taskWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(BOOL)isCancelled;
-(NSMutableDictionary *)handles;
-(id<TILinguisticDataSource>)dataSource;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(void)didFinishLearning;
-(TILanguageModelOfflineLearningHandle *)handleForLanguageLikelihood;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(NSCharacterSet *)linePaddingCharacters;
-(NSSet *)forwardedMessageSeparators;
-(id)handleForLanguage:(id)arg1 ;
-(void)setAdaptationContext:(id)arg1 onHandle:(id)arg2 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg1 withHandle:(id)arg2 ;
-(void)enumerateHandlesForLanguage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg1 forLanguage:(id)arg2 adaptationContext:(id)arg3 ;
-(BOOL)oneTimeTask;
@end

