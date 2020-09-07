/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject {

	NSDictionary* _properties;
	NSString* _preferredAssetFlavor;

}

@property (nonatomic,readonly) NSDictionary * properties;                //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * preferredAssetFlavor;              //@synthesize preferredAssetFlavor=_preferredAssetFlavor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(NSString *)preferredAssetFlavor;
@end
