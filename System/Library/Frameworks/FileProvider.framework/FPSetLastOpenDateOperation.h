/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPTransformOperation.h>

@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPTransformOperation {

	NSArray* _items;
	NSDate* _date;

}
-(id)fp_prettyDescription;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 date:(id)arg2 ;
@end

