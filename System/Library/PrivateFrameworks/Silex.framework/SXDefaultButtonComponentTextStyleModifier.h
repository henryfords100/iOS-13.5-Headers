/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class NSString;

@interface SXDefaultButtonComponentTextStyleModifier : NSObject <SXDOMModifying> {

	BOOL _shouldReturnUnmodifiedDOM;

}

@property (assign,nonatomic) BOOL shouldReturnUnmodifiedDOM;              //@synthesize shouldReturnUnmodifiedDOM=_shouldReturnUnmodifiedDOM - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldReturnUnmodifiedDOM;
-(void)setShouldReturnUnmodifiedDOM:(BOOL)arg1 ;
@end

