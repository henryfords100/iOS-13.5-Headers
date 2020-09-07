/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UISceneOpenURLOptions, NSDictionary;

@interface UIOpenURLContext : NSObject {

	NSURL* _URL;
	UISceneOpenURLOptions* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * optionsDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * URLOptionsDictionary; 
@property (nonatomic,copy,readonly) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UISceneOpenURLOptions * options;                       //@synthesize options=_options - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UISceneOpenURLOptions *)options;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)URLOptionsDictionary;
-(NSDictionary *)optionsDictionary;
@end
