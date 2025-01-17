/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUHistogramRenderResult.h>

@class NUImageHistogram, NSString;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult> {

	NUImageHistogram* _histogram;

}

@property (readonly) NUImageHistogram * histogram;                   //@synthesize histogram=_histogram - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NUImageHistogram *)histogram;
-(id)initWithHistogram:(id)arg1 ;
@end

