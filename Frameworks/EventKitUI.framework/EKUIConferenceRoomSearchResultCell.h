/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIActivityIndicatorView;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _image;
	UIActivityIndicatorView* _spinner;

}
-(id)description;
-(void)safeAreaInsetsDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateSeparatorInset;
-(void)reloadWithConferenceRoom:(id)arg1 ;
@end
