/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PKPaymentHeroImageSet, NSString, PKOSVersionRequirementRange, NSArray;

@interface PKPaymentHeroImage : NSObject {

	NSData* _imageData;
	PKPaymentHeroImageSet* _images;
	BOOL _isBeta;
	NSString* _identifier;
	PKOSVersionRequirementRange* _versionRequirement;
	NSArray* _requiredDeviceFeatures;
	long long _credentialType;
	long long _cardType;

}

@property (nonatomic,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * versionRequirement;              //@synthesize versionRequirement=_versionRequirement - In the implementation block
@property (nonatomic,readonly) NSArray * requiredDeviceFeatures;                              //@synthesize requiredDeviceFeatures=_requiredDeviceFeatures - In the implementation block
@property (nonatomic,readonly) long long credentialType;                                      //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) long long cardType;                                            //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) BOOL isBeta;                                                   //@synthesize isBeta=_isBeta - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(long long)credentialType;
-(BOOL)isBeta;
-(long long)cardType;
-(id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2 ;
-(id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2 ;
-(void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)imageFilePathForImageModel:(id)arg1 ;
-(id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3 ;
-(BOOL)hasCachedImageWithScale:(double)arg1 ;
-(id)imageWithScale:(double)arg1 ;
-(id)URLForImageWithScale:(double)arg1 ;
-(void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isSupportedByDevice:(id)arg1 ;
-(PKOSVersionRequirementRange *)versionRequirement;
-(NSArray *)requiredDeviceFeatures;
@end

