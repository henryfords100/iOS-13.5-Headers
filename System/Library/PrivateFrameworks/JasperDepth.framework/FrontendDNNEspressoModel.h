/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/DNNEspressoModel.h>

@interface FrontendDNNEspressoModel : DNNEspressoModel {

	SCD_Struct_Fr28* _InputBlob;
	SCD_Struct_Fr28* _resultsOutputBlob;
	SCD_Struct_Fr28* _stdOutputBlob;

}

@property (assign,nonatomic) SCD_Struct_Fr28* InputBlob;              //@synthesize InputBlob=_InputBlob - In the implementation block
@property (assign) SCD_Struct_Fr28* resultsOutputBlob;                //@synthesize resultsOutputBlob=_resultsOutputBlob - In the implementation block
@property (assign) SCD_Struct_Fr28* stdOutputBlob;                    //@synthesize stdOutputBlob=_stdOutputBlob - In the implementation block
-(void)setInputBlob:(SCD_Struct_Fr28*)arg1 ;
-(BOOL)initializeInputOutputBlobs;
-(int)processImage:(float*)arg1 withSize:(int)arg2 result:(JDCloudColorCalibrationResult*)arg3 ;
-(SCD_Struct_Fr28*)InputBlob;
-(SCD_Struct_Fr28*)resultsOutputBlob;
-(void)setResultsOutputBlob:(SCD_Struct_Fr28*)arg1 ;
-(SCD_Struct_Fr28*)stdOutputBlob;
-(void)setStdOutputBlob:(SCD_Struct_Fr28*)arg1 ;
@end
