/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUDocumentSectionBlueprintProvider.h>

@protocol NUDocumentSectionBlueprintProvider <NSObject>
@required
-(id)observableHeaderBlueprint;
-(id)observableContentOverlayBlueprintData;
-(id)observableFooterBlueprint;

@end


@class FCObservable, NSString;

@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider> {

	FCObservable* _tempObservableHeaderBlueprint;
	FCObservable* _tempObservableFooterBlueprint;
	FCObservable* _tempObservableContentOverlayBlueprintData;

}

@property (nonatomic,readonly) FCObservable * tempObservableHeaderBlueprint;                          //@synthesize tempObservableHeaderBlueprint=_tempObservableHeaderBlueprint - In the implementation block
@property (nonatomic,readonly) FCObservable * tempObservableFooterBlueprint;                          //@synthesize tempObservableFooterBlueprint=_tempObservableFooterBlueprint - In the implementation block
@property (nonatomic,readonly) FCObservable * tempObservableContentOverlayBlueprintData;              //@synthesize tempObservableContentOverlayBlueprintData=_tempObservableContentOverlayBlueprintData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)observableHeaderBlueprint;
-(id)observableContentOverlayBlueprintData;
-(id)observableFooterBlueprint;
-(FCObservable *)tempObservableHeaderBlueprint;
-(FCObservable *)tempObservableFooterBlueprint;
-(FCObservable *)tempObservableContentOverlayBlueprintData;
@end

