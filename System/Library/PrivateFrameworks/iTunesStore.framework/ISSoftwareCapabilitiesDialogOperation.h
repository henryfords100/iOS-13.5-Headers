/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {

	NSDictionary* _mismatches;
	id _requiredCapabilities;

}

@property (readonly) NSDictionary * mismatches; 
@property (readonly) id requiredCapabilities; 
-(void)dealloc;
-(void)run;
-(id)requiredCapabilities;
-(id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2 ;
-(void)_postDefaultDialog;
-(NSDictionary *)mismatches;
@end

