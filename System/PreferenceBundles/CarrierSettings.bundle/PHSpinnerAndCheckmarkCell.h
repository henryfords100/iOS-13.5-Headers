/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setChecked:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setRow:(int)arg1 ;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
@end
