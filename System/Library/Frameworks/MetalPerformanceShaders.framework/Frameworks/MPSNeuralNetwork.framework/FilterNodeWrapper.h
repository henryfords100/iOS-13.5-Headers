/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FilterNodeWrapper : NSObject <NSSecureCoding> {

	FilterGraphNode* node;

}
+(BOOL)supportsSecureCoding;
+(id)wrapperWithFilterNode:(FilterGraphNode*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FilterGraphNode*)node;
-(id)initWithFilterNode:(FilterGraphNode*)arg1 ;
@end
