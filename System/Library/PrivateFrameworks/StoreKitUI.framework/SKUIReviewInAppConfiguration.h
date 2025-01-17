/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIViewController, SKUIClientContext, UIImage;

@interface SKUIReviewInAppConfiguration : NSObject {

	BOOL _sandboxed;
	NSString* _itemID;
	NSString* _title;
	UIViewController* _viewController;
	SKUIClientContext* _clientContext;
	NSString* _customDescription;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * itemID;                                //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSString * customDescription;                     //@synthesize customDescription=_customDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;              //@synthesize sandboxed=_sandboxed - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIImage *)icon;
-(UIViewController *)viewController;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)customDescription;
-(void)setCustomDescription:(NSString *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(BOOL)isSandboxed;
-(void)setSandboxed:(BOOL)arg1 ;
@end

