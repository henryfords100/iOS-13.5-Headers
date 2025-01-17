/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPresenterDelegate <NSObject>
@property (readonly) BOOL isPresentingModalViewController; 
@required
-(void)sender:(id)arg1 presentViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isPresentingModalViewController;

@end

