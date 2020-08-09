/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/DBSDisplayZoomOptionViewDelegate.h>

@protocol DBSDisplayZoomTableViewCellDelegate;
@class DBSDisplayZoomOptionView, NSString;

@interface DBSDisplayZoomTableViewCell : UITableViewCell <DBSDisplayZoomOptionViewDelegate> {

	id<DBSDisplayZoomTableViewCellDelegate> _delegate;
	DBSDisplayZoomOptionView* _standardOptionView;
	DBSDisplayZoomOptionView* _zoomedOptionView;

}

@property (nonatomic,retain) DBSDisplayZoomOptionView * standardOptionView;                        //@synthesize standardOptionView=_standardOptionView - In the implementation block
@property (nonatomic,retain) DBSDisplayZoomOptionView * zoomedOptionView;                          //@synthesize zoomedOptionView=_zoomedOptionView - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDisplayZoomTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<DBSDisplayZoomTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<DBSDisplayZoomTableViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureView;
-(DBSDisplayZoomOptionView *)standardOptionView;
-(DBSDisplayZoomOptionView *)zoomedOptionView;
-(void)updateSelectedViewWithOption:(unsigned long long)arg1 ;
-(void)userDidTapOnDisplayZoomOptionView:(id)arg1 ;
-(void)setStandardOptionView:(DBSDisplayZoomOptionView *)arg1 ;
-(void)setZoomedOptionView:(DBSDisplayZoomOptionView *)arg1 ;
@end
