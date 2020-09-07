/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe; 
@property (readonly) BOOL isCandidateForPerspective; 
@property (readonly) BOOL isCandidateForHorizon; 
+(id)factCandidateForHorizon;
+(id)factCandidateForPerspective;
+(id)factCandidateForReframe;
+(id)factCandidateForStill;
+(id)factCandidateForVideo;
+(id)sharedPregateRules;
+(id)pregateRulesSystemWithConstants:(id)arg1 ;
-(BOOL)isCandidateForReframe;
-(BOOL)isCandidateForPerspective;
-(BOOL)isCandidateForHorizon;
@end
