/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol PVAssetProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) NSDate * clsDistanceIdentity; 
@required
-(NSString *)filename;
-(NSDate *)creationDate;
-(NSString *)cloudIdentifier;
-(NSString *)localIdentifier;
-(CLLocationCoordinate2D)locationCoordinate;
-(NSString *)originalFilename;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(NSData *)distanceIdentity;
-(NSDate *)clsDistanceIdentity;

@end

