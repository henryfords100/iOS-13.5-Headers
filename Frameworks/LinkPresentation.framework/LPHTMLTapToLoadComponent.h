/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class DOMElement, NSString;

@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener> {

	DOMElement* _tapToLoadLabelElement;
	DOMElement* _tapToLoadSpinnerElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)buildComponents;
-(id)initWithThemePath:(id)arg1 generator:(id)arg2 ;
@end
