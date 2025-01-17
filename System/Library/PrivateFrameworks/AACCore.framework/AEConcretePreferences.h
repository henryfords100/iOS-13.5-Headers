/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEPreferences.h>

@class NSString;

@interface AEConcretePreferences : NSObject <AEPreferences>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisableContinuity:(BOOL)arg1 ;
-(void)setPresentShields:(BOOL)arg1 ;
-(BOOL)shouldPresentShields;
-(void)setRestrictFrontmostApp:(BOOL)arg1 ;
-(BOOL)shouldRestrictFrontmostApp;
-(void)setCreateAssessmentFile:(BOOL)arg1 ;
-(BOOL)shouldCreateAssessmentFile;
-(void)setDisableSiri:(BOOL)arg1 ;
-(BOOL)shouldDisableSiri;
-(BOOL)shouldDisableContinuity;
-(void)setScrubPasteboard:(BOOL)arg1 ;
-(BOOL)shouldScrubPasteboard;
-(void)setRestrictNetworkAccess:(BOOL)arg1 ;
-(BOOL)shouldRestrictNetworkAccess;
-(void)setPauseMedia:(BOOL)arg1 ;
-(BOOL)shouldPauseMedia;
-(void)setStopAirPlayBeforehand:(BOOL)arg1 ;
-(BOOL)shouldStopAirplayBeforehand;
-(void)setWhitelistHotkeys:(BOOL)arg1 ;
-(BOOL)shouldWhitelistHotkeys;
-(void)setRestrictContentCapture:(BOOL)arg1 ;
-(BOOL)shouldRestrictContentCapture;
-(void)setDisableTrackpadLookup:(BOOL)arg1 ;
-(BOOL)shouldDisableTrackpadLookup;
-(id)ignorePresentShieldsKey;
-(BOOL)assessmentBoolForKey:(id)arg1 ;
-(void)setAssessmentBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)ignoreCreateAssessmentFileKey;
-(id)ignoreDisableSiriKey;
-(id)ignoreDisableContinuityKey;
-(id)ignoreScrubPasteboardKey;
-(id)ignoreRestrictNetworkAccessKey;
-(id)ignoreRestrictFrontmostAppKey;
-(id)ignorePauseMediaKey;
-(id)ignoreStopAirPlayBeforehandKey;
-(id)ignoreWhitelistHotkeysKey;
-(id)ignoreRestrictContentCaptureKey;
-(id)ignoreDisableTrackpadLookupKey;
-(id)assessmentPreferenceDomain;
@end

