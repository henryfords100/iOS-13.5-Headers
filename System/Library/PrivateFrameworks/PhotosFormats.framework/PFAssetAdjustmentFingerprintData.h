/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface PFAssetAdjustmentFingerprintData : NSObject {

	NSString* _adjustmentType;
	NSString* _adjustmentCompoundVersion;
	NSString* _adjustmentCreatorCode;
	unsigned long long _adjustmentSourceType;
	NSData* _simpleAdjustmentData;
	NSData* _baseImage;
	NSString* _baseImageFingerprint;
	NSData* _largeAdjustmentData;
	NSString* _largeAdjustmentDataFingerprint;
	NSData* _secondaryAdjustmentData;

}

@property (nonatomic,copy) NSString * adjustmentType;                              //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCompoundVersion;                   //@synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCreatorCode;                       //@synthesize adjustmentCreatorCode=_adjustmentCreatorCode - In the implementation block
@property (assign,nonatomic) unsigned long long adjustmentSourceType;              //@synthesize adjustmentSourceType=_adjustmentSourceType - In the implementation block
@property (nonatomic,copy) NSData * simpleAdjustmentData;                          //@synthesize simpleAdjustmentData=_simpleAdjustmentData - In the implementation block
@property (nonatomic,copy) NSData * baseImage;                                     //@synthesize baseImage=_baseImage - In the implementation block
@property (nonatomic,copy) NSString * baseImageFingerprint;                        //@synthesize baseImageFingerprint=_baseImageFingerprint - In the implementation block
@property (nonatomic,copy) NSData * largeAdjustmentData;                           //@synthesize largeAdjustmentData=_largeAdjustmentData - In the implementation block
@property (nonatomic,copy) NSString * largeAdjustmentDataFingerprint;              //@synthesize largeAdjustmentDataFingerprint=_largeAdjustmentDataFingerprint - In the implementation block
@property (nonatomic,copy) NSData * secondaryAdjustmentData;                       //@synthesize secondaryAdjustmentData=_secondaryAdjustmentData - In the implementation block
-(NSString *)adjustmentType;
-(void)setAdjustmentType:(NSString *)arg1 ;
-(void)setAdjustmentCompoundVersion:(NSString *)arg1 ;
-(void)setAdjustmentCreatorCode:(NSString *)arg1 ;
-(void)setAdjustmentSourceType:(unsigned long long)arg1 ;
-(void)setLargeAdjustmentDataFingerprint:(NSString *)arg1 ;
-(void)setLargeAdjustmentData:(NSData *)arg1 ;
-(void)setSimpleAdjustmentData:(NSData *)arg1 ;
-(void)setBaseImageFingerprint:(NSString *)arg1 ;
-(void)setBaseImage:(NSData *)arg1 ;
-(NSData *)simpleAdjustmentData;
-(NSString *)adjustmentCreatorCode;
-(NSString *)adjustmentCompoundVersion;
-(unsigned long long)adjustmentSourceType;
-(NSData *)baseImage;
-(NSString *)baseImageFingerprint;
-(NSData *)largeAdjustmentData;
-(NSString *)largeAdjustmentDataFingerprint;
-(NSData *)secondaryAdjustmentData;
-(void)setSecondaryAdjustmentData:(NSData *)arg1 ;
@end

