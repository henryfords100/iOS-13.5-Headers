/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolution.h>

@interface MPSCNNFullyConnected : MPSCNNConvolution
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 convolutionTranspose:(BOOL)arg7 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 kernelOffset:(SCD_Struct_MP11*)arg5 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 ;
@end

