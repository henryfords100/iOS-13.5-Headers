/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STUIDateTimePickerCellDelegate.h>

@protocol STCustomizeDaysListControllerDelegate;
@class NSDictionary, PSSpecifier, NSString;

@interface STCustomizeDaysListController : PSListController <STUIDateTimePickerCellDelegate> {

	id<STCustomizeDaysListControllerDelegate> _delegate;
	NSDictionary* _timeByDay;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _selectedDaySpecifier;

}

@property (nonatomic,retain) PSSpecifier * timePickerSpecifier;                                      //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedDaySpecifier;                                     //@synthesize selectedDaySpecifier=_selectedDaySpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<STCustomizeDaysListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * timeByDay;                                                 //@synthesize timeByDay=_timeByDay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<STCustomizeDaysListControllerDelegate>)delegate;
-(void)setDelegate:(id<STCustomizeDaysListControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(NSDictionary *)timeByDay;
-(void)setTimeByDay:(NSDictionary *)arg1 ;
-(void)setSelectedDaySpecifier:(PSSpecifier *)arg1 ;
-(id)_localizedDayNames;
-(id)budgetTime:(id)arg1 ;
-(PSSpecifier *)selectedDaySpecifier;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 ;
-(id)_localizedDayOrder;
@end

