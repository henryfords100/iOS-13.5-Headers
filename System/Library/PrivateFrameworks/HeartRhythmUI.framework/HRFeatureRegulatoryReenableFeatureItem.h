/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HRFeatureRegulatoryPanelDisplayable.h>

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;
@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {

	NSString* _productName;
	id<HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;

}

@property (assign,nonatomic) NSString * productName;                                                               //@synthesize productName=_productName - In the implementation block
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
-(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(void)setDelegate:(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(NSAttributedString *)valueString;
-(BOOL)isInteractive;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1 ;
-(id)initWithProductName:(id)arg1 delegate:(id)arg2 ;
@end
