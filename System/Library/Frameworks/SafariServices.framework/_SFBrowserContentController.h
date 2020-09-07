/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager;


@protocol _SFBrowserContentController <NSObject>
@property (nonatomic,readonly) id<_SFBrowserDocument> activeDocument; 
@property (getter=isShowingReader,nonatomic,readonly) BOOL showingReader; 
@property (assign,nonatomic) BOOL keepBarsMinimized; 
@property (nonatomic,readonly) _SFPerSitePreferencesVendor * perSitePreferencesVendor; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomManager; 
@required
-(id<_SFBrowserDocument>)activeDocument;
-(BOOL)isShowingReader;
-(void)toggleShowingReaderForUserAction;
-(void)setKeepBarsMinimized:(BOOL)arg1;
-(_SFPageZoomPreferenceManager *)pageZoomManager;
-(_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
-(BOOL)keepBarsMinimized;

@end
