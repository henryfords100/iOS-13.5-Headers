/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTEnvironmentUIKitStoreDelegate.h>

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentUIKitStoreDelegate {

	/*^block*/id __pageURLBlock;
	/*^block*/id __resourceRevNumBlock;
	/*^block*/id __hostAppBlock;

}

@property (nonatomic,copy) id _pageURLBlock;                     //@synthesize _pageURLBlock=__pageURLBlock - In the implementation block
@property (nonatomic,copy) id _resourceRevNumBlock;              //@synthesize _resourceRevNumBlock=__resourceRevNumBlock - In the implementation block
@property (nonatomic,copy) id _hostAppBlock;                     //@synthesize _hostAppBlock=__hostAppBlock - In the implementation block
-(id)init;
-(id)hostApp;
-(id)pageUrl;
-(id)resourceRevNum;
-(id)initWithPageURLBlock:(/*^block*/id)arg1 resourceRevNumBlock:(/*^block*/id)arg2 hostAppBlock:(/*^block*/id)arg3 ;
-(id)_hostAppBlock;
-(id)_pageURLBlock;
-(id)_resourceRevNumBlock;
-(void)set_pageURLBlock:(id)arg1 ;
-(void)set_resourceRevNumBlock:(id)arg1 ;
-(void)set_hostAppBlock:(id)arg1 ;
@end

