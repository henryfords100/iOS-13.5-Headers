/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <CalendarUIKit/EKSliceDescription.h>

@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription {

	EKSeriesDetails* _updatedMainSeriesDetails;
	EKSeriesDetails* _createdSeriesDetails;

}

@property (copy) EKSeriesDetails * updatedMainSeriesDetails;              //@synthesize updatedMainSeriesDetails=_updatedMainSeriesDetails - In the implementation block
@property (copy) EKSeriesDetails * createdSeriesDetails;                  //@synthesize createdSeriesDetails=_createdSeriesDetails - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKSeriesDetails *)updatedMainSeriesDetails;
-(void)setUpdatedMainSeriesDetails:(EKSeriesDetails *)arg1 ;
-(EKSeriesDetails *)createdSeriesDetails;
-(void)setCreatedSeriesDetails:(EKSeriesDetails *)arg1 ;
@end
