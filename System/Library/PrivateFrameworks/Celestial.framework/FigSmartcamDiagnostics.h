/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface FigSmartcamDiagnostics : NSObject {

	NSMutableDictionary* _metadata;

}
-(id)init;
-(id)metadata;
-(BOOL)addMotionStats:(SCD_Struct_Fi120)arg1 ;
-(void)addSceneConfidences:(id)arg1 ;
-(void)addPAMDecisionPreliminary:(id)arg1 ;
-(BOOL)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3 ;
@end

