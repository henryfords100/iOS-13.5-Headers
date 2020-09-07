/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {

	SEL _countryCodeSelector;
	NSString* _previousValue;

}
-(void)dealloc;
-(id)countryCode;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN0)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
@end
