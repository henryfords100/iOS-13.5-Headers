/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNDirectionOfArrivalEstimator, NSArray, NSString;

@interface SNEstimateDirectionOfArrivalRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNDirectionOfArrivalEstimator* _detector;
	NSArray* _spatialSpectrum;

}

@property (nonatomic,readonly) float azimuth; 
@property (nonatomic,readonly) NSArray * spatialSpectrum;                    //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(float)azimuth;
-(id<SNAnalyzing>)analyzer;
-(NSArray *)spatialSpectrum;
@end
