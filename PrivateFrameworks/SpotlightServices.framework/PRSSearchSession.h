/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PARSessionDelegate.h>

@protocol PRSSessionController, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSString, NSDictionary, PRSFeedbackProxy, NSObject, NSArray, PARSession, NSSet, PRSRankingServerKnobs, SSPlistDataReader;

@interface PRSSearchSession : NSObject <PARSessionDelegate> {

	NSMutableArray* _feedback;
	id<PRSSessionController> _client;
	double _lastQueryTime;
	NSString* _queryLanguage;
	NSDictionary* _sqfData;
	NSDictionary* _serverFeatures;
	NSString* _userAgent;
	BOOL _parsecFeedbackAllowed;
	PRSFeedbackProxy* _listener;
	BOOL _configuredSession;
	NSObject*<OS_dispatch_queue> _clientQueue;
	double _sessionStartTime;
	NSArray* _supportedServices;
	NSString* _modelL2Version;
	PARSession* _session;
	NSObject*<OS_dispatch_source> _quiescenceTimer;
	double _retryAfter;

}

@property (retain) PARSession * session;                                            //@synthesize session=_session - In the implementation block
@property (retain) NSString * userAgent;                                            //@synthesize userAgent=_userAgent - In the implementation block
@property (assign) BOOL configuredSession;                                          //@synthesize configuredSession=_configuredSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> quiescenceTimer;                   //@synthesize quiescenceTimer=_quiescenceTimer - In the implementation block
@property (assign) double retryAfter;                                               //@synthesize retryAfter=_retryAfter - In the implementation block
@property (nonatomic,readonly) id<SFFeedbackListener> listener; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) double sessionStartTime;                               //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (nonatomic,readonly) double searchRenderTimeout; 
@property (nonatomic,readonly) double suggestionsRenderTimeout; 
@property (nonatomic,readonly) NSArray * supportedServices;                         //@synthesize supportedServices=_supportedServices - In the implementation block
@property (nonatomic,readonly) NSSet * appBlacklist; 
@property (nonatomic,readonly) PRSRankingServerKnobs * rankingKnobs; 
@property (nonatomic,readonly) SSPlistDataReader * cepDictionary; 
@property (nonatomic,readonly) SSPlistDataReader * cannedCEPValues; 
@property (nonatomic,readonly) NSString * modelL2Version;                           //@synthesize modelL2Version=_modelL2Version - In the implementation block
@property (nonatomic,readonly) BOOL disableAsTypedSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SFFeedbackListener>)listener;
-(PARSession *)session;
-(void)setSession:(PARSession *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)activate;
-(void)deactivate;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setUserAgentString:(id)arg1 ;
-(void)pruneCache;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)supportedServices;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(void)session:(id)arg1 didDownloadResource:(id)arg2 ;
-(void)session:(id)arg1 didDeleteResource:(id)arg2 ;
-(double)searchRenderTimeout;
-(BOOL)disableAsTypedSuggestion;
-(void)setQueryLanguage:(id)arg1 ;
-(id)feedbackListener;
-(NSSet *)appBlacklist;
-(void)warmup;
-(void)queryCompleted:(id)arg1 ;
-(NSString *)modelL2Version;
-(void)setFeedbackStartTime;
-(id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4 ;
-(void)setConfiguredSession:(BOOL)arg1 ;
-(double)sessionStartTime;
-(BOOL)configuredSession;
-(id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7 ;
-(void)getFTEStringsWithReply:(/*^block*/id)arg1 ;
-(double)suggestionsRenderTimeout;
-(id)initWithClient:(id)arg1 clientQueue:(id)arg2 ;
-(void)setParsecFeedbackAllowed:(BOOL)arg1 ;
-(id)queryWithEngagedSuggestion:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7 ;
-(id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3 ;
-(id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6 ;
-(void)getCachedQueries:(id*)arg1 results:(id*)arg2 webSearch:(BOOL)arg3 ;
-(SSPlistDataReader *)cepDictionary;
-(PRSRankingServerKnobs *)rankingKnobs;
-(void)shrinkCaches;
-(SSPlistDataReader *)cannedCEPValues;
-(void)setSessionStartTime:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)quiescenceTimer;
-(void)setQuiescenceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)retryAfter;
-(void)setRetryAfter:(double)arg1 ;
@end
