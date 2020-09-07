/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSNumber, NSString;

@interface SKUIReportAConcernReasonViewElement : SKUIViewElement {

	NSNumber* _reasonID;
	NSString* _name;
	NSString* _uppercaseName;

}

@property (nonatomic,copy,readonly) NSNumber * reasonID;                   //@synthesize reasonID=_reasonID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uppercaseName;              //@synthesize uppercaseName=_uppercaseName - In the implementation block
-(NSString *)name;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSNumber *)reasonID;
-(NSString *)uppercaseName;
@end
