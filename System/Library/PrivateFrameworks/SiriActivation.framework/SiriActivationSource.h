/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriActivation/SiriActivation-Structs.h>
@class BSServiceConnection, NSString;

@interface SiriActivationSource : NSObject {

	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _active;
	BOOL _knowsIfActive;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(oneway void)activeChangedTo:(id)arg1 ;
@end
