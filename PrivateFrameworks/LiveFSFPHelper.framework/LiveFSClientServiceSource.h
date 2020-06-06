/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class NSString, LiveFSFPExtensionHelper;

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* ex;
	NSString* ident;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
-(NSString *)serviceName;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
@end
