/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;


@protocol INRideOptionExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@property (nonatomic,copy) NSNumber * usesMeteredFare; 
@property (nonatomic,copy) NSString * disclaimerMessage; 
@property (nonatomic,copy) NSArray * availablePartySizeOptions; 
@property (nonatomic,copy) NSString * availablePartySizeOptionsSelectionPrompt; 
@property (nonatomic,copy) NSString * specialPricing; 
@property (nonatomic,copy) INImage * specialPricingBadgeImage; 
@property (nonatomic,copy) NSArray * fareLineItems; 
@property (nonatomic,retain) NSUserActivity * userActivityForBookingInApplication; 
@required
-(id)init;
-(NSString *)name;
-(void)setName:(id)arg1;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(NSString *)specialPricing;
-(void)setSpecialPricing:(id)arg1;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(id)arg1;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(id)arg1;

@end
