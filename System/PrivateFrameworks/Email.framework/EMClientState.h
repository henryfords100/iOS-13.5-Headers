/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFObserver;
@class EFObservable, EMRemoteConnection, NSString;

@interface EMClientState : NSObject <EFLoggable> {

	BOOL _isForeground;
	EFObservable*<EFObserver> _foregroundObservable;
	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isForeground;                                           //@synthesize isForeground=_isForeground - In the implementation block
@property (nonatomic,retain) EFObservable*<EFObserver> foregroundObservable;              //@synthesize foregroundObservable=_foregroundObservable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(BOOL)isForeground;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)_updateRemoteInterface;
-(void)_handleApplicationWillEnterForeground;
-(void)_handleApplicationDidEnterBackground;
-(EFObservable*<EFObserver>)foregroundObservable;
-(void)setIsForeground:(BOOL)arg1 ;
-(void)setCurrentlyVisibleMailboxes:(id)arg1 ;
-(id)daemonBoosterWithDescription:(id)arg1 ;
-(void)setForegroundObservable:(EFObservable*<EFObserver>)arg1 ;
@end
