/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>
#import <libobjc.A.dylib/CCUIDisplayModuleViewControllerDelegate.h>

@class CCUIContentModuleContext, CCUIDisplayModuleViewController, CCUIDisplayBackgroundViewController, NSString;

@interface CCUIDisplayModule : NSObject <CCUIContentModule, CCUIDisplayModuleViewControllerDelegate> {

	CCUIContentModuleContext* _contentModuleContext;
	CCUIDisplayModuleViewController* _moduleViewController;
	CCUIDisplayBackgroundViewController* _backgroundViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)contentViewControllerForContext:(id)arg1 ;
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(id)_brightnessGlyphPackageDescription;
-(id)_brightnessGlyphStateForBrightnessLevel:(double)arg1 ;
-(void)displayModuleViewController:(id)arg1 brightnessDidChange:(float)arg2 ;
@end

