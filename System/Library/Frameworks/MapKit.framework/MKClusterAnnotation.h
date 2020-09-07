/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation> {

	NSArray* _memberAnnotations;
	NSString* _clusteringIdentifier;
	CLLocationCoordinate2D __coordinate;
	NSString* __title;
	NSString* __subtitle;
	struct {
		unsigned hasCoordinate : 1;
		unsigned hasTitle : 1;
		unsigned hasSubtitle : 1;
	}  _flags;

}

@property (nonatomic,copy) NSString * clusteringIdentifier;                    //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize _title=__title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize _subtitle=__subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * memberAnnotations;                    //@synthesize memberAnnotations=_memberAnnotations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize _coordinate=__coordinate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSArray *)memberAnnotations;
-(id)initWithMemberAnnotations:(id)arg1 ;
-(NSString *)clusteringIdentifier;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(BOOL)_isMKClusterAnnotation;
-(void)_memberAnnotationCoordinateDidChange;
-(CLLocationCoordinate2D)_averageCoordinate;
@end
