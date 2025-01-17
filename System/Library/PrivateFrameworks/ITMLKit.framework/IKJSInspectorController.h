/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKJSInspectorControllerDelegate.h>

@protocol IKJSInspectorControllerDelegate, IKNetworkRequestLoader;
@class IKAppContext, RWIProtocolInspector, NSDate, IKDOMDocument, IKJSInspectorDOMAgent, IKJSInspectorNetworkAgent, IKJSInspectorPageAgent, IKJSInspectorCSSAgent, IKJSInspectorStorageAgent, NSString;

@interface IKJSInspectorController : NSObject <IKJSInspectorControllerDelegate> {

	struct {
		BOOL respondsToInspectElementModeChanged;
		BOOL respondsToHighlightViewForElementWithOneID;
		BOOL respondsToHighlightViewForElementWithManyIDs;
		BOOL respondsToCancelHighlightView;
	}  _delegateFlags;
	struct {
		BOOL respondsToActiveDocument;
	}  _appFlags;
	IKAppContext* _appContext;
	id<IKJSInspectorControllerDelegate> _delegate;
	RWIProtocolInspector* _inspector;
	NSDate* _inspectorConnectDate;
	id<IKNetworkRequestLoader> _requestLoader;
	IKDOMDocument* _activeDocument;
	IKJSInspectorDOMAgent* _domAgent;
	IKJSInspectorNetworkAgent* _networkAgent;
	IKJSInspectorPageAgent* _pageAgent;
	IKJSInspectorCSSAgent* _cssAgent;
	IKJSInspectorStorageAgent* _storageAgent;
	id _inspectorConnectedToken;
	id _inspectorDisconnectedToken;

}

@property (assign,nonatomic,__weak) IKDOMDocument * activeDocument;                                            //@synthesize activeDocument=_activeDocument - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorDOMAgent * domAgent;                                        //@synthesize domAgent=_domAgent - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorNetworkAgent * networkAgent;                                //@synthesize networkAgent=_networkAgent - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorPageAgent * pageAgent;                                      //@synthesize pageAgent=_pageAgent - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorCSSAgent * cssAgent;                                        //@synthesize cssAgent=_cssAgent - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorStorageAgent * storageAgent;                                //@synthesize storageAgent=_storageAgent - In the implementation block
@property (nonatomic,readonly) id inspectorConnectedToken;                                                     //@synthesize inspectorConnectedToken=_inspectorConnectedToken - In the implementation block
@property (nonatomic,readonly) id inspectorDisconnectedToken;                                                  //@synthesize inspectorDisconnectedToken=_inspectorDisconnectedToken - In the implementation block
@property (__weak,readonly) IKAppContext * appContext;                                                         //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic,__weak) id<IKJSInspectorControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RWIProtocolInspector * inspector;                                               //@synthesize inspector=_inspector - In the implementation block
@property (nonatomic,readonly) NSDate * inspectorConnectDate;                                                  //@synthesize inspectorConnectDate=_inspectorConnectDate - In the implementation block
@property (nonatomic,readonly) id<IKNetworkRequestLoader> requestLoader;                                       //@synthesize requestLoader=_requestLoader - In the implementation block
@property (getter=isInspectElementModeEnabled,nonatomic,readonly) BOOL inspectElementModeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IKJSInspectorControllerDelegate>)delegate;
-(void)setDelegate:(id<IKJSInspectorControllerDelegate>)arg1 ;
-(RWIProtocolInspector *)inspector;
-(IKJSInspectorNetworkAgent *)networkAgent;
-(IKDOMDocument *)activeDocument;
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(void)appDocumentDidLoad:(id)arg1 ;
-(void)appDocumentDidUnload:(id)arg1 ;
-(void)appDocumentDidAppear:(id)arg1 ;
-(void)appDocumentDidDisappear:(id)arg1 ;
-(void)appDocumentDidUpdate:(id)arg1 ;
-(id<IKNetworkRequestLoader>)requestLoader;
-(void)unregisterLoaderWithIdentifier:(id)arg1 ;
-(id)registerLoaderWithIdentifier:(id)arg1 ;
-(BOOL)isInspectElementModeEnabled;
-(void)inspectNodeWithID:(long long)arg1 ;
-(void)inspectElementModeChanged:(BOOL)arg1 ;
-(BOOL)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)cancelHighlightView;
-(NSDate *)inspectorConnectDate;
-(IKJSInspectorStorageAgent *)storageAgent;
-(void)setActiveDocument:(IKDOMDocument *)arg1 ;
-(IKJSInspectorDOMAgent *)domAgent;
-(id)inspectorConnectedToken;
-(id)inspectorDisconnectedToken;
-(IKJSInspectorCSSAgent *)cssAgent;
-(void)updateStylesheets;
-(IKJSInspectorPageAgent *)pageAgent;
-(void)evaluateMediaQuery:(/*^block*/id)arg1 ;
-(void)resetStylesFromNode:(id)arg1 ;
-(void)_updateCurrentActiveDocument;
-(id)nodeById:(long long)arg1 ;
-(id)nodesByIds:(id)arg1 ;
-(id)styleFromComposer:(id)arg1 ;
-(void)didAddEventListenerForDOMNode:(id)arg1 ;
-(void)willRemoveEventListenerForDOMNode:(id)arg1 ;
@end

