/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <WebCore/WAKView.h>

@class UIWebDocumentView, CALayer, UIView;

@interface UIWebPlugInView : WAKView {

	UIWebDocumentView* _webView;
	CALayer* _hostingLayer;
	UIView* _uiView;
	CFRunLoopObserverRef _mainRunLoopDrawObserver;
	BOOL _isFullScreen;
	BOOL _parentedInLayer;
	BOOL _isQuickTimePlugIn;
	BOOL _isMapViewPlugIn;
	BOOL _isiAdPlugIn;

}

@property (assign,getter=isParentedInLayer,nonatomic) BOOL parentedInLayer;              //@synthesize parentedInLayer=_parentedInLayer - In the implementation block
@property (assign,nonatomic) BOOL isQuickTimePlugIn;                                     //@synthesize isQuickTimePlugIn=_isQuickTimePlugIn - In the implementation block
@property (assign,nonatomic) BOOL isMapViewPlugIn;                                       //@synthesize isMapViewPlugIn=_isMapViewPlugIn - In the implementation block
@property (assign,nonatomic) BOOL isiAdPlugIn;                                           //@synthesize isiAdPlugIn=_isiAdPlugIn - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)layout;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)setWebView:(id)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(BOOL)willProvidePluginLayer;
-(void)reshape;
-(id)initWithWebView:(id)arg1 plugInView:(id)arg2 ;
-(void)setIsQuickTimePlugIn:(BOOL)arg1 ;
-(void)setIsMapViewPlugIn:(BOOL)arg1 ;
-(void)setIsiAdPlugIn:(BOOL)arg1 ;
-(id)plugInView;
-(void)viewDidMoveToWindow;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)invalidateGState;
-(void)_reshapeOnMainThread;
-(BOOL)isParented;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInStop;
-(void)webPlugInDestroy;
-(id)objectForWebScript;
-(BOOL)isParentedInLayer;
-(void)setParentedInLayer:(BOOL)arg1 ;
-(void)_connectPluginLayers;
-(void)_disconnectPluginLayers;
-(void)_attachPluginLayerOnMainThread;
-(void)_detachPluginLayerOnMainThread;
-(void)mouseDown:(id)arg1 ;
-(id)pluginLayer;
-(void)attachPluginLayer;
-(void)detachPluginLayer;
-(BOOL)isQuickTimePlugIn;
-(BOOL)isMapViewPlugIn;
-(BOOL)isiAdPlugIn;
@end

