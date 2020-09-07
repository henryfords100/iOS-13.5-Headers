/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBPearlMatchingStateProvider.h>

@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;
@class NSString;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider> {

	BOOL _seenMatchResultSinceScreenOn;
	id<SBPearlMatchingStateProviderDelegate> _delegate;
	id<SBUIBiometricResource> _biometricResource;

}

@property (assign,nonatomic) BOOL seenMatchResultSinceScreenOn;                                     //@synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIBiometricResource> biometricResource;                    //@synthesize biometricResource=_biometricResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL pearlMatchEnabledAndPossible; 
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(void)setDelegate:(id<SBPearlMatchingStateProviderDelegate>)arg1 ;
-(void)reset;
-(id<SBUIBiometricResource>)biometricResource;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(id)initWithBiometricResource:(id)arg1 ;
-(BOOL)seenMatchResultSinceScreenOn;
-(BOOL)pearlMatchEnabledAndPossible;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 ;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
@end
