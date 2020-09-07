/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOMapItemParentVenue : NSObject {

	unsigned long long _businessID;
	int _featureType;

}

@property (nonatomic,readonly) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) int featureType;                            //@synthesize featureType=_featureType - In the implementation block
-(id)init;
-(int)featureType;
-(unsigned long long)businessID;
-(id)initWithLocatedInsideInfo:(id)arg1 ;
-(id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2 ;
@end
