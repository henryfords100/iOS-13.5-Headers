/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(void)setDataSourceDelegate:(id)arg1;
-(id)navigationBarTitle;

@required
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(id)titleForSection:(unsigned long long)arg1;
-(id)footerTextForSection:(unsigned long long)arg1;

@end

