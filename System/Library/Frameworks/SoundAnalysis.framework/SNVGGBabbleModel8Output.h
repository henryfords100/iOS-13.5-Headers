/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGBabbleModel8Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _output1;

}

@property (nonatomic,retain) MLMultiArray * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)output1;
-(void)setOutput1:(MLMultiArray *)arg1 ;
-(id)initWithOutput1:(id)arg1 ;
@end

