/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGTextFeature : NSObject {

	float _weight;
	NSString* _string;
	NSString* _originalString;
	unsigned long long _type;
	unsigned long long _origin;

}

@property (nonatomic,readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * originalString;              //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) float weight;                           //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned long long origin;              //@synthesize origin=_origin - In the implementation block
+(id)stringForFeatureOrigin:(unsigned long long)arg1 ;
+(id)stringForFeatureType:(unsigned long long)arg1 ;
+(id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4 ;
+(id)_stringToIndexFromTokens:(id)arg1 ;
+(id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4 ;
+(id)_tokensFromString:(id)arg1 lemmatize:(BOOL)arg2 ;
+(id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 options:(unsigned long long)arg5 ;
+(id)_localizedNameForLocalizableNode:(id)arg1 ;
+(id)graphNamesForNode:(id)arg1 ;
+(id)mergedTextFeatureFromTextFeatures:(id)arg1 ;
+(id)vipTextFeatureTypes;
+(unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1 ;
-(NSString *)string;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)origin;
-(float)weight;
-(NSString *)originalString;
-(id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 origin:(unsigned long long)arg5 ;
-(void)markAsStrippedOut;
@end

