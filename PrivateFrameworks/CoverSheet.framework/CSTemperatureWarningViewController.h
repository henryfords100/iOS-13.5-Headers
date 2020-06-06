/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>

@protocol CSThermalStatusProviding;
@class NSString;

@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate> {

	id<CSThermalStatusProviding> _thermalStatusProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(id)initWithThermalStatusProvider:(id)arg1 ;
@end
