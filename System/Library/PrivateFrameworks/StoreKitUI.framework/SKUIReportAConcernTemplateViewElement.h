/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement {

	NSURL* _reportConcernURL;
	long long _itemIdentifier;
	NSString* _reportConcernExplanation;

}

@property (nonatomic,copy,readonly) NSURL * reportConcernURL;                         //@synthesize reportConcernURL=_reportConcernURL - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportConcernExplanation;              //@synthesize reportConcernExplanation=_reportConcernExplanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonElements; 
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSURL *)reportConcernURL;
-(NSString *)reportConcernExplanation;
-(NSArray *)reasonElements;
@end
