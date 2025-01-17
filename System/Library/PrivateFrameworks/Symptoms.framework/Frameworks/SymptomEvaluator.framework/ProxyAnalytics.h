/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ProxyAnalyticsDelegate;
@class NSXPCConnection;

@interface ProxyAnalytics : NSObject {

	id<ProxyAnalyticsDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) id<ProxyAnalyticsDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ProxyAnalyticsDelegate>)delegate;
-(void)setDelegate:(id<ProxyAnalyticsDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 ;
-(void)performPersistentStoreHealthCheck;
@end

