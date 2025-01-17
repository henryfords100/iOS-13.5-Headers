/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUEmbedConfigurationLoader.h>

@protocol FCNewsAppConfigurationManager;
@class SXJSONDictionary, FCFlintResourceManager, FCAsyncOnceOperation, NSString;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader> {

	SXJSONDictionary* _embedConfiguration;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	FCAsyncOnceOperation* _asyncOnceOperation;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                          //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * asyncOnceOperation;                              //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONDictionary * embedConfiguration;                                //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(FCFlintResourceManager *)flintResourceManager;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
-(id)loadEmbededConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(SXJSONDictionary *)embedConfiguration;
-(id)asyncLoadEmbedConfigurationOnceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

